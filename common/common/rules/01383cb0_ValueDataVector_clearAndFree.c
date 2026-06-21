// addr: 0x01383cb0
// name: ValueDataVector_clearAndFree
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ValueDataVector_clearAndFree(void * vector) */

void __fastcall ValueDataVector_clearAndFree(void *vector)

{
                    /* Destroys all 0x10-byte vector elements, frees the backing allocation, and
                       resets begin/end/capacity to zero. */
  if (*(void **)((int)vector + 4) != (void *)0x0) {
    ValueDataVector_destroyRange16(*(void **)((int)vector + 4),*(void **)((int)vector + 8));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)vector + 4));
  }
  *(undefined4 *)((int)vector + 4) = 0;
  *(undefined4 *)((int)vector + 8) = 0;
  *(undefined4 *)((int)vector + 0xc) = 0;
  return;
}

