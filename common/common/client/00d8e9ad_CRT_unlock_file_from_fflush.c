// addr: 0x00d8e9ad
// name: CRT_unlock_file_from_fflush
// subsystem: common/common/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CRT_unlock_file_from_fflush(void) */

void CRT_unlock_file_from_fflush(void)

{
  int unaff_EBP;
  
                    /* CRT cleanup thunk used by _fflush to unlock the FILE argument saved in the
                       caller frame. Evidence is the sole caller _fflush and call to FUN_00d8e3b7
                       with the EBP+8 FILE parameter. */
  FUN_00d8e3b7(*(undefined4 *)(unaff_EBP + 8));
  return;
}

