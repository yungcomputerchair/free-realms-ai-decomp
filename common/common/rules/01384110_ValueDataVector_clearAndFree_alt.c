// addr: 0x01384110
// name: ValueDataVector_clearAndFree_alt
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ValueDataVector_clearAndFree_alt(void * vector) */

void __fastcall ValueDataVector_clearAndFree_alt(void *vector)

{
                    /* Alternate compiler instantiation of the 0x10-byte vector clear/free routine,
                       destroying elements and resetting vector pointers. */
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

