// addr: 0x014d62c0
// name: FUN_014d62c0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_014d62c0(int param_1)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  void *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Generic DisplayAction builder/helper that allocates a display action and adds
                       int/string/vector arguments; no class/method string identifies a specific
                       command. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ad1fb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  DisplayActionManager_ensureSingleton();
  iVar2 = FUN_012d08e0(uVar1);
  this = (void *)0x0;
  if (iVar2 != 0) {
    iVar2 = FUN_013a3480();
    if (*(int *)(param_1 + 0xc) == iVar2) {
      pvVar3 = Mem_Alloc(0x14);
      local_4 = 0;
      if (pvVar3 != (void *)0x0) {
        this = (void *)FUN_012f9eb0();
      }
      local_4 = 0xffffffff;
      FUN_012f8c70(0x5b);
      DisplayActionBuilder_addIntArg(this,*(int *)(param_1 + 4));
      DisplayActionBuilder_addIntArg(this,*(int *)(param_1 + 0x10));
      DisplayActionBuilder_addIntArg(this,*(int *)(param_1 + 8));
      DisplayActionManager_ensureSingleton();
      FUN_012d3550(this);
    }
  }
  ExceptionList = local_c;
  return 1;
}

