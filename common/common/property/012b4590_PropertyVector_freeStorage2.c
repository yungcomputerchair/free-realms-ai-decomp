// addr: 0x012b4590
// name: PropertyVector_freeStorage2
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyVector_freeStorage2(void * vec) */

void __fastcall PropertyVector_freeStorage2(void *vec)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Frees the heap buffer at offset +4 and clears the three vector storage
                       fields. It is byte-for-byte the same vector-storage cleanup pattern as
                       012b3c00 but used by a different set of property helpers. */
  puStack_8 = &LAB_0166cfb8;
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

