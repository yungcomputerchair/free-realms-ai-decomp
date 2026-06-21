// addr: 0x0098e030
// name: FUN_0098e030
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 FUN_0098e030(int param_1,int param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Factory function that returns null unless both arguments are non-null, then
                       allocates 0x3c bytes and constructs with FUN_0098df30. Class identity is
                       unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0159b3cb;
  local_c = ExceptionList;
  if ((param_1 != 0) && (param_2 != 0)) {
    ExceptionList = &local_c;
    pvVar1 = Mem_Alloc(0x3c);
    local_4 = 0;
    if (pvVar1 != (void *)0x0) {
      uVar2 = FUN_0098df30(param_1,param_2);
      ExceptionList = local_c;
      return uVar2;
    }
    ExceptionList = local_c;
    return 0;
  }
  return 0;
}

