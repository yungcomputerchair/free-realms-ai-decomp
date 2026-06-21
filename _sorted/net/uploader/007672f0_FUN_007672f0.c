// addr: 0x007672f0
// name: FUN_007672f0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_007672f0(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Lazy-allocates and caches a 0x24-byte component at actor offset 0xe8. Exact
                       component class is not visible in this wrapper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01556b4b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0xe8) == 0) {
    pvVar2 = Mem_Alloc(0x24);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0079efb0(uVar1);
    }
    *(undefined4 *)(param_1 + 0xe8) = uVar3;
  }
  ExceptionList = local_c;
  return *(undefined4 *)(param_1 + 0xe8);
}

