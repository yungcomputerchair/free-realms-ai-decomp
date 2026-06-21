// addr: 0x01513fa0
// name: StdString_dtorThunkB
// subsystem: common/common/db
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void StdString_dtorThunkB(void) */

void StdString_dtorThunkB(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Compiler-generated cleanup thunk that invokes the shared std::string
                       destructor helper during exception unwinding. */
  puStack_8 = &LAB_016b6deb;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FUN_01513a90(DAT_01b839d8 ^ (uint)&local_c);
  ExceptionList = local_c;
  return;
}

