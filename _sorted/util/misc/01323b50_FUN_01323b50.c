// addr: 0x01323b50
// name: FUN_01323b50
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_01323b50(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* SEH cleanup wrapper around FUN_013239f0 for an unknown object/member. No
                       class evidence. */
  puStack_8 = &LAB_016790ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_013239f0(DAT_01b839d8 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}

