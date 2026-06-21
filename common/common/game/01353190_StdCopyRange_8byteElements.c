// addr: 0x01353190
// name: StdCopyRange_8byteElements
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * StdCopyRange_8byteElements(void * first, void * last, void * dst) */

void * __cdecl StdCopyRange_8byteElements(void *first,void *last,void *dst)

{
  int iVar1;
  int iVar2;
  
                    /* Copies a range of 8-byte elements to dst and returns the end of the
                       destination range. */
  iVar1 = (int)last - (int)first;
  if (first != last) {
    iVar2 = (int)dst - (int)first;
    do {
      *(undefined4 *)(iVar2 + (int)first) = *(undefined4 *)first;
      *(undefined4 *)(iVar2 + 4 + (int)first) = *(undefined4 *)((int)first + 4);
      first = (void *)((int)first + 8);
    } while (first != last);
  }
  return (void *)((int)dst + (iVar1 >> 3) * 8);
}

