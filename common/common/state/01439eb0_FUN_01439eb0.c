// addr: 0x01439eb0
// name: FUN_01439eb0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_01439eb0(int param_1)

{
  uint uVar1;
  void *pvVar2;
  void *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Generic DisplayAction builder/helper that allocates a display action and adds
                       int/string/vector arguments; no class/method string identifies a specific
                       command. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016977fb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  DisplayActionManager_ensureSingleton();
  pvVar2 = Mem_Alloc(0x14);
  this = (void *)0x0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    this = (void *)FUN_012f9eb0(uVar1);
  }
  local_4 = 0xffffffff;
  FUN_012f8c70(0xa3);
  DisplayActionBuilder_addBoolArg(this,*(bool *)(param_1 + 0x14));
  DisplayActionBuilder_addIntArg(this,*(int *)(param_1 + 0x18));
  FUN_012d3550(this);
  ExceptionList = local_c;
  return 1;
}

