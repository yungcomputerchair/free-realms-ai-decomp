// addr: 0x0138e7d0
// name: Card_hasModifierKeyword
// subsystem: common/common/game
// source (binary assert): common/common/game/Card.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Card_hasModifierKeyword(void * this, int keywordID_) */

bool __thiscall Card_hasModifierKeyword(void *this,int keywordID_)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  void *element;
  uint uVar5;
  undefined4 *puVar6;
  int local_b8;
  uint uStack_b4;
  int iStack_b0;
  undefined4 *puStack_ac;
  int iStack_a8;
  undefined1 auStack_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Returns whether any active modifier on the card provides the requested
                       keyword id. It logs each keyword with its notFlag while scanning modifiers.
                        */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01683aeb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_b8 = 0;
  cVar2 = (**(code **)(*(int *)this + 0x48))(DAT_01b839d8 ^ (uint)&stack0xffffff38);
  if (cVar2 == '\0') {
LAB_0138e999:
    bVar3 = false;
  }
  else {
    EvaluationEnvironment_ctor();
    uStack_4 = 0;
    EvaluationEnvironment_setGame(*(undefined4 *)((int)this + 0x30));
    set_play_element_id_field(auStack_a0,this);
    pvVar4 = PlayArea_findPlayerElementById(*(void **)((int)this + 0x30),*(int *)((int)this + 0x40))
    ;
    if (pvVar4 != (void *)0x0) {
      FUN_013815b0(pvVar4);
    }
    EvaluationEnvironment_setGame(*(undefined4 *)((int)this + 0x30));
    (**(code **)(*(int *)this + 0x214))(0xdc,&local_b8);
    puStack_ac = *(undefined4 **)(local_b8 + 8);
    iStack_b0 = local_b8;
    if (puStack_ac < *(undefined4 **)(local_b8 + 4)) {
      FUN_00d83c2d();
    }
    iVar1 = local_b8;
    puVar6 = *(undefined4 **)(local_b8 + 4);
    if (*(undefined4 **)(local_b8 + 8) < puVar6) {
      FUN_00d83c2d();
    }
    iStack_a8 = iVar1;
    while( true ) {
      iVar1 = iStack_a8;
      if ((iStack_a8 == 0) || (iStack_a8 != iStack_b0)) {
        FUN_00d83c2d();
      }
      if (puVar6 == puStack_ac) {
        uStack_4 = 0xffffffff;
        FUN_01385460();
        goto LAB_0138e999;
      }
      if (iVar1 == 0) {
        FUN_00d83c2d();
      }
      if (*(undefined4 **)(iVar1 + 8) <= puVar6) {
        FUN_00d83c2d();
      }
      pvVar4 = (void *)*puVar6;
      if (pvVar4 == (void *)0x0) {
        FUN_012f5a60("modifier","..\\common\\common\\game\\Card.cpp",0x10cb);
      }
      element = EvaluationEnvironment_getOriginCard(auStack_a0);
      set_play_element_id_field(auStack_a0,this);
      uVar5 = AttributeModifier_getAttributeID(pvVar4);
      set_play_element_id_field(auStack_a0,element);
      uStack_b4 = uVar5;
      PackedId_consumeHighBitFlag_alt(&uStack_b4);
      Game_logGeneral(*(void **)((int)this + 0x30),"Got Keyword: %d (notFlag: %d)",uStack_b4);
      if (keywordID_ == uVar5) break;
      if (*(undefined4 **)(iStack_a8 + 8) <= puVar6) {
        FUN_00d83c2d();
      }
      puVar6 = puVar6 + 1;
    }
    uStack_4 = 0xffffffff;
    FUN_01385460();
    bVar3 = true;
  }
  ExceptionList = local_c;
  return bVar3;
}

