// addr: 0x010921e0
// name: FUN_010921e0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void FUN_010921e0(void) */

void FUN_010921e0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Runs the same helper three times under exception-state changes, suggesting
                       static initialization/destruction glue. No uploader-specific evidence is
                       present. */
  puStack_8 = &LAB_01643106;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_00f633b0(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00f633b0();
  local_4 = 0xffffffff;
  FUN_00f633b0();
  ExceptionList = local_c;
  return;
}

