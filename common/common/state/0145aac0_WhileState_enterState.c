// addr: 0x0145aac0
// name: WhileState_enterState
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall WhileState_enterState(int *param_1)

{
  void *game;
  undefined4 unaff_ESI;
  char *fmt;
  
                    /* Logs 'Entering WhileState', invokes virtual state-entry hooks, sets field
                       this+0xf8 to 1, and calls FUN_013875a0(1). */
  fmt = "Entering WhileState";
  game = (void *)StateMachineState_getGame();
  Game_logGeneral(game,fmt,unaff_ESI);
  (**(code **)(*param_1 + 0x4c))();
  param_1[0x3e] = 1;
  EvaluationEnvironment_setDependentActionReturn(1);
                    /* WARNING: Could not recover jumptable at 0x0145aafe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x3c))();
  return;
}

