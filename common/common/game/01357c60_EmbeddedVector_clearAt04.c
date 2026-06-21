// addr: 0x01357c60
// name: EmbeddedVector_clearAt04
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EmbeddedVector_clearAt04(void * obj) */

void __fastcall EmbeddedVector_clearAt04(void *obj)

{
                    /* Clears a vector-like embedded allocation at +4 by freeing the begin pointer
                       and zeroing begin/end/capacity. No class-specific evidence is available. */
  if (*(void **)((int)obj + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)obj + 4));
  }
  *(undefined4 *)((int)obj + 4) = 0;
  *(undefined4 *)((int)obj + 8) = 0;
  *(undefined4 *)((int)obj + 0xc) = 0;
  return;
}

