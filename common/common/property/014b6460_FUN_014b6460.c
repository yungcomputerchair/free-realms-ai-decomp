// addr: 0x014b6460
// name: FUN_014b6460
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool LobbyAccount_sendDisplayAction(void * ctx) */

bool __fastcall LobbyAccount_sendDisplayAction(void *ctx)

{
  uint uVar1;
  void *this;
  void *map;
  void *pvVar2;
  undefined4 uVar3;
  void *this_00;
  int key_;
  void *this_01;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Looks up a lobby account, builds a display action with integer args, and
                       dispatches it. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a80d6;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  DisplayActionManager_ensureSingleton();
  if (*(char *)((int)ctx + 0x14) != '\0') {
    LobbyAccountRef_setAccount(this,*(int *)((int)ctx + 0x1c));
    LobbyAccount_ensureSingleton();
    LobbyServiceAccountMap_findValue(map,key_);
    FUN_013a8b70((int)ctx + 4);
  }
  pvVar2 = Mem_Alloc(0x14);
  this_01 = (void *)0x0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    this_01 = (void *)FUN_012f9eb0(uVar1);
  }
  local_4 = 0xffffffff;
  FUN_012f8c70(0xe);
  DisplayActionBuilder_addBoolArg(this_01,*(bool *)((int)ctx + 0x14));
  DisplayActionBuilder_addIntArg(this_01,*(int *)((int)ctx + 0x18));
  DisplayActionBuilder_addIntArg(this_01,*(int *)((int)ctx + 0x1c));
  FUN_012d3550(this_01);
  if (*(char *)((int)ctx + 0x14) != '\0') {
    pvVar2 = Mem_Alloc(0x14);
    local_4 = 1;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_012f9eb0();
    }
    local_4 = 0xffffffff;
    FUN_012f8c70(0x88);
    FUN_012d3550(uVar3);
  }
  FUN_012d0850(this,*(int *)((int)ctx + 0x24));
  pvVar2 = (void *)((int)ctx + 0x28);
  LoginService_getInstance();
  LoginCommand_setField04(this_00,pvVar2);
  ExceptionList = local_c;
  return true;
}

