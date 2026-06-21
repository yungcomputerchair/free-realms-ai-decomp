// addr: 0x013813e0
// name: EvaluationEnvironment_getOriginCard
// subsystem: common/common/rules
// source (binary assert): common/common/rules/EvaluationEnvironment.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EvaluationEnvironment_getOriginCard(void * env) */

void * __fastcall EvaluationEnvironment_getOriginCard(void *env)

{
  void *pvVar1;
  int *this;
  int in_EDX;
  int extraout_EDX;
  undefined8 uVar2;
  
                    /* Resolves the origin card from the stored origin id, caching it from the game
                       if needed, and returns it only if the play element is valid/active. */
  if (*(int *)((int)env + 4) == 0) {
    FUN_012f5a60("mGame","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x3df);
    in_EDX = extraout_EDX;
  }
  this = *(int **)((int)env + 4);
  if (*(int *)((int)env + 8) == 0) {
    uVar2 = (**(code **)(*this + 0x108))();
    in_EDX = (int)((ulonglong)uVar2 >> 0x20);
    this = *(int **)((int)env + 4);
    *(int *)((int)env + 8) = (int)uVar2;
  }
  pvVar1 = find_play_element_in_maps(this,in_EDX);
  if ((pvVar1 == (void *)0x0) || (*(char *)((int)pvVar1 + 0x44) == '\0')) {
    pvVar1 = (void *)0x0;
  }
  return pvVar1;
}

