// addr: 0x0174f3b0
// name: PropertyGlobalStringArray_clear
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void PropertyGlobalStringArray_clear(void * context) */

void __cdecl PropertyGlobalStringArray_clear(void *context)

{
                    /* Clears a global dynamic array/string-vector-like object by destroying
                       elements, freeing the backing allocation, and resetting begin/end/capacity
                       globals to zero. The exact owning class is not evident. */
  if (DAT_01cbdd98 != (void *)0x0) {
    StdStringRange_destroy(DAT_01cbdd98,DAT_01cbdd9c);
                    /* WARNING: Subroutine does not return */
    _free(DAT_01cbdd98);
  }
  DAT_01cbdd98 = (void *)0x0;
  DAT_01cbdd9c = (void *)0x0;
  _DAT_01cbdda0 = 0;
  return;
}

