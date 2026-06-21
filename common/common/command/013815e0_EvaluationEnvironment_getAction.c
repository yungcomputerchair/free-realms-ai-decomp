// addr: 0x013815e0
// name: EvaluationEnvironment_getAction
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EvaluationEnvironment_getAction(void * this) */

void * __fastcall EvaluationEnvironment_getAction(void *this)

{
                    /* Returns the evaluation environment's action pointer/member at offset 0x18. */
  return *(void **)((int)this + 0x18);
}

