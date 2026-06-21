// addr: 0x01515210
// name: IntroduceCardState_enterState
// subsystem: common/rules/state
// source (binary assert): common/common/state/IntroduceCardState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall IntroduceCardState_enterState(int *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  char *fmt;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* IntroduceCardState enter handler that reads kCardPlayedReturn and, on the
                       client/display path, builds and dispatches a command for the introduced card.
                       Evidence is IntroduceCardState::enterState and IntroduceCardState.cpp
                       returnValueMap asserts. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016b716b;
  local_c = ExceptionList;
  piVar3 = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  ExceptionList = &local_c;
  fmt = "IntroduceCardState::enterState";
  pvVar4 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar4,fmt,piVar3);
  (**(code **)(*param_1 + 0x4c))();
  iVar5 = StateMachine_popReturnValueMap();
  if (iVar5 == 0) {
    FUN_012f5a60("returnValueMap","..\\common\\common\\state\\IntroduceCardState.cpp",0x23);
  }
  cVar1 = ReturnValueMap_hasIntegerKey(3);
  if (cVar1 == '\0') {
    FUN_012f5a60("returnValueMap->hasIntegerKey(kCardPlayedReturn)",
                 "..\\common\\common\\state\\IntroduceCardState.cpp",0x24);
  }
  uVar6 = ReturnValueMap_getInteger(3);
  StateMachine_destroyReturnValueMap(iVar5);
  pvVar4 = (void *)StateMachineState_getGame();
  bVar2 = Game_getFlag_14d(pvVar4);
  if (bVar2) {
    uVar9 = StateMachineState_getGame
                      (uVar6,0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0);
    pvVar4 = find_play_element_in_maps((void *)uVar9,(int)((ulonglong)uVar9 >> 0x20));
    iVar5 = FUN_00d8d382(pvVar4);
    if (iVar5 != 0) {
      piVar7 = (int *)StateMachineState_getGame();
      (**(code **)(*piVar7 + 0x104))(0,iVar5);
    }
    pvVar4 = Mem_Alloc(0x3c);
    uStack_4 = 0;
    if (pvVar4 == (void *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar8 = (undefined4 *)StateMachineState_getGame();
      puVar8 = GameCommand_SynchPoint_ctor(pvVar4,puVar8,piVar3);
    }
    uStack_4 = 0xffffffff;
    pvVar4 = (void *)StateMachineState_getGame();
    Game_dispatchCommandToAllPlayers(pvVar4,puVar8);
    ExceptionList = local_c;
    return 1;
  }
  ExceptionList = local_c;
  return 2;
}

