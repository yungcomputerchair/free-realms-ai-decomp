// addr: 0x010920a0
// name: FUN_010920a0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void FUN_010920a0(void) */

void FUN_010920a0(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Calls a common cleanup/initializer helper inside an exception frame. No
                       arguments or type evidence identify the operation; likely static-init/cleanup
                       glue. */
  puStack_8 = &LAB_01643078;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_00f633b0(DAT_01b839d8 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}

