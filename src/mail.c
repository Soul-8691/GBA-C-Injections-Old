#include "../include/global.h"
#include "../include/gflib.h"
#include "../include/scanline_effect.h"
#include "../include/palette.h"
#include "../include/text_window.h"
#include "../include/easy_chat.h"
#include "../include/mail.h"
#include "../include/task.h"
#include "../include/menu.h"
#include "../include/mail_data.h"
#include "../include/player_pc.h"
#include "../include/overworld.h"
#include "../include/help_system.h"
#include "../include/menu_helpers.h"
#include "../include/new_menu_helpers.h"
#include "../include/graphics.h"
#include "../include/pokemon_icon.h"
#include "../include/string_util.h"
#include "../include/strings.h"
#include "../include/constants/items.h"

struct MailAttrStruct
{
    u8 numRows;
    u8 nameY;
    u8 nameX;
    u8 messageTop;
    u8 messageLeft;
    const struct MailEcWordLayout * linesLayout;
};

struct MailViewResources {
    u8 messageLinesBuffer[8][26];
    u8 authorNameBuffer[12];
    void (*savedCallback)(void);
    void (*showMailCallback)(void);
    struct Mail * mail;
    bool8 messageExists;
    u8 nameX;
    u8 mailType;
    u8 monIconType;
    u8 monIconSpriteId;
    u8 unused;
    u8 mailArrangementType;
    u8 *(*copyEasyChatWord)(u8 *dest, u16 word);
    u8 *(*convertEasyChatWordsToString)(u8 *dest, const u16 *src, u16 length1, u16 length2);
    const struct MailAttrStruct * messageLayout;
    u16 bg1TilemapBuffer[BG_SCREEN_SIZE];
    u16 bg2TilemapBuffer[BG_SCREEN_SIZE];
};

extern struct MailViewResources * sMailViewResources;
extern const struct MailAttrStruct sMessageLayouts_3x3[];
extern const struct MailAttrStruct sMessageLayouts_5x2[];

extern void CB2_InitMailView(void);

enum MailIconParam
{
    MAIL_ICON_NONE = 0,
    MAIL_ICON_BEAD,
    MAIL_ICON_DREAM
};

void ReadMail(struct Mail * mail, void (*savedCallback)(void), bool8 messageExists)
{
    u16 sp0;
    u16 species;
    sMailViewResources = AllocZeroed(sizeof(struct MailViewResources));
    sMailViewResources->unused = 2;
    sMailViewResources->mailArrangementType = 1;
    sMailViewResources->copyEasyChatWord = CopyEasyChatWord;
    sMailViewResources->convertEasyChatWordsToString = ConvertEasyChatWordsToString;
    if (IS_ITEM_MAIL(mail->itemId))
    {
        sMailViewResources->mailType = ITEM_TO_MAIL(mail->itemId);
    }
    else
    {
        sMailViewResources->mailType = ITEM_TO_MAIL(ITEM_ORANGE_MAIL);
        messageExists = FALSE;
    }
    switch (sMailViewResources->mailArrangementType)
    {
    case 0:
    default:
        sMailViewResources->messageLayout = &sMessageLayouts_3x3[sMailViewResources->mailType];
        break;
    case 1:
        sMailViewResources->messageLayout = &sMessageLayouts_5x2[sMailViewResources->mailType];
        break;
    }
    species = MailSpeciesToSpecies(mail->species, &sp0);
    if (species != SPECIES_NONE && species < NUM_SPECIES)
    {
        switch (sMailViewResources->mailType)
        {
        default:
            sMailViewResources->monIconType = MAIL_ICON_NONE;
            break;
        case ITEM_TO_MAIL(ITEM_BEAD_MAIL):
            sMailViewResources->monIconType = MAIL_ICON_BEAD;
            break;
        case ITEM_TO_MAIL(ITEM_DREAM_MAIL):
            sMailViewResources->monIconType = MAIL_ICON_DREAM;
            break;
        }
    }
    else
    {
        sMailViewResources->monIconType = MAIL_ICON_NONE;
    }
    sMailViewResources->mail = mail;
    sMailViewResources->savedCallback = savedCallback;
    sMailViewResources->messageExists = messageExists;
    SetMainCallback2(CB2_InitMailView);
}