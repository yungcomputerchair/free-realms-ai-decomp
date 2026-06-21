// addr: 0x007671f0
// name: FUN_007671f0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_007671f0(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Lazy-allocates and caches a 0x5bc-byte component at actor offset 0x98,
                       returning the cached pointer. Exact component class is not visible in this
                       wrapper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01556aeb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x98) == 0) {
    pvVar2 = Mem_Alloc(0x5bc);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_007aae80(uVar1);
    }
    *(undefined4 *)(param_1 + 0x98) = uVar3;
  }
  ExceptionList = local_c;
  return *(undefined4 *)(param_1 + 0x98);
}

