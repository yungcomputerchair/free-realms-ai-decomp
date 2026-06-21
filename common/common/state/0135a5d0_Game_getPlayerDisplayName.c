// addr: 0x0135a5d0
// name: Game_getPlayerDisplayName
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
Game_getPlayerDisplayName
          (void *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,
          int param_3)

{
  uint uVar1;
  void *pvVar2;
  int playerId_;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Returns a player display name string for a player id, or "Unknown Player" if
                       no player can be found. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167e069;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  pvVar2 = PlayArea_findPlayerElementById(param_1,param_3);
  if (pvVar2 == (void *)0x0) {
    *(undefined4 *)(param_2 + 0x18) = 0xf;
    *(undefined4 *)(param_2 + 0x14) = 0;
    param_2[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (param_2,"Unknown Player",0xe);
    ExceptionList = local_c;
    return param_2;
  }
  playerId_ = GamePlayer_getAccountId(uVar1);
  Game_getPlayerDisplayName(param_2,playerId_);
  ExceptionList = local_c;
  return param_2;
}

