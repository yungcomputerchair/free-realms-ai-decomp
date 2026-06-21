// addr: 0x01466450
// name: PlaySingleCardState_buttonPressedWithString
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall
PlaySingleCardState_buttonPressedWithString(int *param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  void *game;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  char *fmt;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_7c [4];
  void *local_78;
  undefined4 local_68;
  uint local_64;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_60 [4];
  void *local_5c;
  undefined4 local_4c;
  uint local_48;
  undefined1 local_44 [4];
  void *local_40;
  undefined4 local_30;
  uint local_2c;
  undefined1 local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Implements the operation identified by referenced string 'Got an
                       buttonPressed from %d instead of %d.'. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169dda4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  if (*(uint *)(param_4 + 0x18) < 0x10) {
    iVar7 = param_4 + 4;
  }
  else {
    iVar7 = *(int *)(param_4 + 4);
  }
  fmt = "PlaySingleCardState::buttonPressedWithString: playerid: %d, buttonID: %d, buttonText: %s";
  iVar9 = param_2;
  game = (void *)StateMachineState_getGame
                           ("PlaySingleCardState::buttonPressedWithString: playerid: %d, buttonID: %d, buttonText: %s"
                            ,param_2,param_3,iVar7,DAT_01b839d8 ^ (uint)&stack0xffffff6c);
  Game_logGeneral(game,fmt,iVar9);
  StateMachineState_getActivePlayer();
  iVar7 = GamePlayer_getPlayerId();
  if (iVar7 != param_2) {
    StateMachineState_getActivePlayer(param_2);
    uVar8 = GamePlayer_getPlayerId();
    uVar8 = StateMachineState_getGame("Got an buttonPressed from %d instead of %d.",uVar8);
    Game_logGeneralFormatted(uVar8);
    (**(code **)(*param_1 + 0x88))();
    ExceptionList = local_c;
    return 0;
  }
  if (param_3 == 1) {
    local_64 = 0xf;
    local_68 = 0;
    local_78 = (void *)((uint)local_78 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_7c,"done",4);
    local_4 = 0;
    iVar7 = FUN_0145d850(local_28,local_7c);
    local_4 = 1;
    bVar2 = false;
    bVar1 = false;
    if (*(uint *)(iVar7 + 0x18) < 0x10) {
      iVar9 = iVar7 + 4;
    }
    else {
      iVar9 = *(int *)(iVar7 + 4);
    }
    iVar7 = FUN_00f942a0(0,*(undefined4 *)(param_4 + 0x14),iVar9,*(undefined4 *)(iVar7 + 0x14));
    if (iVar7 != 0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_60,"pass");
      local_4 = 2;
      uVar8 = FUN_0145d850(local_44,local_60);
      local_4 = 3;
      bVar4 = true;
      bVar3 = true;
      bVar2 = true;
      bVar1 = true;
      cVar6 = FUN_01237a70(param_4,uVar8);
      if (cVar6 == '\0') goto LAB_014665e2;
    }
    bVar4 = true;
    bVar3 = true;
    bVar5 = true;
  }
  else {
LAB_014665e2:
    bVar5 = false;
  }
  local_4 = 2;
  if (bVar1) {
    if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
      _free(local_40);
    }
    local_2c = 0xf;
    local_30 = 0;
    local_40 = (void *)((uint)local_40 & 0xffffff00);
  }
  local_4 = 1;
  if (bVar2) {
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      _free(local_5c);
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c = (void *)((uint)local_5c & 0xffffff00);
  }
  local_4 = 0;
  if (bVar3) {
    if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
      _free(local_24);
    }
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
  }
  local_4 = 0xffffffff;
  if (bVar4) {
    if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_78);
    }
    local_64 = 0xf;
    local_68 = 0;
    local_78 = (void *)((uint)local_78 & 0xffffff00);
  }
  if (bVar5) {
    uVar8 = (**(code **)(*param_1 + 0x7c))(param_2);
  }
  else {
    (**(code **)(*param_1 + 0x88))();
    uVar8 = 2;
  }
  ExceptionList = local_c;
  return uVar8;
}

