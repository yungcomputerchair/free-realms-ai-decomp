// addr: 0x012b3c00
// name: PropertyVector_freeStorage
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyVector_freeStorage(void * vec) */

void __fastcall PropertyVector_freeStorage(void *vec)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Frees the heap buffer stored at offset +4 of a vector-like object and clears
                       begin/end/capacity fields at +4,+8,+0xc. Evidence is the _free call followed
                       by zeroing the three storage pointers. */
  puStack_8 = &LAB_0166cda8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  if (*(void **)((int)vec + 4) != (void *)0x0) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)vec + 4));
  }
  *(undefined4 *)((int)vec + 4) = 0;
  *(undefined4 *)((int)vec + 8) = 0;
  *(undefined4 *)((int)vec + 0xc) = 0;
  return;
}

