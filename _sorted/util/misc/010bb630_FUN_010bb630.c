// addr: 0x010bb630
// name: FUN_010bb630
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void cleanup_path_manager_helper(void) */

void cleanup_path_manager_helper(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* SEH wrapper that calls FUN_010bb2d0 with the security-cookie value; exact
                       cleanup target is not evident. */
  puStack_8 = &LAB_01648a0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_010bb2d0(DAT_01b839d8 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}

