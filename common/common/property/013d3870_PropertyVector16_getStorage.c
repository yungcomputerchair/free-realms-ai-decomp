// addr: 0x013d3870
// name: PropertyVector16_getStorage
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int PropertyVector16_getStorage(int self) */

int __fastcall PropertyVector16_getStorage(int self)

{
                    /* Returns the address of an embedded 16-byte-element vector/list subobject at
                       this+0x10. Evidence is the fixed this+0x10 return and nearby count helper
                       using begin/end pointers around this area. */
  return self + 0x10;
}

