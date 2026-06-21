// addr: 0x01513c30
// name: StdString_dtorThunkA
// subsystem: common/common/db
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void StdString_dtorThunkA(void) */

void StdString_dtorThunkA(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Compiler-generated SEH cleanup thunk that destroys an in-scope std::string by
                       calling the common string destructor helper. */
  puStack_8 = &LAB_016b6d5b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_01513a90(DAT_01b839d8 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}

