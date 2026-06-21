// addr: 0x01259180
// name: STLVector_int_clear
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void STLVector_int_clear(void * vec) */

void __fastcall STLVector_int_clear(void *vec)

{
                    /* Frees the vector storage if allocated and resets begin, end, and capacity
                       pointers to null. */
  if (*(void **)((int)vec + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)vec + 4));
  }
  *(undefined4 *)((int)vec + 4) = 0;
  *(undefined4 *)((int)vec + 8) = 0;
  *(undefined4 *)((int)vec + 0xc) = 0;
  return;
}

