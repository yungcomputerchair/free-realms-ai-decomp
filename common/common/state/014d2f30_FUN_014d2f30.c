// addr: 0x014d2f30
// name: FUN_014d2f30
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_014d2f30(int param_1)

{
  uint uVar1;
  void *pvVar2;
  int value_;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Generic DisplayAction builder/helper that allocates a display action and adds
                       int/string/vector arguments; no class/method string identifies a specific
                       command. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ac7bb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x14);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)FUN_012f9eb0(uVar1);
  }
  local_4 = 0xffffffff;
  if (*(char *)(param_1 + 0xc) == '\0') {
    FUN_012f8c70(0x9b);
    value_ = *(int *)(param_1 + 8);
  }
  else {
    FUN_012f8c70(0x9c);
    value_ = *(int *)(param_1 + 0x10);
  }
  DisplayActionBuilder_addIntArg(pvVar2,value_);
  if (*(void **)(param_1 + 0x14) != (void *)0x0) {
    DisplayAction_addArgValueData(pvVar2,*(void **)(param_1 + 0x14));
  }
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    DisplayAction_addArgValueData(pvVar2,*(void **)(param_1 + 0x18));
  }
  DisplayActionManager_ensureSingleton();
  FUN_012d3550(pvVar2);
  ExceptionList = local_c;
  return 1;
}

