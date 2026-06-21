// addr: 0x013b13d0
// name: MatchCommand_sendJoinAndSelectDeck
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void MatchCommand_sendJoinAndSelectDeck(uint flags, char * joinString, char *
   deckName, uint endRange) */

void MatchCommand_sendJoinAndSelectDeck(uint flags,char *joinString,char *deckName,uint endRange)

{
  undefined4 *deck;
  int value;
  void *handle;
  void *handle_00;
  undefined1 local_bc [48];
  undefined1 local_8c [124];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Looks up a deck by name and, if found, sends a LobbyCommand_Join followed by
                       a MatchCommand_SelectDeck for that deck. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01687546;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)local_bc;
  ExceptionList = &local_c;
  FUN_012aab80(deckName,DAT_01b839d8 ^ (uint)&stack0xffffff34);
  deck = (undefined4 *)DeckDB_getDeckByName(deckName);
  if (deck != (undefined4 *)0x0) {
    DisplayActionManager_ensureSingleton();
    value = FUN_012d08f0();
    LobbyCommand_Join_ctor(local_8c);
    local_4 = 0;
    PropertyRange_setStart(local_8c,value);
    PropertyRange_setEnd2(local_8c,endRange);
    PropertyRange_setFlags(local_8c,flags);
    LobbyCommand_Join_setJoinString(local_8c,joinString);
    DisplayActionManager_ensureSingleton();
    CommandHandle_releaseIfPresent(handle);
    MatchCommand_SelectDeck_ctor(local_bc);
    local_4._0_1_ = 1;
    PropertyRange_setStart(local_bc,value);
    PropertyRange_setEnd(local_bc,endRange);
    MatchCommand_SelectDeck_ctor(local_bc,deck);
    DisplayActionManager_ensureSingleton();
    CommandHandle_releaseIfPresent(handle_00);
    (**(code **)*deck)(1);
    local_4 = (uint)local_4._1_3_ << 8;
    MatchCommand_SelectDeck_dtor(local_bc);
    local_4 = 0xffffffff;
    LobbyCommand_Join_dtor(local_8c);
  }
  ExceptionList = local_c;
  return;
}

