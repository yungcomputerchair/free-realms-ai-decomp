// addr: 0x013e8ed0
// name: FUN_013e8ed0
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void sub_013e8ed0(void) */

void sub_013e8ed0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Static cleanup thunk for a global red-black-tree-like container; it installs
                       an SEH frame, calls StdRbTree_destroyAndFree, and restores the exception
                       list. */
  puStack_8 = &LAB_0168e358;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  StdRbTree_destroyAndFree(&stack0x00000018);
  ExceptionList = puStack_8;
  return;
}

