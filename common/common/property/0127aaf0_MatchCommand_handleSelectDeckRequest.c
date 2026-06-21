// addr: 0x0127aaf0
// name: MatchCommand_handleSelectDeckRequest
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: uint MatchCommand_handleSelectDeckRequest(void) */

uint MatchCommand_handleSelectDeckRequest(void)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int value;
  undefined4 *deck;
  int value_00;
  void *handle;
  char *pcVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_5c [4];
  void *local_58;
  undefined4 local_48;
  uint local_44;
  undefined1 local_40 [48];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Reads the requested deck name and MatchID, looks up the deck, constructs a
                       MatchCommand_SelectDeck with the match id range and selected deck, sends it,
                       and marks the deck selected. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01664970;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)local_5c;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffff98;
  ExceptionList = &local_c;
  pcVar3 = (char *)FUN_012eb250(&DAT_01811404,&DAT_0175b400);
  local_44 = 0xf;
  local_48 = 0;
  local_58 = (void *)((uint)local_58 & 0xffffff00);
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_5c,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
  local_4 = 0;
  value = FUN_012eb290("MatchID",0);
  pbVar5 = local_5c;
  FUN_012aab80(pbVar5,uVar2);
  deck = (undefined4 *)DeckDB_getDeckByName(pbVar5);
  if ((deck != (undefined4 *)0x0) && (value != 0)) {
    MatchCommand_SelectDeck_ctor(local_40);
    local_4._0_1_ = 1;
    DisplayActionManager_ensureSingleton();
    value_00 = FUN_012d08f0();
    PropertyRange_setStart(local_40,value_00);
    PropertyRange_setEnd(local_40,value);
    MatchCommand_SelectDeck_ctor(local_40,deck);
    DisplayActionManager_ensureSingleton();
    CommandHandle_releaseIfPresent(handle);
    (**(code **)*deck)(1);
    local_4 = (uint)local_4._1_3_ << 8;
    MatchCommand_SelectDeck_dtor(local_40);
  }
  local_4 = 0xffffffff;
  if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_58);
  }
  ExceptionList = local_c;
  return 0;
}

