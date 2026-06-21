// addr: 0x013a7d20
// name: Lobby_getPossessivePronoun
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


basic_string<char,std::char_traits<char>,std::allocator<char>_> *
Lobby_getPossessivePronoun(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds a std::string containing 'his', 'her', or 'their' based on a small
                       role/gender value returned by a lobby/account helper. Used by lobby/trade
                       command text paths. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01685f49;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_013a36e0(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
  if (iVar1 == 1) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(param_1,"his",3);
  }
  else if (iVar1 == 2) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (param_1,(char *)&PTR_LAB_018dedd8,3);
  }
  else {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(param_1,"their",5);
  }
  ExceptionList = local_c;
  return param_1;
}

