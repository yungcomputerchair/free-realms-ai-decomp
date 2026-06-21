// addr: 0x012412a0
// name: PointerVector_clearStorage
// subsystem: common/common/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PointerVector_clearStorage(void * vector) */

void __fastcall PointerVector_clearStorage(void *vector)

{
                    /* Frees the vector backing storage if present and resets begin/end/capacity
                       fields to zero. */
  if (*(void **)((int)vector + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)vector + 4));
  }
  *(undefined4 *)((int)vector + 4) = 0;
  *(undefined4 *)((int)vector + 8) = 0;
  *(undefined4 *)((int)vector + 0xc) = 0;
  return;
}

