// addr: 0x013420b0
// name: StdStringBuffer_release
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdStringBuffer_release(void * str) */

void __fastcall StdStringBuffer_release(void *str)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Releases a heap buffer at offset +8 if present and clears the following
                       string bookkeeping fields. */
  puStack_8 = &LAB_0167c58b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  if (*(void **)((int)str + 8) != (void *)0x0) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)str + 8));
  }
  *(undefined4 *)((int)str + 8) = 0;
  *(undefined4 *)((int)str + 0xc) = 0;
  *(undefined4 *)((int)str + 0x10) = 0;
  return;
}

