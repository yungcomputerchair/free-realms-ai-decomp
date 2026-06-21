// addr: 0x01383870
// name: EvaluationEnvironment_getPlayAreaReturnBooleanDefaultFalse
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: bool EvaluationEnvironment_getPlayAreaReturnBooleanDefaultFalse(void) */

bool EvaluationEnvironment_getPlayAreaReturnBooleanDefaultFalse(void)

{
  bool bVar1;
  
                    /* Thin wrapper that queries a boolean ValueData entry for key 0x0f with default
                       false. Key 0x0f is used elsewhere as kPlayAreaReturn, but the wrapper returns
                       the boolean path, so the semantic name is tentative. */
  bVar1 = (bool)FUN_01383520(0xf,0);
  return bVar1;
}

