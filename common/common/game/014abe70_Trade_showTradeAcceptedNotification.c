// addr: 0x014abe70
// name: Trade_showTradeAcceptedNotification
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __fastcall Trade_showTradeAcceptedNotification(int param_1)

{
  uint uVar1;
  void *map;
  int iVar2;
  int key_;
  void *pvVar3;
  char *format;
  void *local_41c;
  undefined1 local_418 [4];
  void *local_414;
  undefined4 local_404;
  uint local_400;
  void *local_3fc;
  char local_3f8 [1000];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds display notifications for an accepted trade request, including 'You
                       accept %s’s offer to trade.' and '%s accepts your trade request.'. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a6212;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_41c;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xfffffbd4;
  ExceptionList = &local_c;
  DisplayActionManager_ensureSingleton();
  LobbyAccount_ensureSingleton();
  local_41c = Mem_Alloc(0x14);
  pvVar3 = (void *)0x0;
  local_4 = 0;
  if (local_41c != (void *)0x0) {
    pvVar3 = (void *)FUN_012f9eb0(uVar1);
  }
  local_4 = 0xffffffff;
  FUN_012f8c70(0x22);
  DisplayActionBuilder_addIntArg(pvVar3,*(int *)(param_1 + 8));
  DisplayActionBuilder_addIntArg(pvVar3,*(int *)(param_1 + 0xc));
  DisplayActionBuilder_addIntArg(pvVar3,*(int *)(param_1 + 4));
  DisplayActionBuilder_addIntArg(pvVar3,*(int *)(param_1 + 0x10));
  FUN_012d3550(pvVar3);
  local_41c = LobbyServiceAccountMap_findValue(map,key_);
  pvVar3 = LobbyServiceAccountMap_findValue(map,*(int *)(param_1 + 4));
  if ((pvVar3 != (void *)0x0) && (local_41c != (void *)0x0)) {
    local_3fc = Mem_Alloc(0x14);
    local_4 = 1;
    if (local_3fc == (void *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = (void *)FUN_012f9eb0();
    }
    local_4 = 0xffffffff;
    FUN_012f8c70(2);
    FUN_012d0920();
    iVar2 = FUN_01301f30();
    DisplayActionBuilder_addIntArg(pvVar3,iVar2);
    local_3f8[0] = '\0';
    FUN_012d08e0();
    iVar2 = FUN_013a3480();
    if (*(int *)(param_1 + 0xc) == iVar2) {
      iVar2 = FUN_013a6540(local_418);
      local_4 = 2;
      if (*(uint *)(iVar2 + 0x18) < 0x10) {
        iVar2 = iVar2 + 4;
        format = "%s accepts your trade request.";
      }
      else {
        iVar2 = *(int *)(iVar2 + 4);
        format = "%s accepts your trade request.";
      }
    }
    else {
      iVar2 = FUN_013a6540(local_418);
      local_4 = 3;
      if (*(uint *)(iVar2 + 0x18) < 0x10) {
        iVar2 = iVar2 + 4;
      }
      else {
        iVar2 = *(int *)(iVar2 + 4);
      }
      format = "You accept %s\'s offer to trade.";
    }
    _sprintf(local_3f8,format,iVar2);
    local_4 = 0xffffffff;
    if (0xf < local_400) {
                    /* WARNING: Subroutine does not return */
      _free(local_414);
    }
    local_414 = (void *)((uint)local_414 & 0xffffff00);
    local_404 = 0;
    local_400 = 0xf;
    DisplayActionBuilder_addCStringArg(pvVar3,local_3f8);
    FUN_012d3550(pvVar3);
  }
  ExceptionList = local_c;
  return 1;
}

