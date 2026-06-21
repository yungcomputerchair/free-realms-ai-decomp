// addr: 0x00d8e95b
// name: CRT_unlock_stdio_table
// subsystem: common/common/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CRT_unlock_stdio_table(void) */

void CRT_unlock_stdio_table(void)

{
                    /* Releases CRT lock 1 after walking the stdio table. Evidence is the call to
                       FUN_00d936b1(1) and its position at the end of flsall after __lock(1). */
  FUN_00d936b1(1);
  return;
}

