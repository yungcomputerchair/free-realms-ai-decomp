// addr: 0x005e4773
// name: StdVector_clearAndFreeStorage_005e4773
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdVector_clearAndFreeStorage_005e4773(void * vec) */

void __fastcall StdVector_clearAndFreeStorage_005e4773(void *vec)

{
                    /* Frees vector storage at offset +4 when present and resets begin/end/capacity
                       fields to null. */
  if (*(void **)((int)vec + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)vec + 4));
  }
  *(undefined4 *)((int)vec + 4) = 0;
  *(undefined4 *)((int)vec + 8) = 0;
  *(undefined4 *)((int)vec + 0xc) = 0;
  return;
}

