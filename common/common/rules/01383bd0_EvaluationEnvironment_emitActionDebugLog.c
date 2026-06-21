// addr: 0x01383bd0
// name: EvaluationEnvironment_emitActionDebugLog
// subsystem: common/common/rules
// source (binary assert): common/common/rules/EvaluationEnvironment.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EvaluationEnvironment_emitActionDebugLog(void * env) */

void __fastcall EvaluationEnvironment_emitActionDebugLog(void *env)

{
  int iVar1;
  
                    /* If a trace/category flag is not enabled, obtains information from the game
                       and emits/logs it through helper routines. Exact log content is not visible
                       in this wrapper. */
  iVar1 = FUN_01383460(8);
  if (iVar1 == 0) {
    if (*(int *)((int)env + 4) == 0) {
      FUN_012f5a60("mGame","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x2bd);
    }
    Game_getCurrentTurn(*(void **)((int)env + 4));
    FUN_013f7eb0();
    return;
  }
  return;
}

