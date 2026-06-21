// addr: 0x01233610
// name: StdVector_StdStringRange_clear
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdVector_StdStringRange_clear(void * this) */

void __fastcall StdVector_StdStringRange_clear(void *this)

{
                    /* Destroys all StdStringRange elements in a vector buffer, frees the buffer,
                       and resets begin/end/capacity fields to null. */
  if (*(void **)((int)this + 4) != (void *)0x0) {
    StdStringRange_destroy(*(void **)((int)this + 4),*(void **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 4));
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return;
}

