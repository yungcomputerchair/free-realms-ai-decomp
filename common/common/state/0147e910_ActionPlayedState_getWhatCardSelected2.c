// addr: 0x0147e910
// name: ActionPlayedState_getWhatCardSelected2
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall ActionPlayedState_getWhatCardSelected2(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  char *fmt;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Implements the operation identified by referenced string
                       'ActionPlayedState::getWhatCardSelected2'. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a05db;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  fmt = "ActionPlayedState::getWhatCardSelected2";
  pvVar2 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar2,fmt,uVar1);
  if ((*(int *)(param_1 + 0x104) == 0) && (*(char *)(param_1 + 0x161) != '\0')) {
    *(undefined1 *)(param_1 + 0x10d) = 1;
    *(undefined4 *)(param_1 + 0x114) = 0xc;
    *(undefined4 *)(param_1 + 0x110) = 2;
    pvVar2 = Mem_Alloc(0x13c);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = GetTargetState_ctor(*(undefined4 *)(param_1 + 8));
    }
    local_4 = 0xffffffff;
    EvaluationEnvironment_setTarget2Return(1);
    EvaluationEnvironment_setTarget1Return(0);
    StateMachine_setCurrentState(uVar3);
  }
  ExceptionList = local_c;
  return *(undefined4 *)(param_1 + 0x104);
}

