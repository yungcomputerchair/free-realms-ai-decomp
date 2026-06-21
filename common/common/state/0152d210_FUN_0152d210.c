// addr: 0x0152d210
// name: FUN_0152d210
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_0152d210(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Generic DisplayAction builder/helper that allocates a display action and adds
                       int/string/vector arguments; no class/method string identifies a specific
                       command. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ba8ab;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x14);
  uVar3 = 0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    uVar3 = FUN_012f9eb0(uVar1);
  }
  local_4 = 0xffffffff;
  FUN_012f8c70(0xdd);
  FUN_012fa570(param_1 + 8);
  DisplayActionManager_ensureSingleton();
  FUN_012d3550(uVar3);
  ExceptionList = local_c;
  return 1;
}

