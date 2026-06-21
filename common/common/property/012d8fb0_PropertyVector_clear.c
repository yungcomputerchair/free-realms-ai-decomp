// addr: 0x012d8fb0
// name: PropertyVector_clear
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyVector_clear(int vector) */

void __fastcall PropertyVector_clear(int vector)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Clears a dynamic array/vector: if storage exists, destroys the element range
                       through FUN_012327d0, frees the buffer, and resets begin/end/capacity fields
                       to zero. The fields at +8/+0xc/+0x10 match vector storage pointers. */
  puStack_8 = &LAB_01670b1b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  if (*(void **)(vector + 8) != (void *)0x0) {
    ExceptionList = &local_c;
    StdStringRange_destroy(*(void **)(vector + 8),*(void **)(vector + 0xc));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(vector + 8));
  }
  *(undefined4 *)(vector + 8) = 0;
  *(undefined4 *)(vector + 0xc) = 0;
  *(undefined4 *)(vector + 0x10) = 0;
  return;
}

