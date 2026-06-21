// addr: 0x0135a490
// name: Game_getPlayerDisplayName
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void * Game_getPlayerDisplayName(void * out, int playerId_) */

void * Game_getPlayerDisplayName(void *out,int playerId_)

{
  char cVar1;
  void *map;
  void *pvVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar3;
  char *pcVar4;
  int key_;
  undefined4 local_98;
  void *local_94;
  undefined1 local_90 [4];
  void *local_8c;
  undefined4 local_7c;
  uint local_78;
  char local_74 [100];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Looks up an account display name for a player; if unavailable, formats
                       fallback text "Player %d". */
  puStack_8 = &LAB_0167e01d;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_98;
  ExceptionList = &local_c;
  *(undefined4 *)((int)out + 0x18) = 0xf;
  *(undefined4 *)((int)out + 0x14) = 0;
  local_94 = out;
  *(undefined1 *)((int)out + 4) = 0;
  local_4 = 0;
  local_98 = 1;
  LobbyAccount_ensureSingleton();
  pvVar2 = LobbyServiceAccountMap_findValue(map,key_);
  if (pvVar2 != (void *)0x0) {
    pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             FUN_013a6540(local_90);
    local_4 = 1;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (out,pbVar3,0,0xffffffff);
    local_4 = local_4 & 0xffffff00;
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c);
    }
    local_78 = 0xf;
    local_7c = 0;
    local_8c = (void *)((uint)local_8c & 0xffffff00);
  }
  if (*(int *)((int)out + 0x14) == 0) {
    _sprintf(local_74,"Player %d",playerId_);
    pcVar4 = local_74;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (out,local_74,(int)pcVar4 - (int)(local_74 + 1));
  }
  ExceptionList = local_c;
  return out;
}

