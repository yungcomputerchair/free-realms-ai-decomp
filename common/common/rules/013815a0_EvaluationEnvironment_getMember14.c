// addr: 0x013815a0
// name: EvaluationEnvironment_getMember14
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EvaluationEnvironment_getMember14(void * env) */

void * __fastcall EvaluationEnvironment_getMember14(void *env)

{
                    /* Returns the 32-bit member at EvaluationEnvironment offset 0x14. The member
                       meaning is unresolved, but it is used broadly by card/command evaluation
                       paths. */
  return *(void **)((int)env + 0x14);
}

