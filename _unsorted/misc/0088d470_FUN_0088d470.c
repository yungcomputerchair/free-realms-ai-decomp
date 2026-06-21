// addr: 0x0088d470
// name: FUN_0088d470
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_0088d470(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_01578e68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_00dc2020(DAT_01b839d8 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}

