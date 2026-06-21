// addr: 0x0041bc75
// name: StdVector_clearStorage
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdVector_clearStorage(void * this) */

void __fastcall StdVector_clearStorage(void *this)

{
                    /* Frees the vector storage pointer and resets begin/end/capacity fields to
                       zero. */
  if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 4));
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return;
}

