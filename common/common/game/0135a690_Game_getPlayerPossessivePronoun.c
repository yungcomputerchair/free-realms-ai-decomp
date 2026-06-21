// addr: 0x0135a690
// name: Game_getPlayerPossessivePronoun
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
Game_getPlayerPossessivePronoun
          (void *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,
          int param_3)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  void *map;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar4;
  char *pcVar5;
  int key_;
  undefined4 local_98;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_94;
  undefined1 local_90 [4];
  void *local_8c;
  undefined4 local_7c;
  uint local_78;
  char local_74 [100];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Builds a possessive-pronoun string for a player, using lobby account data
                       when available and falling back to the literal 'their'. Evidence: referenced
                       string 'their' and Lobby_getPossessivePronoun call. */
  puStack_8 = &LAB_0167e0bd;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_98;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffff60;
  ExceptionList = &local_c;
  local_4 = 0;
  local_94 = param_2;
  local_98 = 0;
  pvVar3 = PlayArea_findPlayerElementById(param_1,param_3);
  *(undefined4 *)(param_2 + 0x18) = 0xf;
  *(undefined4 *)(param_2 + 0x14) = 0;
  param_2[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
  local_4 = 0;
  local_98 = 1;
  if (pvVar3 != (void *)0x0) {
    GamePlayer_getAccountId();
    LobbyAccount_ensureSingleton();
    pvVar3 = LobbyServiceAccountMap_findValue(map,key_);
    if (pvVar3 != (void *)0x0) {
      pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               Lobby_getPossessivePronoun(local_90);
      local_4 = 1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (param_2,pbVar4,0,0xffffffff);
      local_4 = local_4 & 0xffffff00;
      if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
        _free(local_8c);
      }
      local_78 = 0xf;
      local_7c = 0;
      local_8c = (void *)((uint)local_8c & 0xffffff00);
    }
  }
  if (*(int *)(param_2 + 0x14) == 0) {
    _sprintf(local_74,"their",uVar2);
    pcVar5 = local_74;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (param_2,local_74,(int)pcVar5 - (int)(local_74 + 1));
  }
  ExceptionList = local_c;
  return param_2;
}

