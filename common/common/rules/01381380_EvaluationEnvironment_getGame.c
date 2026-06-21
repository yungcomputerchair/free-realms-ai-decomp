// addr: 0x01381380
// name: EvaluationEnvironment_getGame
// subsystem: common/common/rules
// source (binary assert): common/common/rules/EvaluationEnvironment.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EvaluationEnvironment_getGame(void * env) */

void * __fastcall EvaluationEnvironment_getGame(void *env)

{
                    /* Returns env->mGame after asserting it is present. This accessor is widely
                       used by command/rule evaluation callers. */
  if (*(int *)((int)env + 4) == 0) {
    FUN_012f5a60("mGame","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x2bd);
  }
  return *(void **)((int)env + 4);
}

