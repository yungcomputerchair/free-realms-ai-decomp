// addr: 0x013813b0
// name: EvaluationEnvironment_getTarget2CardList
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EvaluationEnvironment_getTarget2CardList(void * env) */

void * __fastcall EvaluationEnvironment_getTarget2CardList(void *env)

{
                    /* Returns the address of the secondary target card list vector within
                       EvaluationEnvironment. */
  return (void *)((int)env + 0x4c);
}

