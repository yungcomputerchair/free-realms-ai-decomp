// addr: 0x013d3b90
// name: PropertyVector16_getCount
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int PropertyVector16_getCount(int self) */

int __fastcall PropertyVector16_getCount(int self)

{
                    /* Returns zero when the vector begin pointer is null, otherwise computes
                       (end-begin)/16. The 16-byte stride is explicit in the right shift by 4. */
  if (*(int *)(self + 0x14) == 0) {
    return 0;
  }
  return *(int *)(self + 0x18) - *(int *)(self + 0x14) >> 4;
}

