// addr: 0x012d73e0
// name: PropertyVector_freeStorageAt8
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyVector_freeStorageAt8(void * vec) */

void __fastcall PropertyVector_freeStorageAt8(void *vec)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Frees vector-like storage held at offset +8 and clears the begin/end/capacity
                       fields at +8,+0xc,+0x10. Evidence is the _free(*(this+8)) call followed by
                       zeroing those three fields. */
  puStack_8 = &LAB_0167070b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  if (*(void **)((int)vec + 8) != (void *)0x0) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)vec + 8));
  }
  *(undefined4 *)((int)vec + 8) = 0;
  *(undefined4 *)((int)vec + 0xc) = 0;
  *(undefined4 *)((int)vec + 0x10) = 0;
  return;
}

