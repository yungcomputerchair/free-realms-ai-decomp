// addr: 0x01399e90
// name: Card_collectModifierKeywords
// subsystem: common/common/game
// source (binary assert): common/common/game/Card.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Card_collectModifierKeywords(void * this) */

void __fastcall Card_collectModifierKeywords(void *this)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int local_b0;
  uint uStack_ac;
  uint uStack_a8;
  int iStack_a4;
  undefined1 auStack_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Collects keyword ids produced by the card's attribute modifiers, ignoring
                       modifiers marked with a not flag. It iterates modifier data and appends
                       unique positive keywords. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01684bdb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_b0 = 0;
  cVar3 = (**(code **)(*(int *)this + 0x48))(DAT_01b839d8 ^ (uint)&stack0xffffff40);
  if (cVar3 != '\0') {
    EvaluationEnvironment_ctor();
    uStack_4 = 0;
    EvaluationEnvironment_setGame(*(undefined4 *)((int)this + 0x30));
    set_play_element_id_field(auStack_a0,this);
    pvVar5 = PlayArea_findPlayerElementById(*(void **)((int)this + 0x30),*(int *)((int)this + 0x40))
    ;
    if (pvVar5 != (void *)0x0) {
      FUN_013815b0(pvVar5);
    }
    EvaluationEnvironment_setGame(*(undefined4 *)((int)this + 0x30));
    (**(code **)(*(int *)this + 0x214))(0xdc,&local_b0);
    puVar1 = *(undefined4 **)(local_b0 + 8);
    iStack_a4 = local_b0;
    if (puVar1 < *(undefined4 **)(local_b0 + 4)) {
      FUN_00d83c2d();
    }
    iVar2 = local_b0;
    puVar6 = *(undefined4 **)(local_b0 + 4);
    if (*(undefined4 **)(local_b0 + 8) < puVar6) {
      FUN_00d83c2d();
    }
    while( true ) {
      if ((iVar2 == 0) || (iVar2 != iStack_a4)) {
        FUN_00d83c2d();
      }
      if (puVar6 == puVar1) break;
      if (iVar2 == 0) {
        FUN_00d83c2d();
      }
      if (*(undefined4 **)(iVar2 + 8) <= puVar6) {
        FUN_00d83c2d();
      }
      pvVar5 = (void *)*puVar6;
      if (pvVar5 == (void *)0x0) {
        FUN_012f5a60("modifier","..\\common\\common\\game\\Card.cpp",0x10ee);
      }
      uStack_ac = AttributeModifier_getAttributeID(pvVar5);
      uStack_a8 = uStack_ac;
      bVar4 = PackedId_consumeHighBitFlag_alt(&uStack_ac);
      if (!bVar4) {
        FUN_0042c155(&uStack_a8);
      }
      if (*(undefined4 **)(iVar2 + 8) <= puVar6) {
        FUN_00d83c2d();
      }
      puVar6 = puVar6 + 1;
    }
    uStack_4 = 0xffffffff;
    FUN_01385460();
  }
  ExceptionList = local_c;
  return;
}

