// addr: 0x01241330
// name: StdVector_clearAndFreeStorage_off8
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdVector_clearAndFreeStorage_off8(void * vec) */

void __fastcall StdVector_clearAndFreeStorage_off8(void *vec)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Frees vector-like storage held at offset +8 and resets the three storage
                       pointers at +8/+0xc/+0x10. */
  puStack_8 = &LAB_01654ceb;
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

