// addr: 0x00767270
// name: FUN_00767270
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_00767270(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Lazy-allocates and caches a 0x44-byte component at actor offset 0x9c. Exact
                       component class is not visible in this wrapper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01556b1b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x9c) == 0) {
    pvVar2 = Mem_Alloc(0x44);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_007ab770(uVar1);
    }
    *(undefined4 *)(param_1 + 0x9c) = uVar3;
  }
  ExceptionList = local_c;
  return *(undefined4 *)(param_1 + 0x9c);
}

