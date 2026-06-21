// addr: 0x0138e2c0
// name: Card_hasSuppressEffect
// subsystem: common/common/game
// source (binary assert): common/common/game/Card.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Card_hasSuppressEffect(void * this, int effectID_) */

bool __thiscall Card_hasSuppressEffect(void *this,int effectID_)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  void *pvVar5;
  void *element;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iStack_c4;
  undefined1 local_c0 [4];
  int iStack_bc;
  uint local_b4;
  int iStack_b0;
  undefined4 *puStack_ac;
  int iStack_a8;
  undefined1 auStack_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* Tests whether the card suppresses an effect id, first checking instance
                       suppress-effect data and then active modifiers. It handles negated effect ids
                       and logs matched/not matched outcomes. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01683ab6;
  local_c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffff28;
  ExceptionList = &local_c;
  local_b4 = effectID_;
  bVar1 = PackedId_consumeHighBitFlag(&local_b4);
  if (*(int *)((int)this + 100) == 0) {
    cVar2 = (**(code **)(*(int *)this + 0x1e8))();
    if (cVar2 != '\0') goto LAB_0138e33c;
    Game_logGeneral(*(void **)((int)this + 0x30),"No instance data in has Suppresseffect.",uVar4);
LAB_0138e525:
    bVar1 = false;
  }
  else {
LAB_0138e33c:
    FUN_012fa910();
    uStack_4 = 0;
    cVar2 = (**(code **)(*(int *)this + 4))(0xa2,local_c0);
    if (cVar2 == '\0') {
LAB_0138e3c7:
      iStack_c4 = 0;
      EvaluationEnvironment_ctor();
      uStack_4 = CONCAT31(uStack_4._1_3_,1);
      pvVar5 = PlayArea_findPlayerElementById
                         (*(void **)((int)this + 0x30),*(int *)((int)this + 0x40));
      if (pvVar5 != (void *)0x0) {
        FUN_013815b0(pvVar5);
      }
      EvaluationEnvironment_setGame(*(undefined4 *)((int)this + 0x30));
      set_play_element_id_field(auStack_a0,this);
      (**(code **)(*(int *)this + 0x214))(0x165,&iStack_c4);
      puVar7 = *(undefined4 **)(iStack_c4 + 8);
      iStack_b0 = iStack_c4;
      puStack_ac = puVar7;
      if (puVar7 < *(undefined4 **)(iStack_c4 + 4)) {
        FUN_00d83c2d();
      }
      iVar6 = iStack_c4;
      puVar8 = *(undefined4 **)(iStack_c4 + 4);
      if (*(undefined4 **)(iStack_c4 + 8) < puVar8) {
        FUN_00d83c2d();
      }
      iStack_a8 = iVar6;
      while( true ) {
        iVar6 = iStack_a8;
        if ((iStack_a8 == 0) || (iStack_a8 != iStack_b0)) {
          FUN_00d83c2d();
        }
        if (puVar8 == puVar7) {
          Game_logGeneral(*(void **)((int)this + 0x30),"Not Matched.",uVar4);
          if (!bVar1) goto LAB_0138e500;
          goto LAB_0138e4d2;
        }
        if (iVar6 == 0) {
          FUN_00d83c2d();
        }
        if (*(undefined4 **)(iVar6 + 8) <= puVar8) {
          FUN_00d83c2d();
        }
        pvVar5 = (void *)*puVar8;
        element = EvaluationEnvironment_getOriginCard(auStack_a0);
        set_play_element_id_field(auStack_a0,this);
        iVar6 = AttributeModifier_getAttributeID(pvVar5);
        set_play_element_id_field(auStack_a0,element);
        if (effectID_ == iVar6) break;
        if (*(undefined4 **)(iStack_a8 + 8) <= puVar8) {
          FUN_00d83c2d();
        }
        puVar8 = puVar8 + 1;
        puVar7 = puStack_ac;
      }
      if (bVar1) {
LAB_0138e500:
        uStack_4 = uStack_4 & 0xffffff00;
        FUN_01385460();
LAB_0138e511:
        uStack_4 = 0xffffffff;
        FUN_01300cd0();
        goto LAB_0138e525;
      }
LAB_0138e4d2:
      uStack_4 = uStack_4 & 0xffffff00;
      FUN_01385460();
    }
    else {
      if (iStack_bc != 6) {
        FUN_012f5a60("suppressEffectData.isIntegerListValue()","..\\common\\common\\game\\Card.cpp",
                     0x56f);
      }
      bVar3 = ValueData_containsInt(local_c0,local_b4);
      if (!bVar3) goto LAB_0138e3c7;
      Game_logGeneral(*(void **)((int)this + 0x30),"Matched",uVar4);
      if (bVar1) goto LAB_0138e511;
    }
    uStack_4 = 0xffffffff;
    FUN_01300cd0();
    bVar1 = true;
  }
  ExceptionList = local_c;
  return bVar1;
}

