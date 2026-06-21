// addr: 0x01332730
// name: StdVector_clearAndFreeStorage_01332730
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdVector_clearAndFreeStorage_01332730(void * vec) */

void __fastcall StdVector_clearAndFreeStorage_01332730(void *vec)

{
                    /* Frees vector storage at +4 when present and resets begin/end/capacity fields
                       at +4/+8/+0xc to null. */
  if (*(void **)((int)vec + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)vec + 4));
  }
  *(undefined4 *)((int)vec + 4) = 0;
  *(undefined4 *)((int)vec + 8) = 0;
  *(undefined4 *)((int)vec + 0xc) = 0;
  return;
}

