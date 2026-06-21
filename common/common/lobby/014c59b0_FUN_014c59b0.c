// addr: 0x014c59b0
// name: FUN_014c59b0
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_014c59b0(int param_1)

{
  void *pvVar1;
  void *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016aaceb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_012cfde0(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  DisplayActionManager_ensureSingleton();
  pvVar1 = (void *)FUN_012cc6b0(*(undefined4 *)(param_1 + 0x10));
  this = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    Lobby_copyPropertiesFromSet(pvVar1,*(void **)(param_1 + 0xc));
    pvVar1 = Mem_Alloc(0x14);
    local_4 = 0;
    if (pvVar1 != (void *)0x0) {
      this = (void *)FUN_012f9eb0();
    }
    local_4 = 0xffffffff;
    FUN_012f8c70(8);
    DisplayActionBuilder_addIntArg(this,*(int *)(param_1 + 0x10));
    FUN_012fa0c0(*(undefined4 *)(param_1 + 8));
    DisplayActionBuilder_addIntArg(this,*(int *)(param_1 + 0xc));
    FUN_012d3550(this);
  }
  ExceptionList = local_c;
  return 1;
}

