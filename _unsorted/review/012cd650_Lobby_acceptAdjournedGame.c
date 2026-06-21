// addr: 0x012cd650
// name: Lobby_acceptAdjournedGame
// subsystem: common/review2
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall Lobby_acceptAdjournedGame(int param_1,int param_2,undefined4 param_3,char param_4)

{
  uint uVar1;
  void *handle;
  int iVar2;
  void *pvVar3;
  undefined4 ****ppppuVar4;
  undefined4 uVar5;
  int value;
  int local_438;
  void *local_434;
  undefined1 local_430 [4];
  void *local_42c;
  int local_41c;
  uint local_418;
  undefined1 local_414 [4];
  undefined4 ***local_410 [5];
  uint local_3fc;
  char local_3f8 [1000];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Handles accepting/resuming an adjourned match, constructs
                       LobbyCommand_AcceptAdjournedGame, and displays "You agree to resume match:
                       %s" with related match/account data. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166f89b;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_438;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xfffffbb8;
  ExceptionList = &local_c;
  DisplayActionManager_ensureSingleton();
  LobbyAccount_ensureSingleton();
  iVar2 = FUN_012d08e0(uVar1);
  value = -1;
  if (iVar2 != 0) {
    value = FUN_013a3480();
  }
  local_438 = 0;
  iVar2 = FUN_012d0920();
  if (iVar2 != 0) {
    FUN_012d0920();
    local_438 = FUN_01301f30();
  }
  formatIntToString(local_414,*(undefined4 *)(param_1 + 0x3c));
  local_4 = 0;
  if (value == param_2) {
    LobbyCommand_AcceptAdjournedGame_ctor(local_430);
    local_4 = CONCAT31(local_4._1_3_,1);
    PropertyRange_setStart(local_430,value);
    FUN_013d8650(*(undefined4 *)(param_1 + 0x3c));
    FUN_013d8630(*(undefined4 *)(param_1 + 0x40));
    iVar2 = FUN_012d0920();
    if (iVar2 != 0) {
      FUN_013d8690(local_438);
    }
    FUN_013d8670(param_3);
    CommandHandle_releaseIfPresent(handle);
    if (((char)param_3 == '\x01') && (param_4 == '\0')) {
      local_434 = Mem_Alloc(0x14);
      local_4._0_1_ = 2;
      if (local_434 == (void *)0x0) {
        pvVar3 = (void *)0x0;
      }
      else {
        pvVar3 = (void *)FUN_012f9eb0();
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_012f8c70(2);
      DisplayActionBuilder_addIntArg(pvVar3,local_438);
      ppppuVar4 = (undefined4 ****)local_410[0];
      if (local_3fc < 0x10) {
        ppppuVar4 = local_410;
      }
      _sprintf(local_3f8,"You agree to resume match: %s",ppppuVar4);
      DisplayActionBuilder_addCStringArg(pvVar3,local_3f8);
      FUN_012d3550(pvVar3);
    }
    local_4 = local_4 & 0xffffff00;
    LobbyCommand_AcceptAdjournedGame_dtor(local_430);
  }
  if ((char)param_3 == '\0') {
    local_434 = Mem_Alloc(0x14);
    local_4._0_1_ = 3;
    if (local_434 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_012f9eb0();
    }
    local_4._0_1_ = 0;
    FUN_012f8c70(0x32);
    FUN_012d3550(uVar5);
    if (param_4 == '\0') {
      local_418 = 0xf;
      local_41c = 0;
      local_42c = (void *)((uint)local_42c & 0xffffff00);
      local_4._0_1_ = 4;
      if ((((param_2 < 1) && (param_2 != -1)) && (param_2 != -2)) &&
         ((param_2 != -3 && (param_2 == 0)))) {
        FUN_00f972e0(&DAT_0175b400);
      }
      if (local_41c != 0) {
        local_434 = Mem_Alloc(0x14);
        local_4._0_1_ = 5;
        if (local_434 == (void *)0x0) {
          pvVar3 = (void *)0x0;
        }
        else {
          pvVar3 = (void *)FUN_012f9eb0();
        }
        local_4._0_1_ = 4;
        FUN_012f8c70(2);
        DisplayActionBuilder_addIntArg(pvVar3,local_438);
        DisplayActionBuilder_addStringArg(pvVar3,local_430);
        FUN_012d3550(pvVar3);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      if (0xf < local_418) {
                    /* WARNING: Subroutine does not return */
        _free(local_42c);
      }
      local_418 = 0xf;
      local_41c = 0;
      local_42c = (void *)((uint)local_42c & 0xffffff00);
    }
  }
  local_4 = 0xffffffff;
  if (local_3fc < 0x10) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_410[0]);
}

