// addr: 0x013f6200
// name: StateMachine_setCurrentEnvironment
// subsystem: common/common/rules
// source (binary assert): common/common/state/StateMachine.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall StateMachine_setCurrentEnvironment(int param_1,void *param_2)

{
  void *pvVar1;
  
                    /* Stores the current EvaluationEnvironment on the StateMachine and asserts that
                       the environment has a Game. */
  pvVar1 = param_2;
  if (param_2 == (void *)0x0) {
    FUN_012f5a60(&DAT_018e3734,"..\\common\\common\\state\\StateMachine.cpp",0x30c);
  }
  FUN_013f5ab0(&param_2);
  *(void **)(param_1 + 0x1c) = pvVar1;
  pvVar1 = EvaluationEnvironment_getGame(pvVar1);
  if (pvVar1 == (void *)0x0) {
    FUN_012f5a60("mCurrentEnvironment->getGame()","..\\common\\common\\state\\StateMachine.cpp",
                 0x310);
  }
  return 1;
}

