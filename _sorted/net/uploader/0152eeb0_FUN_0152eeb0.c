// addr: 0x0152eeb0
// name: FUN_0152eeb0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_0152eeb0(int *param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and registers a 0x24-byte object using constructor helper
                       FUN_0152ee20. Exact class is not visible in this thunk. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016badfb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x24);
  uVar3 = 0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    uVar3 = FUN_0152ee20(uVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(*param_1 + 0x48))(uVar3);
  ExceptionList = pvVar2;
  return uVar3;
}

