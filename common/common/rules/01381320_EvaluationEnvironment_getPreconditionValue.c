// addr: 0x01381320
// name: EvaluationEnvironment_getPreconditionValue
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EvaluationEnvironment_getPreconditionValue(void * env) */

void * __fastcall EvaluationEnvironment_getPreconditionValue(void *env)

{
                    /* Returns the address of the embedded precondition value object inside
                       EvaluationEnvironment. */
  return (void *)((int)env + 100);
}

