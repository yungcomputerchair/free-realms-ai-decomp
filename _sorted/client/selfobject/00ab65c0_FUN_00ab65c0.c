// addr: 0x00ab65c0
// name: FUN_00ab65c0
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 FUN_00ab65c0(void)

{
  undefined4 uVar1;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Factory wrapper that allocates/constructs the large unknown record
                       initialized by 0105cac0. No class symbol or strings identify the allocated
                       type. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015c4da1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_14 = FUN_007d16b0(DAT_01b839d8 ^ (uint)&local_14);
  local_4 = 0;
  if (local_14 == 0) {
    uVar1 = 0;
  }
  else {
    local_10 = local_14;
    uVar1 = FUN_0105cac0();
  }
  ExceptionList = local_c;
  return uVar1;
}

