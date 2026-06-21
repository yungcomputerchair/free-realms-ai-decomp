// addr: 0x0147c810
// name: StateMachineState_resumePreviousWaitState
// subsystem: common/rules/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall StateMachineState_resumePreviousWaitState(int param_1)

{
  int iVar1;
  
                    /* If the state has a pending wait/restore code at offset 0xf4, forwards codes
                       2, 3, or 4 to the previous state's virtual restore/wait handler and returns
                       true. Evidence is callers using it to resume/cancel after pending sub-states.
                        */
  if (*(int *)(param_1 + 0xf4) == 2) {
    (**(code **)(**(int **)(param_1 + 4) + 0xb4))(2);
  }
  iVar1 = *(int *)(param_1 + 0xf4);
  if ((iVar1 == 3) || (iVar1 == 4)) {
    (**(code **)(**(int **)(param_1 + 4) + 0xb4))(iVar1);
  }
  return 1;
}

