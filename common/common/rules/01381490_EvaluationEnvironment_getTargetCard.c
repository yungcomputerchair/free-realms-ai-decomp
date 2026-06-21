// addr: 0x01381490
// name: EvaluationEnvironment_getTargetCard
// subsystem: common/common/rules
// source (binary assert): common/common/rules/EvaluationEnvironment.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EvaluationEnvironment_getTargetCard(void * env) */

void * __fastcall EvaluationEnvironment_getTargetCard(void *env)

{
  void *pvVar1;
  int in_EDX;
  int extraout_EDX;
  
                    /* Resolves the primary target and returns it only when the resolved play
                       element is non-null and marked active/valid. */
  if (*(int *)((int)env + 4) == 0) {
    FUN_012f5a60("mGame","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x2bd);
    in_EDX = extraout_EDX;
  }
  pvVar1 = find_play_element_in_maps(*(void **)((int)env + 4),in_EDX);
  if ((pvVar1 == (void *)0x0) || (*(char *)((int)pvVar1 + 0x44) == '\0')) {
    pvVar1 = (void *)0x0;
  }
  return pvVar1;
}

