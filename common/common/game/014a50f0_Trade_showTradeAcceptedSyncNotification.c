// addr: 0x014a50f0
// name: Trade_showTradeAcceptedSyncNotification
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __fastcall Trade_showTradeAcceptedSyncNotification(int param_1)

{
  uint uVar1;
  void *map;
  void *pvVar2;
  int iVar3;
  int key_;
  void *pvVar4;
  char *format;
  void *local_41c;
  void *local_418;
  undefined1 local_414 [4];
  void *local_410;
  undefined4 local_400;
  uint local_3fc;
  char local_3f8 [1000];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Trade acceptance notification variant that can include the wait message
                       'Please wait while collections are synchronized.' along with accepted-trade
                       messages and a boolean display arg. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a4bd0;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_41c;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xfffffbd4;
  ExceptionList = &local_c;
  DisplayActionManager_ensureSingleton();
  LobbyAccount_ensureSingleton();
  local_41c = Mem_Alloc(0x14);
  pvVar4 = (void *)0x0;
  local_4 = 0;
  if (local_41c != (void *)0x0) {
    pvVar4 = (void *)FUN_012f9eb0(uVar1);
  }
  local_4 = 0xffffffff;
  FUN_012f8c70(0x23);
  DisplayActionBuilder_addIntArg(pvVar4,*(int *)(param_1 + 8));
  DisplayActionBuilder_addIntArg(pvVar4,*(int *)(param_1 + 0xc));
  DisplayActionBuilder_addBoolArg(pvVar4,false);
  FUN_012d3550(pvVar4);
  pvVar4 = LobbyServiceAccountMap_findValue(map,*(int *)(param_1 + 0xc));
  local_41c = pvVar4;
  pvVar2 = LobbyServiceAccountMap_findValue(map,key_);
  if ((pvVar2 != (void *)0x0) && (pvVar4 != (void *)0x0)) {
    local_418 = Mem_Alloc(0x14);
    local_4 = 1;
    if (local_418 == (void *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar4 = (void *)FUN_012f9eb0();
    }
    local_4 = 0xffffffff;
    FUN_012f8c70(2);
    FUN_012d0920();
    iVar3 = FUN_01301f30();
    DisplayActionBuilder_addIntArg(pvVar4,iVar3);
    local_3f8[0] = '\0';
    FUN_012d08e0();
    iVar3 = FUN_013a3480();
    if (*(int *)(param_1 + 0xc) == iVar3) {
      iVar3 = FUN_013a6540(local_414);
      local_4 = 2;
      if (*(uint *)(iVar3 + 0x18) < 0x10) {
        iVar3 = iVar3 + 4;
        format = "%s accepts your trade request.";
      }
      else {
        iVar3 = *(int *)(iVar3 + 4);
        format = "%s accepts your trade request.";
      }
    }
    else {
      iVar3 = FUN_013a6540(local_414);
      local_4 = 3;
      if (*(uint *)(iVar3 + 0x18) < 0x10) {
        iVar3 = iVar3 + 4;
      }
      else {
        iVar3 = *(int *)(iVar3 + 4);
      }
      format = "You accept %s\'s offer to trade.";
    }
    _sprintf(local_3f8,format,iVar3);
    local_4 = 0xffffffff;
    if (0xf < local_3fc) {
                    /* WARNING: Subroutine does not return */
      _free(local_410);
    }
    local_410 = (void *)((uint)local_410 & 0xffffff00);
    local_400 = 0;
    local_3fc = 0xf;
    DisplayActionBuilder_addCStringArg(pvVar4,local_3f8);
    FUN_012d3550(pvVar4);
  }
  local_418 = Mem_Alloc(0x14);
  local_4 = 4;
  if (local_418 == (void *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = (void *)FUN_012f9eb0();
  }
  local_4 = 0xffffffff;
  FUN_012f8c70(2);
  FUN_012d0920();
  iVar3 = FUN_01301f30();
  DisplayActionBuilder_addIntArg(pvVar4,iVar3);
  DisplayActionBuilder_addCStringArg(pvVar4,"Please wait while collections are synchronized.");
  FUN_012d3550(pvVar4);
  ExceptionList = local_c;
  return 1;
}

