// addr: 0x01479f50
// name: CloneState_enterState
// subsystem: common/rules/state
// source (binary assert): common/common/state/CloneState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall CloneState_enterState(int *param_1)

{
  char cVar1;
  bool bVar2;
  uint id_;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  void *this;
  undefined4 archetype_;
  undefined8 uVar9;
  char *pcVar10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* CloneState enter handler that reads player/card/command-object returns,
                       clones a card on the display path, patches the clone command object, and
                       dispatches a command. Evidence is CloneState::enterState and CloneState.cpp
                       assertions/logs. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0169febe;
  local_c = ExceptionList;
  id_ = DAT_01b839d8 ^ (uint)&stack0xffffffd4;
  ExceptionList = &local_c;
  pcVar10 = "CloneState::enterState";
  pvVar3 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar3,pcVar10,id_);
  (**(code **)(*param_1 + 0x4c))();
  iVar4 = StateMachine_popReturnValueMap();
  if (iVar4 == 0) {
    FUN_012f5a60("returnValueMap","..\\common\\common\\state\\CloneState.cpp",0x2e);
  }
  cVar1 = ReturnValueMap_hasIntegerKey(4);
  if (cVar1 == '\0') {
    FUN_012f5a60("returnValueMap->hasIntegerKey(kPlayerReturn)",
                 "..\\common\\common\\state\\CloneState.cpp",0x30);
  }
  iVar5 = ReturnValueMap_getInteger(4);
  param_1[0x3f] = iVar5;
  cVar1 = ReturnValueMap_hasIntegerKey(3);
  if (cVar1 == '\0') {
    FUN_012f5a60("returnValueMap->hasIntegerKey(kCardPlayedReturn)",
                 "..\\common\\common\\state\\CloneState.cpp",0x33);
  }
  iVar5 = ReturnValueMap_getInteger(3);
  param_1[0x41] = iVar5;
  cVar1 = ReturnValueMap_hasIntegerKey(0xb);
  if (cVar1 == '\0') {
    FUN_012f5a60("returnValueMap->hasIntegerKey(kMultiActionCommandObjectReturn)",
                 "..\\common\\common\\state\\CloneState.cpp",0x36);
  }
  iVar5 = ReturnValueMap_getInteger(0xb);
  param_1[0x3e] = iVar5;
  StateMachine_destroyReturnValueMap(iVar4);
  pvVar3 = (void *)StateMachineState_getGame();
  bVar2 = Game_getFlag_14d(pvVar3);
  if (bVar2) {
    uVar9 = StateMachineState_getGame
                      (param_1[0x41],0,&PlayElement::RTTI_Type_Descriptor,
                       &Card::RTTI_Type_Descriptor,0);
    pvVar3 = find_play_element_in_maps((void *)uVar9,(int)((ulonglong)uVar9 >> 0x20));
    piVar6 = (int *)FUN_00d8d382(pvVar3);
    if (piVar6 != (int *)0x0) {
      pvVar3 = Mem_Alloc(0x140);
      uStack_4 = 0;
      if (pvVar3 == (void *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = Card_ctor(pvVar3,archetype_,id_);
      }
      uStack_4 = 0xffffffff;
      iVar4 = *piVar7;
      uVar8 = StateMachineState_getGame(param_1[0x3f]);
      (**(code **)(iVar4 + 0x44))(uVar8);
      iVar4 = *piVar7;
      uVar8 = FUN_0138a380();
      (**(code **)(iVar4 + 0xb4))(uVar8);
      iVar4 = *piVar7;
      uVar8 = (**(code **)(*piVar6 + 0x30))();
      (**(code **)(iVar4 + 0x138))(uVar8);
      (**(code **)(*piVar7 + 0x198))(param_1[0x3a]);
      iVar4 = PlayElement_getId();
      param_1[0x40] = iVar4;
      FUN_012fa910();
      uStack_4 = 1;
      FUN_01300680(2);
      uVar9 = StateMachineState_getGame(param_1[0x3e]);
      pvVar3 = find_play_element_in_maps((void *)uVar9,(int)((ulonglong)uVar9 >> 0x20));
      iVar4 = FUN_00d8d382(pvVar3,0,&PlayElement::RTTI_Type_Descriptor,
                           &CommandObject_Clone::RTTI_Type_Descriptor,0);
      if (iVar4 == 0) {
        iVar4 = param_1[0x3e];
        pcVar10 = "CloneState::enterState couldn\'t get commandobject!! (%d)";
        pvVar3 = (void *)StateMachineState_getGame();
        Game_logGeneral(pvVar3,pcVar10,iVar4);
        uStack_4 = 0xffffffff;
        FUN_01300cd0();
        ExceptionList = local_c;
        return 0;
      }
      FUN_0150cd20(param_1[0x40]);
      uStack_4 = 0xffffffff;
      FUN_01300cd0();
    }
    pvVar3 = Mem_Alloc(0x38);
    uStack_4 = 2;
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      uVar8 = StateMachineState_getGame();
      pvVar3 = (void *)FUN_0141a550(uVar8);
    }
    uStack_4 = 0xffffffff;
    set_field_4(pvVar3,param_1[0x3f]);
    iVar4 = param_1[0x3f];
    StateMachineState_getGame(iVar4);
    iVar4 = FUN_0135ff70(iVar4);
    CommandObject_setFirstIntArg(pvVar3,iVar4);
    CommandObject_setSecondIntArg(pvVar3,param_1[0x40]);
    this = (void *)StateMachineState_getGame();
    Game_dispatchCommandToAllPlayers(this,pvVar3);
    ExceptionList = local_c;
    return 1;
  }
  ExceptionList = local_c;
  return 2;
}

