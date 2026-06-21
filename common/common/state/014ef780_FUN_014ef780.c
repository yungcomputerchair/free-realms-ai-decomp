// addr: 0x014ef780
// name: FUN_014ef780
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_014ef780(int param_1)

{
  uint uVar1;
  void *pvVar2;
  void *map;
  int key_;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates or lazily initializes an object/helper and wires it into the owning
                       object. Exact class identity is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b1abb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 8) != 0) {
    DisplayActionManager_ensureSingleton();
    pvVar2 = Mem_Alloc(0x14);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = (void *)FUN_012f9eb0(uVar1);
    }
    local_4 = 0xffffffff;
    FUN_012f8c70(0xbf);
    DisplayActionBuilder_addIntArg(pvVar2,*(int *)(param_1 + 4));
    uVar1 = get_field_4(*(void **)(param_1 + 8));
    DisplayActionBuilder_addIntArg(pvVar2,uVar1);
    FUN_012d3550(pvVar2);
    LobbyAccount_ensureSingleton();
    pvVar2 = LobbyServiceAccountMap_findValue(map,key_);
    if (pvVar2 != (void *)0x0) {
      FUN_013a9690(*(undefined4 *)(param_1 + 8));
    }
  }
  ExceptionList = local_c;
  return 1;
}

