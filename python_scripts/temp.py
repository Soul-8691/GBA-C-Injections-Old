for i in range(51, 121):
    print("""    {
        .name = _("TM""" + str(i) + """"),
        .itemId = ITEM_TM""" + str(i) + """,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gMoveDescription_FocusPunch,
        .importance = 0,
        .registrability = 0,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = NULL,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0
    },""")