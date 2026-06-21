// addr: 0x013855f0
// name: PointerVector_assign
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PointerVector_assign(void * dest, void * source) */

void __thiscall PointerVector_assign(void *this,void *dest,void *source)

{
                    /* Thin wrapper around a vector assignment helper for 4-byte entries. */
  ValueDataList_assign((void *)((int)this + 0x4c),dest);
  return;
}

