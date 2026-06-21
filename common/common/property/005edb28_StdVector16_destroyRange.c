// addr: 0x005edb28
// name: StdVector16_destroyRange
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdVector16_destroyRange(void * first, void * last) */

void __cdecl StdVector16_destroyRange(void *first,void *last)

{
                    /* Destroys each 0x10-byte element in [first,last) by calling the element
                       cleanup helper, advancing by 16 bytes. This is a standard vector destructor
                       range helper. */
  for (; first != last; first = (void *)((int)first + 0x10)) {
    StdVector_clearStorage(first);
  }
  return;
}

