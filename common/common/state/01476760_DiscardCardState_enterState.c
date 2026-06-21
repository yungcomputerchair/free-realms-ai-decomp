// addr: 0x01476760
// name: DiscardCardState_enterState
// subsystem: common/common/command
// source (binary assert): common/common/state/DiscardCardState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int DiscardCardState_enterState(void * this) */

int __fastcall DiscardCardState_enterState(void *this)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_EDI;
  undefined8 uVar7;
  char *fmt;
  
                    /* Enters DiscardCardState: logs the state name, validates required
                       returnValueMap keys for player/card/discard/count/play area/random/cost-mod,
                       stores them on the state, and dispatches discard handling when the game flag
                       permits. Evidence is the repeated DiscardCardState.cpp assertions and
                       'DiscardCardState::enterState' string. */
  fmt = "DiscardCardState::enterState";
  pvVar4 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar4,fmt,unaff_EDI);
  (**(code **)(*(int *)this + 0x4c))();
  iVar5 = StateMachine_popReturnValueMap();
  if (iVar5 == 0) {
    FUN_012f5a60("returnValueMap","..\\common\\common\\state\\DiscardCardState.cpp",0x41);
  }
  cVar1 = ReturnValueMap_hasIntegerKey(4);
  if (cVar1 == '\0') {
    FUN_012f5a60("returnValueMap->hasIntegerKey(kPlayerReturn)",
                 "..\\common\\common\\state\\DiscardCardState.cpp",0x43);
  }
  uVar6 = ReturnValueMap_getInteger(4);
  *(undefined4 *)((int)this + 0xf8) = uVar6;
  cVar1 = ReturnValueMap_hasIntegerKey(3);
  if (cVar1 == '\0') {
    FUN_012f5a60("returnValueMap->hasIntegerKey(kCardPlayedReturn)",
                 "..\\common\\common\\state\\DiscardCardState.cpp",0x46);
  }
  uVar6 = ReturnValueMap_getInteger(3);
  *(undefined4 *)((int)this + 0xfc) = uVar6;
  uVar7 = StateMachineState_getGame(uVar6);
  pvVar4 = find_play_element_in_maps((void *)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  pvVar4 = (void *)FUN_00d8d382(pvVar4,0,&PlayElement::RTTI_Type_Descriptor,
                                &Card::RTTI_Type_Descriptor,0);
  set_play_element_id_field(*(void **)((int)this + 0xe8),pvVar4);
  cVar1 = ReturnValueMap_hasIntegerKey(0x30);
  if (cVar1 == '\0') {
    FUN_012f5a60("returnValueMap->hasIntegerKey(kDiscardReturn)",
                 "..\\common\\common\\state\\DiscardCardState.cpp",0x4c);
  }
  uVar6 = ReturnValueMap_getInteger(0x30);
  *(undefined4 *)((int)this + 0x100) = uVar6;
  cVar1 = ReturnValueMap_hasIntegerKey(0x15);
  if (cVar1 == '\0') {
    FUN_012f5a60("returnValueMap->hasIntegerKey(kNumShownReturn)",
                 "..\\common\\common\\state\\DiscardCardState.cpp",0x4f);
  }
  uVar6 = ReturnValueMap_getInteger(0x15);
  *(undefined4 *)((int)this + 0x104) = uVar6;
  cVar1 = ReturnValueMap_hasIntegerKey(0xf);
  if (cVar1 == '\0') {
    FUN_012f5a60("returnValueMap->hasIntegerKey(kPlayAreaReturn)",
                 "..\\common\\common\\state\\DiscardCardState.cpp",0x52);
  }
  uVar6 = ReturnValueMap_getInteger(0xf);
  *(undefined4 *)((int)this + 0x108) = uVar6;
  cVar1 = ReturnValueMap_hasBooleanKey(0x13);
  if (cVar1 == '\0') {
    FUN_012f5a60("returnValueMap->hasBooleanKey(kRandomReturn)",
                 "..\\common\\common\\state\\DiscardCardState.cpp",0x55);
  }
  uVar2 = ReturnValueMap_getBoolean(0x13);
  *(undefined1 *)((int)this + 0x10c) = uVar2;
  cVar1 = ReturnValueMap_hasBooleanKey(9);
  if (cVar1 == '\0') {
    FUN_012f5a60("returnValueMap->hasBooleanKey(kCostModReturn)",
                 "..\\common\\common\\state\\DiscardCardState.cpp",0x58);
  }
  uVar2 = ReturnValueMap_getBoolean(9);
  *(undefined1 *)((int)this + 0x10d) = uVar2;
  if ((*(int *)((int)this + 0x108) == 0xb) || (*(int *)((int)this + 0x108) == 0x1e)) {
    DiscardCardState_setSpecialDiscardFlag(true);
  }
  pvVar4 = (void *)StateMachineState_getGame();
  bVar3 = Game_getFlag_14d(pvVar4);
  if (bVar3) {
    iVar5 = DiscardCardState_discardCards();
    return iVar5;
  }
  return 2;
}

