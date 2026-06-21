// addr: 0x013815f0
// name: EvaluationEnvironment_enableDebugLogging
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EvaluationEnvironment_enableDebugLogging(void * env) */

void __fastcall EvaluationEnvironment_enableDebugLogging(void *env)

{
                    /* Sets the byte at offset 0x78 to true, enabling the EvaluationEnvironment
                       logging path that checks this flag before emitting text. */
  *(undefined1 *)((int)env + 0x78) = 1;
  return;
}

