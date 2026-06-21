// addr: 0x00d8b5e3
// name: CRT_feof
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int CRT_feof(void * file) */

int __cdecl CRT_feof(void *file)

{
  undefined4 *puVar1;
  
                    /* Implements feof: validates a FILE pointer, sets errno/asserts on null, and
                       returns the EOF flag bit. Evidence: static name _feof, VS2005 library match,
                       and return of _File->_flag & 0x10. */
  if (file == (void *)0x0) {
    puVar1 = (undefined4 *)FUN_00d8e452();
    *puVar1 = 0x16;
    FUN_00d83c09(0,0,0,0,0);
    return 0;
  }
  return *(uint *)((int)file + 0xc) & 0x10;
}

