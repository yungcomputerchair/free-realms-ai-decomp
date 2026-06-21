// addr: 0x0130c800
// name: Lobby_setAccountRole
// subsystem: common/common/lobby
// source (binary assert): common/common/lobby/Lobby.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Lobby_setAccountRole(void * this, void * account, int roleId_) */

void __thiscall Lobby_setAccountRole(void *this,void *account,int roleId_)

{
  void *pvVar1;
  int iVar2;
  int *roleId;
  void *map;
  void *pvVar3;
  int iVar4;
  undefined4 *extraout_EAX;
  int key_;
  undefined1 *puVar5;
  undefined1 auStack_1c [4];
  void *pvStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar2 = roleId_;
  pvVar1 = account;
                    /* Ensures the role is valid, removes the account from its previous role bucket
                       when needed, then inserts the account into the role map for the new role.
                       Used by join and bulk-join lobby commands. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01676ec8;
  local_c = ExceptionList;
  roleId = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffffd4);
  ExceptionList = &local_c;
  while( true ) {
    if (iVar2 == 0) {
      FUN_012f5a60("kInvalidRole != role","..\\common\\common\\lobby\\Lobby.cpp",0x25b);
    }
    if (*(int *)((int)this + 0x1c) == 1) {
      LobbyAccount_ensureSingleton();
      pvVar3 = LobbyServiceAccountMap_findValue(map,key_);
      if (pvVar3 != (void *)0x0) {
        Lobby_setAccountRoleField58(2);
      }
    }
    iVar4 = FUN_01306270(pvVar1);
    if (iVar4 != iVar2) break;
    FUN_01306b80(pvVar1);
  }
  LobbyRoleMap_lowerBound((void *)((int)this + 0x20),auStack_1c,&roleId_,roleId);
  pvVar1 = (void *)*extraout_EAX;
  iVar2 = extraout_EAX[1];
  iVar4 = *(int *)((int)this + 0x24);
  if ((pvVar1 == (void *)0x0) || (pvVar1 != (void *)((int)this + 0x20))) {
    FUN_00d83c2d();
  }
  if (iVar2 == iVar4) {
    pvStack_18 = (void *)0x0;
    uStack_14 = 0;
    uStack_10 = 0;
    uStack_4 = 0;
    FUN_0042c155(&account);
    puVar5 = auStack_1c;
    LobbyRoleMap_getOrCreateRoleSet(&roleId_);
    FUN_005f1e5c(puVar5);
    uStack_4 = 0xffffffff;
    if (pvStack_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_18);
    }
  }
  else {
    if (pvVar1 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (iVar2 == *(int *)((int)pvVar1 + 4)) {
      FUN_00d83c2d();
    }
    FUN_0042c155(&account);
  }
  ExceptionList = local_c;
  return;
}

