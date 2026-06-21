// addr: 0x014c7d50
// name: FUN_014c7d50
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_014c7d50(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void *map;
  void *pvVar4;
  int key_;
  int iVar5;
  void *pvVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates or lazily initializes an object/helper and wires it into the owning
                       object. Exact class identity is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ab066;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  pvVar6 = (void *)0x0;
  if (*(int *)(param_1 + 0x10) != 0) {
    DisplayActionManager_ensureSingleton();
    iVar2 = FUN_012d0920(uVar1);
    DisplayActionManager_ensureSingleton();
    iVar3 = FUN_012d08e0();
    iVar5 = 0;
    if (iVar3 != 0) {
      iVar5 = FUN_013a3480();
    }
    LobbyAccount_ensureSingleton();
    if (iVar2 != 0) {
      pvVar4 = Mem_Alloc(0x14);
      local_4 = 0;
      if (pvVar4 != (void *)0x0) {
        pvVar6 = (void *)FUN_012f9eb0();
      }
      local_4 = 0xffffffff;
      FUN_012f8c70(2);
      iVar2 = FUN_01301f30();
      DisplayActionBuilder_addIntArg(pvVar6,iVar2);
      if ((*(int *)(param_1 + 0x10) == 0x28) && (iVar5 != *(int *)(param_1 + 0xc))) {
        LobbyServiceAccountMap_findValue(map,key_);
      }
      DisplayActionManager_ensureSingleton();
      FUN_012d3550(pvVar6);
    }
  }
  pvVar6 = Mem_Alloc(0x14);
  local_4 = 1;
  if (pvVar6 == (void *)0x0) {
    pvVar6 = (void *)0x0;
  }
  else {
    pvVar6 = (void *)FUN_012f9eb0();
  }
  local_4 = 0xffffffff;
  FUN_012f8c70(0x58);
  DisplayActionBuilder_addIntArg(pvVar6,*(int *)(param_1 + 8));
  DisplayActionBuilder_addIntArg(pvVar6,*(int *)(param_1 + 0x14));
  DisplayActionManager_ensureSingleton();
  FUN_012d3550(pvVar6);
  ExceptionList = local_c;
  return 1;
}

