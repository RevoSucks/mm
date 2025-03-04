/*
 * File: z_en_hidden_nuts.c
 * Overlay: ovl_En_Hidden_Nuts
 * Description: Swamp Spider House - Sleeping Deku Scrub
 */

#include "z_en_hidden_nuts.h"

#define FLAGS 0x02000009

#define THIS ((EnHiddenNuts*)thisx)

void EnHiddenNuts_Init(Actor* thisx, GlobalContext* globalCtx);
void EnHiddenNuts_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnHiddenNuts_Update(Actor* thisx, GlobalContext* globalCtx);
void EnHiddenNuts_Draw(Actor* thisx, GlobalContext* globalCtx);

void func_80BDB2B8(EnHiddenNuts* this, GlobalContext* globalCtx);
void func_80BDB59C(EnHiddenNuts* this, GlobalContext* globalCtx);
void func_80BDB7E8(EnHiddenNuts* this, GlobalContext* globalCtx);
void func_80BDB8F4(EnHiddenNuts* this, GlobalContext* globalCtx);
void func_80BDB978(EnHiddenNuts* this, GlobalContext* globalCtx);
void func_80BDBB48(EnHiddenNuts* this, GlobalContext* globalCtx);
void func_80BDBED4(EnHiddenNuts* this, GlobalContext* globalCtx);

#if 0
const ActorInit En_Hidden_Nuts_InitVars = {
    ACTOR_EN_HIDDEN_NUTS,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_HINTNUTS,
    sizeof(EnHiddenNuts),
    (ActorFunc)EnHiddenNuts_Init,
    (ActorFunc)EnHiddenNuts_Destroy,
    (ActorFunc)EnHiddenNuts_Update,
    (ActorFunc)EnHiddenNuts_Draw,
};

// static ColliderCylinderInit sCylinderInit = {
static ColliderCylinderInit D_80BDC0D0 = {
    { COLTYPE_NONE, AT_NONE, AC_NONE, OC1_ON | OC1_TYPE_PLAYER, OC2_TYPE_1, COLSHAPE_CYLINDER, },
    { ELEMTYPE_UNK0, { 0xF7CFFFFF, 0x00, 0x00 }, { 0xF7CFFFFF, 0x00, 0x00 }, TOUCH_NONE | TOUCH_SFX_NORMAL, BUMP_NONE, OCELEM_ON, },
    { 30, 20, 0, { 0, 0, 0 } },
};

#endif

extern ColliderCylinderInit D_80BDC0D0;

extern UNK_TYPE D_060024CC;

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Hidden_Nuts/EnHiddenNuts_Init.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Hidden_Nuts/EnHiddenNuts_Destroy.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Hidden_Nuts/func_80BDB1B4.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Hidden_Nuts/func_80BDB268.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Hidden_Nuts/func_80BDB2B8.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Hidden_Nuts/func_80BDB580.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Hidden_Nuts/func_80BDB59C.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Hidden_Nuts/func_80BDB788.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Hidden_Nuts/func_80BDB7E8.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Hidden_Nuts/func_80BDB8F4.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Hidden_Nuts/func_80BDB930.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Hidden_Nuts/func_80BDB978.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Hidden_Nuts/func_80BDBA28.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Hidden_Nuts/func_80BDBB48.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Hidden_Nuts/func_80BDBE70.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Hidden_Nuts/func_80BDBED4.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Hidden_Nuts/EnHiddenNuts_Update.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Hidden_Nuts/EnHiddenNuts_Draw.s")
