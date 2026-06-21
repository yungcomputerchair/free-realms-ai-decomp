// addr: 0x0141e090
// name: GetTargetState_cardSelected
// subsystem: common/rules/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall GetTargetState_cardSelected(int param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined8 uVar6;
  char *fmt;
  uint uVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Handles a GetTargetState card selection by logging player/card ids,
                       optionally validating the card against an allowed list and dispatching a
                       CardSelected command, then pushing a return state with player and target
                       keys. Evidence is GetTargetState::cardSelected(%d, %d) log string. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01694076;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  fmt = "GetTargetState::cardSelected(%d, %d)";
  uVar7 = param_2;
  pvVar2 = (void *)StateMachineState_getGame
                             ("GetTargetState::cardSelected(%d, %d)",param_2,param_3,
                              DAT_01b839d8 ^ (uint)&stack0xffffffd8);
  Game_logGeneral(pvVar2,fmt,uVar7);
  if (*(char *)(param_1 + 0x121) == '\0') {
LAB_0141e1e8:
    pvVar2 = Mem_Alloc(0x18);
    local_4 = 1;
    if (pvVar2 == (void *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = ReturnValueMap_ctor();
    }
    local_4 = 0xffffffff;
    ReturnValueMap_setInteger(4,param_2);
    ReturnValueMap_setInteger(*(undefined4 *)(param_1 + 0x138),param_3);
    StateMachine_pushPendingState(uVar4);
    uVar4 = 1;
  }
  else {
    uVar6 = StateMachineState_getGame(param_3);
    pvVar2 = find_play_element_in_maps((void *)uVar6,(int)((ulonglong)uVar6 >> 0x20));
    iVar3 = FUN_00d8d382(pvVar2,0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0);
    if (iVar3 != 0) {
      piVar1 = *(int **)(param_1 + 0x104);
      if (piVar1 < *(int **)(param_1 + 0x100)) {
        FUN_00d83c2d();
      }
      piVar5 = *(int **)(param_1 + 0x100);
      if (*(int **)(param_1 + 0x104) < piVar5) {
        FUN_00d83c2d();
      }
      for (; (piVar5 != piVar1 && (*piVar5 != iVar3)); piVar5 = piVar5 + 1) {
      }
      piVar1 = *(int **)(param_1 + 0x104);
      if (piVar1 < *(int **)(param_1 + 0x100)) {
        FUN_00d83c2d();
      }
      if (param_1 == -0xfc) {
        FUN_00d83c2d();
      }
      if (piVar5 != piVar1) {
        pvVar2 = Mem_Alloc(0x38);
        local_4 = 0;
        if (pvVar2 == (void *)0x0) {
          pvVar2 = (void *)0x0;
        }
        else {
          uVar4 = StateMachineState_getGame();
          pvVar2 = (void *)GameCommand_CardSelected_ctor(uVar4);
        }
        local_4 = 0xffffffff;
        set_field_4(pvVar2,param_2);
        GameCommand_CardSelected_setCard(param_3);
        uVar7 = param_2;
        StateMachineState_getGame(param_2,pvVar2);
        Game_dispatchCommandToPlayerOrAll(uVar7,pvVar2);
        goto LAB_0141e1e8;
      }
    }
    GetTargetState_stateSpecificMessage(param_1 + 0xfc);
    uVar4 = 2;
  }
  ExceptionList = local_c;
  return uVar4;
}

