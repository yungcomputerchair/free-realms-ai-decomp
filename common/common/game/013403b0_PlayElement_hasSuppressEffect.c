// addr: 0x013403b0
// name: PlayElement_hasSuppressEffect
// subsystem: common/common/game
// source (binary assert): common/common/game/PlayElement.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool PlayElement_hasSuppressEffect(void * this, int effectId) */

bool __thiscall PlayElement_hasSuppressEffect(void *this,int effectId)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  void *game;
  char *fmt;
  undefined1 local_18 [4];
  int iStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Checks static suppressEffect integer-list data and, for Card instances,
                       dynamic suppress-effect logic; logs Matched/Not Matched outcomes. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0167c3e8;
  local_c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  bVar1 = PackedId_consumeHighBitFlag((uint *)&effectId);
  iVar5 = FUN_00d8d382(this,0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0);
  if (((iVar5 != 0) &&
      (piVar6 = (int *)FUN_00d8d382(this,0,&PlayElement::RTTI_Type_Descriptor,
                                    &Card::RTTI_Type_Descriptor,0), piVar6[0x19] == 0)) &&
     (cVar2 = (**(code **)(*piVar6 + 0x1e8))(), cVar2 == '\0')) {
    Game_logGeneral(*(void **)((int)this + 0x30),"No instance data in has Suppresseffect.",uVar4);
    ExceptionList = local_c;
    return false;
  }
  FUN_012fa910();
  uStack_4 = 0;
  cVar2 = (**(code **)(*(int *)this + 4))(0xa2,local_18);
  if (cVar2 == '\0') {
LAB_013404e1:
    iVar5 = FUN_00d8d382(this,0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0);
    if (iVar5 != 0) {
      piVar6 = (int *)FUN_00d8d382(this,0,&PlayElement::RTTI_Type_Descriptor,
                                   &Card::RTTI_Type_Descriptor,0);
      cVar2 = (**(code **)(*piVar6 + 0x1d0))(effectId);
      if (cVar2 != '\0') {
        game = *(void **)((int)this + 0x30);
        fmt = "Matched dynamic suppressEffect.";
        goto LAB_013404aa;
      }
    }
    Game_logGeneral(*(void **)((int)this + 0x30),"Not Matched.",uVar4);
    if (bVar1) goto LAB_013404ba;
  }
  else {
    if (iStack_14 != 6) {
      FUN_012f5a60("suppressEffectData.isIntegerListValue()",
                   "..\\common\\common\\game\\PlayElement.cpp",0x192);
    }
    bVar3 = ValueData_containsInt(local_18,effectId);
    if (!bVar3) goto LAB_013404e1;
    game = *(void **)((int)this + 0x30);
    fmt = "Matched";
LAB_013404aa:
    Game_logGeneral(game,fmt,uVar4);
    if (!bVar1) {
LAB_013404ba:
      uStack_4 = 0xffffffff;
      FUN_01300cd0();
      ExceptionList = local_c;
      return true;
    }
  }
  uStack_4 = 0xffffffff;
  FUN_01300cd0();
  ExceptionList = local_c;
  return false;
}

