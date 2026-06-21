// addr: 0x00d8e964
// name: _fflush
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Setting prototype: int _fflush(void * file) */

int __cdecl _fflush(void *file)

{
  int iVar1;
  
                    /* MSVC runtime fflush implementation: flushes all streams when file is null,
                       otherwise locks the file, calls __fflush_nolock, and unlocks. */
  if (file == (void *)0x0) {
    iVar1 = flsall(0);
  }
  else {
    CRT_lockFile((uint)file);
    iVar1 = __fflush_nolock(file);
    CRT_unlock_file_from_fflush();
  }
  return iVar1;
}

