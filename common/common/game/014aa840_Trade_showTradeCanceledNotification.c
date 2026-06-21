// addr: 0x014aa840
// name: Trade_showTradeCanceledNotification
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __fastcall Trade_showTradeCanceledNotification(int param_1)

{
  uint uVar1;
  void *map;
  int iVar2;
  int key_;
  void *pvVar3;
  char *format;
  void *local_41c;
  undefined1 local_418 [28];
  void *local_3fc;
  char local_3f8 [1000];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds display notifications for canceling trade requests, selecting among
                       messages for canceling your request, canceling another player's offer, or
                       another player canceling your request. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a5e08;
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
  FUN_012f8c70(0x23);
  DisplayActionBuilder_addIntArg(pvVar3,*(int *)(param_1 + 8));
  DisplayActionBuilder_addIntArg(pvVar3,*(int *)(param_1 + 0xc));
  DisplayActionBuilder_addBoolArg(pvVar3,true);
  FUN_012d3550(pvVar3);
  local_41c = LobbyServiceAccountMap_findValue(map,*(int *)(param_1 + 0xc));
  pvVar3 = LobbyServiceAccountMap_findValue(map,key_);
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
      FUN_012d08e0();
      iVar2 = FUN_013a3480();
      if (*(int *)(param_1 + 0x10) == iVar2) {
        iVar2 = FUN_013a6540(local_418);
        local_4 = 2;
        if (*(uint *)(iVar2 + 0x18) < 0x10) {
          iVar2 = iVar2 + 4;
          format = "You cancel your trade request to %s.";
        }
        else {
          iVar2 = *(int *)(iVar2 + 4);
          format = "You cancel your trade request to %s.";
        }
      }
      else {
        iVar2 = FUN_013a6540(local_418);
        local_4 = 3;
        if (*(uint *)(iVar2 + 0x18) < 0x10) {
          iVar2 = iVar2 + 4;
          format = "%s cancels your trade request.";
        }
        else {
          iVar2 = *(int *)(iVar2 + 4);
          format = "%s cancels your trade request.";
        }
      }
    }
    else {
      FUN_012d08e0();
      iVar2 = FUN_013a3480();
      if (*(int *)(param_1 + 0x10) == iVar2) {
        iVar2 = FUN_013a6540(local_418);
        local_4 = 5;
        if (*(uint *)(iVar2 + 0x18) < 0x10) {
          iVar2 = iVar2 + 4;
        }
        else {
          iVar2 = *(int *)(iVar2 + 4);
        }
        format = "You cancel %s\'s offer to trade.";
      }
      else {
        iVar2 = FUN_013a6540(local_418);
        local_4 = 4;
        if (*(uint *)(iVar2 + 0x18) < 0x10) {
          iVar2 = iVar2 + 4;
          format = "%s cancels the trade request.";
        }
        else {
          iVar2 = *(int *)(iVar2 + 4);
          format = "%s cancels the trade request.";
        }
      }
    }
    _sprintf(local_3f8,format,iVar2);
    local_4 = 0xffffffff;
    FUN_0041f1d7();
    DisplayActionBuilder_addCStringArg(pvVar3,local_3f8);
    FUN_012d3550(pvVar3);
  }
  ExceptionList = local_c;
  return 1;
}

