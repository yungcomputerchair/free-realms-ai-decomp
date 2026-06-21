// addr: 0x01381340
// name: EvaluationEnvironment_getFlag70
// subsystem: common/common/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool EvaluationEnvironment_getFlag70(void * this) */

bool __fastcall EvaluationEnvironment_getFlag70(void *this)

{
                    /* Tiny accessor returning the byte flag stored at offset 0x70 in the evaluation
                       environment. */
  return (bool)*(undefined1 *)((int)this + 0x70);
}

