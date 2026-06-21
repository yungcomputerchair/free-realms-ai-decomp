// addr: 0x01468fd0
// name: StateMachineState_updateState
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall StateMachineState_updateState(int *param_1)

{
  int *piVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_EDI;
  char *pcVar5;
  
                    /* Logs '%s::updateState: %d', advances an internal state field through a small
                       switch, calls nested state hooks, and reports invalid state 0. The concrete
                       subclass name is stored dynamically. */
  if ((uint)param_1[0xd] < 0x10) {
    piVar1 = param_1 + 8;
  }
  else {
    piVar1 = (int *)param_1[8];
  }
  pcVar5 = "%s::updateState: %d";
  pvVar2 = (void *)StateMachineState_getGame("%s::updateState: %d",piVar1,param_1[0x3d]);
  Game_logGeneral(pvVar2,pcVar5,piVar1);
  switch(param_1[0x3d]) {
  case 0:
    pcVar5 = "ERROR: Invalid state";
    pvVar2 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar2,pcVar5,unaff_EDI);
    return 0;
  case 1:
    param_1[0x3d] = 2;
    uVar3 = (**(code **)(*(int *)param_1[2] + 0x44))();
    iVar4 = param_1[0x3e];
    break;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x01469051. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*param_1 + 0x124))();
    return uVar3;
  case 3:
    param_1[0x3d] = 4;
    uVar3 = (**(code **)(*(int *)param_1[2] + 0x44))();
    iVar4 = param_1[0x3f];
    break;
  case 4:
    return 3;
  default:
    return 2;
  }
  FUN_014643a0(iVar4);
  uVar3 = StateMachine_setCurrentState(uVar3);
  return uVar3;
}

