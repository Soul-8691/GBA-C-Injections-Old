#include "../include/global.h"
#include "../include/m4a.h"
#include "../include/task.h"
#include "../include/scanline_effect.h"
#include "../include/new_menu_helpers.h"
#include "../include/link.h"
#include "../include/menu.h"
#include "../include/random.h"
#include "../include/save.h"
#include "../include/new_game.h"
#include "../include/decompress.h"
#include "../include/util.h"
#include "../include/trig.h"
#include "../include/constants/songs.h"
#include "../include/window.h"
#include "../include/bg.h"

// Background IDs for Game Freak logo scene
enum {
    BG_GF_TEXT_LOGO = 2,
    BG_GF_BACKGROUND   
};

// Window ids for sWindowTemplates (only one)
enum {
    WIN_GF_TEXT_LOGO,
    WIN_COUNT
};

#define NUM_GENGAR_BACK_SPRITES 4

struct IntroSequenceData;

typedef void (*IntroCallback)(struct IntroSequenceData *);

struct IntroSequenceData
{
    IntroCallback callback;
    u8 state;
    u8 taskId;
    bool8 gengarAttackLanded;
    u16 data[5]; // [0] and [1] are set but never read, the rest are unused
    u16 timer;
    struct Sprite *gameFreakLogoArtSprite;
    struct Sprite *scene3NidorinoSprite;
    struct Sprite *scene2GengarSprite;
    struct Sprite *scene2NidorinoSprite;
    struct Sprite *scene3GrassSprite;
    struct Sprite *scene3GengarSprites[NUM_GENGAR_BACK_SPRITES];
    u8 unused0[4];
    u8 gameFreakLogoGfx[0x400];
    u8 gameFreakTextGfx[0x400];
    u8 unused1[0x2080];
}; // size: 0x28BC

extern void IntroCB_Scene1(struct IntroSequenceData * ptr);

static const u8 gTitleScreenGameFreakLogoLapras_Gfx[] = INCBIN_U8( "graphics/4bpp/intro/lapras.4bpp.lz");
static const u16 gTitleScreenGameFreakLogoLapras_Pal[] = INCBIN_U16( "graphics/4bpp/intro/lapras.4bpp.lz");
extern const u8 sGameFreakText_Gfx[];
extern const u32 sGameFreakLogo_Gfx[];
extern void IntroCB_GF_OpenWindow(struct IntroSequenceData * ptr);
extern void SetIntroCB(struct IntroSequenceData * ptr, IntroCallback cb);
extern const u32 sStar_Gfx[];
extern const u32 sSparklesSmall_Gfx[];
extern const u32 sSparklesBig_Gfx[];
extern const u32 sPresents_Gfx[];

enum {
    GFXTAG_STAR,
    GFXTAG_SPARKLES_SMALL,
    GFXTAG_SPARKLES_BIG,
    GFXTAG_GF_LOGO,
    GFXTAG_PRESENTS,
    GFXTAG_SCENE3_NIDORINO,
    GFXTAG_SCENE2_GENGAR,
    GFXTAG_SCENE2_NIDORINO,
    GFXTAG_SCENE3_GRASS,
    GFXTAG_SCENE3_GENGAR,
    GFXTAG_SCENE3_SWIPE,
    GFXTAG_SCENE3_RECOIL_DUST,
};

const struct CompressedSpriteSheet sSpriteSheets_GameFreakScene[] = {
    {sStar_Gfx,          0x80,  GFXTAG_STAR},
    {sSparklesSmall_Gfx, 0x80,  GFXTAG_SPARKLES_SMALL},
    {sSparklesBig_Gfx,   0x800, GFXTAG_SPARKLES_BIG},
    {sGameFreakLogo_Gfx, 0x400, GFXTAG_GF_LOGO},
    {sPresents_Gfx,      0x100, GFXTAG_PRESENTS}
};

static const struct OamData sOam_Lapras = {
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_BLEND,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(64x64),
    .matrixNum = 0,
    .size = SPRITE_SIZE(64x64),
    .tileNum = 0x000,
    .priority = 3,
    .paletteNum = 0
};

enum {
    PALTAG_STAR,
    PALTAG_SPARKLES,
    PALTAG_UNUSED_2,
    PALTAG_GF,
    PALTAG_UNUSED_4,
    PALTAG_UNUSED_5,
    PALTAG_GENGAR,
    PALTAG_NIDORINO,
    PALTAG_SCENE3_GRASS,
    PALTAG_UNUSED_9,
    PALTAG_SCENE3_SWIPE,
    PALTAG_SCENE3_RECOIL_DUST,
};

