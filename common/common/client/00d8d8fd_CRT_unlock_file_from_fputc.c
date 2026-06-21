// addr: 0x00d8d8fd
// name: CRT_unlock_file_from_fputc
// subsystem: common/common/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CRT_unlock_file_from_fputc(void) */

void CRT_unlock_file_from_fputc(void)

{
                    /* Small CRT cleanup thunk used by _fputc to call the file-unlock helper.
                       Evidence is its sole caller _fputc and sole callee FUN_00d8e3b7. */
  FUN_00d8e3b7();
  return;
}

