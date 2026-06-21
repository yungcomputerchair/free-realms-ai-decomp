// addr: 0x01534080
// name: FUN_01534080
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_01534080(int *param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and registers a 0xa0-byte object using constructor helper
                       FUN_01533a80. Exact class is not visible in this thunk. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016bb9ab;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0xa0);
  uVar3 = 0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    uVar3 = FUN_01533a80(uVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(*param_1 + 0x48))(uVar3);
  ExceptionList = pvVar2;
  return uVar3;
}