static const struct SpriteTemplate sSpriteTemplate_LaprasArt = {
    .tileTag = GFXTAG_GF_LOGO,
    .paletteTag = PALTAG_GF,
    .oam = &sOam_Lapras,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy
};

/**
    static struct Sprite *GFScene_CreateLogoSprite(void)
    {
        u8 spriteId = CreateSprite(&sSpriteTemplate_LaprasArt, 120, 70, 4);
        return &gSprites[spriteId];
    }
*/

static const struct WindowTemplate sWindowTemplates[WIN_COUNT + 1] = {
	[WIN_GF_TEXT_LOGO] = {
	    .bg = BG_GF_TEXT_LOGO,
	    .tilemapLeft = 6,
	    .tilemapTop = 4,
	    .width = 18,
	    .height = 9,
	    .paletteNum = 13,
	    .baseBlock = 0x000
    },
    [WIN_COUNT] = DUMMY_WIN_TEMPLATE
};

void IntroCB_Init(struct IntroSequenceData * this)
{
    switch (this->state)
    {
    case 0:
        InitWindows(sWindowTemplates);
        LZ77UnCompWram(sGameFreakText_Gfx, this->gameFreakTextGfx);
        LZ77UnCompWram(sGameFreakLogo_Gfx, this->gameFreakLogoGfx);
        FillBgTilemapBufferRect(BG_GF_TEXT_LOGO, 0x000, 0, 0, 32, 32, 17);
        FillWindowPixelBuffer(WIN_GF_TEXT_LOGO, PIXEL_FILL(0));
        BlitBitmapToWindow(WIN_GF_TEXT_LOGO, this->gameFreakTextGfx, 0, 40, 144, 16);
        PutWindowTilemap(WIN_GF_TEXT_LOGO);
        CopyWindowToVram(WIN_GF_TEXT_LOGO, COPYWIN_FULL);
        this->state++;
        break;
    case 1:
        if (!IsDma3ManagerBusyWithBgCopy())
            SetIntroCB(this, IntroCB_GF_OpenWindow);
        break;
    }
}

void IntroCB_GF_RevealLogo(struct IntroSequenceData * this)
{
    switch (this->state)
    {
    case 0:
        SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT1_OBJ | BLDCNT_EFFECT_BLEND | BLDCNT_TGT2_ALL);
        StartBlendTask(0, 16, 16, 0, 16, 0);
        this->data[0] = 0; // Never read
        this->data[1] = 16; // Never read
        this->timer = 0;
        this->state++;
        break;
    case 1:
        this->gameFreakLogoArtSprite = GFScene_CreateLogoSprite();
        this->state++;
        break;
    case 2:
        if (!IsBlendTaskActive())
        {
            BlitBitmapToWindow(WIN_GF_TEXT_LOGO, this->gameFreakLogoGfx, 0x38, 0x06, 0x20, 0x40);
            BlitBitmapToWindow(WIN_GF_TEXT_LOGO, this->gameFreakTextGfx, 0x00, 0x28, 0x90, 0x10);
            CopyWindowToVram(WIN_GF_TEXT_LOGO, COPYWIN_GFX);
            this->state++;
        }
        break;
    case 3:
        if (!IsDma3ManagerBusyWithBgCopy())
        {
            DestroySprite(this->gameFreakLogoArtSprite);
        #if REVISION >= 1
            GFScene_CreatePresentsSprite();
        #endif
            this->timer = 0;
            this->state++;
        }
        break;
    case 4:
        if (++this->timer > 90)
        {
            SetGpuRegBits(REG_OFFSET_BLDCNT, BLDCNT_TGT1_BG2);
            StartBlendTask(16, 0, 0, 16, 20, 0);
            this->state++;
        }
        break;
    case 5:
        if (!IsBlendTaskActive())
        {
            HideBg(BG_GF_TEXT_LOGO);
            this->state++;
        }
        break;
    case 6:
        ResetSpriteData();
        FreeAllSpritePalettes();
        this->timer = 0;
        this->state++;
        break;
    case 7:
        if (++this->timer > 20)
        {
            SetGpuReg(REG_OFFSET_BLDCNT, 0);
            SetIntroCB(this, IntroCB_Scene1);
        }
        break;
    }
}