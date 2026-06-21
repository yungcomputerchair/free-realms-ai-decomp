// addr: 0x013d8160
// name: FUN_013d8160
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_013d8160(int param_1)

{
  uint uVar1;
  void *map;
  void *pvVar2;
  int key_;
  void *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates or lazily initializes an object/helper and wires it into the owning
                       object. Exact class identity is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168bd1b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  LobbyAccount_ensureSingleton();
  pvVar2 = LobbyServiceAccountMap_findValue(map,key_);
  this = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    Lobby_setAccountRoleField58(*(undefined4 *)(param_1 + 8));
    pvVar2 = Mem_Alloc(0x14);
    local_4 = 0;
    if (pvVar2 != (void *)0x0) {
      this = (void *)FUN_012f9eb0(uVar1);
    }
    local_4 = 0xffffffff;
    FUN_012f8c70(0x19);
    DisplayActionBuilder_addIntArg(this,*(int *)(param_1 + 4));
    DisplayActionBuilder_addIntArg(this,*(int *)(param_1 + 8));
    DisplayActionManager_ensureSingleton();
    FUN_012d3550(this);
  }
  ExceptionList = local_c;
  return 1;
}

