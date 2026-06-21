// addr: 0x01381d40
// name: EvaluationEnvironment_resolveTarget2
// subsystem: common/common/rules
// source (binary assert): common/common/rules/EvaluationEnvironment.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EvaluationEnvironment_resolveTarget2(void * env) */

void * __fastcall EvaluationEnvironment_resolveTarget2(void *env)

{
  void *pvVar1;
  int in_EDX;
  int extraout_EDX;
  
                    /* Resolves the secondary target id through the game/play-element lookup. The
                       decompiler drops the return value. */
  if (*(int *)((int)env + 4) == 0) {
    FUN_012f5a60("mGame","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x2bd);
    in_EDX = extraout_EDX;
  }
  pvVar1 = find_play_element_in_maps(*(void **)((int)env + 4),in_EDX);
  return pvVar1;
}

