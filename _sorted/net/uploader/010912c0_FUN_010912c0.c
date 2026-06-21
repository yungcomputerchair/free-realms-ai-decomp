// addr: 0x010912c0
// name: FUN_010912c0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall
FUN_010912c0(undefined4 *param_1,undefined4 param_2,void *param_3,undefined4 param_4)

{
  bool bVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Conditional allocator/submitter for an unnamed 0x3b8-byte object; type not
                       identified. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01642d4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(char *)(param_1 + 0x18) != '\0') {
    bVar1 = FUN_01091700(param_3);
    if (bVar1) {
      pvVar2 = Mem_Alloc(0x3b8);
      local_4 = 0;
      if (pvVar2 == (void *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_01090810(param_2,param_3,param_1 + 0x10,param_1 + 0x14,*param_1,param_1[2],
                             param_4);
      }
      local_4 = 0xffffffff;
      FUN_0108f0e0(uVar3);
      ExceptionList = local_c;
      return 1;
    }
  }
  ExceptionList = local_c;
  return 0;
}

