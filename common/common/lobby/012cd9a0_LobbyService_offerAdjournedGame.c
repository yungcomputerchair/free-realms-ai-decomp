// addr: 0x012cd9a0
// name: LobbyService_offerAdjournedGame
// subsystem: common/common/lobby
// source (binary assert): common/common/lobby/LobbyService.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void LobbyService_offerAdjournedGame(void * this, uint offerId_, uint
   lobbyId_, void * account) */

void __thiscall
LobbyService_offerAdjournedGame(void *this,uint offerId_,uint lobbyId_,void *account)

{
  uint uVar1;
  void *handle;
  void *pvVar2;
  int iVar3;
  void *map;
  undefined4 uVar4;
  int key_;
  void *local_44;
  undefined1 local_40 [20];
  undefined1 local_2c [4];
  void *local_28;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Builds and sends LobbyCommand_OfferAdjournedGame, choosing a local path for
                       the current account and otherwise validating the target account. The command
                       fields are populated through the small setters at 013d8c20/40/60. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166f901;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_44;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffac;
  ExceptionList = &local_c;
  DisplayActionManager_ensureSingleton();
  *(uint *)((int)this + 0x3c) = offerId_;
  *(uint *)((int)this + 0x40) = lobbyId_;
  FUN_012d08e0(uVar1);
  pvVar2 = (void *)FUN_013a3480();
  uVar1 = 0;
  iVar3 = FUN_012d0920();
  if (iVar3 != 0) {
    FUN_012d0920();
    uVar1 = FUN_01301f30();
  }
  formatIntToString(local_2c,offerId_);
  local_4 = 0;
  if (pvVar2 == account) {
    LobbyCommand_OfferAdjournedGame_ctor();
    local_4._0_1_ = 1;
    PropertyRange_setStart(local_40,(int)pvVar2);
    LobbyCommand_OfferAdjournedGame_setOfferId(local_40,offerId_);
    LobbyCommand_OfferAdjournedGame_setLobbyId(local_40,lobbyId_);
    LobbyCommand_OfferAdjournedGame_setAccountId(local_40,uVar1);
    CommandHandle_releaseIfPresent(handle);
    local_44 = Mem_Alloc(0x14);
    local_4._0_1_ = 2;
    if (local_44 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = (void *)FUN_012f9eb0();
    }
    local_4._0_1_ = 1;
    FUN_012f8c70(2);
    DisplayActionBuilder_addIntArg(pvVar2,uVar1);
    FUN_012d3550(pvVar2);
    local_4 = (uint)local_4._1_3_ << 8;
    LobbyCommand_OfferAdjournedGame_dtor(local_40);
  }
  else {
    LobbyAccount_ensureSingleton();
    pvVar2 = LobbyServiceAccountMap_findValue(map,key_);
    if (pvVar2 == (void *)0x0) {
      FUN_012f5a60("account","..\\common\\common\\lobby\\LobbyService.cpp",0x370);
    }
    local_44 = Mem_Alloc(0x14);
    local_4._0_1_ = 3;
    if (local_44 == (void *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_012f9eb0();
    }
    local_4._0_1_ = 0;
    FUN_012f8c70(0x31);
    FUN_012d3550(uVar4);
    local_44 = Mem_Alloc(0x14);
    local_4._0_1_ = 4;
    if (local_44 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = (void *)FUN_012f9eb0();
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_012f8c70(2);
    DisplayActionBuilder_addIntArg(pvVar2,uVar1);
    FUN_012d3550(pvVar2);
  }
  local_4 = 0xffffffff;
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  ExceptionList = local_c;
  return;
}

