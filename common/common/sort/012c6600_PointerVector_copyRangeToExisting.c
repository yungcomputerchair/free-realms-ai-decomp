// addr: 0x012c6600
// name: PointerVector_copyRangeToExisting
// subsystem: common/common/sort
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ** PointerVector_copyRangeToExisting(void ** first, void ** last, void **
   dest) */

void ** __cdecl PointerVector_copyRangeToExisting(void **first,void **last,void **dest)

{
  int iVar1;
  
                    /* Copies a pointer range into existing destination storage with memmove_s and
                       returns the advanced destination pointer. Evidence is byte count computed
                       from pointer difference and use inside PointerVector assignment. */
  iVar1 = (int)last - (int)first >> 2;
  if (0 < iVar1) {
    _memmove_s(dest,iVar1 * 4,first,iVar1 * 4);
  }
  return dest + iVar1;
}

