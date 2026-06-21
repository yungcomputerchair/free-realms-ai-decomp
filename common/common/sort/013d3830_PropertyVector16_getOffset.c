// addr: 0x013d3830
// name: PropertyVector16_getOffset
// subsystem: common/common/sort
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int PropertyVector16_getOffset(void * thisObj) */

int __fastcall PropertyVector16_getOffset(void *thisObj)

{
                    /* Returns the 32-bit field at offset +8 of a PropertyVector16-like object.
                       Evidence is callers alongside PropertyVector16_getCount and
                       writePersistentRange, where this value is emitted as range metadata. */
  return *(int *)((int)thisObj + 8);
}

