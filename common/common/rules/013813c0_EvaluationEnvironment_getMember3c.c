// addr: 0x013813c0
// name: EvaluationEnvironment_getMember3c
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EvaluationEnvironment_getMember3c(void * env) */

void * __fastcall EvaluationEnvironment_getMember3c(void *env)

{
                    /* Returns the address of the EvaluationEnvironment member at offset 0x3c. The
                       exact container role is not evident from this tiny accessor, but the address
                       falls inside the EvaluationEnvironment layout established by its constructor.
                        */
  return (void *)((int)env + 0x3c);
}

