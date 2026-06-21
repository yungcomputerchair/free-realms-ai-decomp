// addr: 0x00da33c0
// name: CRT_unlock_stdio_table_after_alloc
// subsystem: common/common/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CRT_unlock_stdio_table_after_alloc(void) */

void CRT_unlock_stdio_table_after_alloc(void)

{
                    /* Releases CRT lock 1 from the stdio FILE allocation path. Evidence is the
                       identical FUN_00d936b1(1) wrapper called before FUN_00da3293 returns. */
  FUN_00d936b1(1);
  return;
}

