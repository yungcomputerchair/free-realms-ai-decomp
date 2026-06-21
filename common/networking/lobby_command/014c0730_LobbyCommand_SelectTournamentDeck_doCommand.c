// addr: 0x014c0730
// name: LobbyCommand_SelectTournamentDeck_doCommand
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandSelectTournamentDeck.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: int LobbyCommand_SelectTournamentDeck_doCommand(void * this) */

int __fastcall LobbyCommand_SelectTournamentDeck_doCommand(void *this)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  undefined1 *puVar9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *name;
  void *local_4b4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_4b0 [4];
  void *local_4ac;
  undefined4 local_49c;
  uint local_498;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_494 [4];
  void *local_490;
  undefined4 local_480;
  uint local_47c;
  undefined1 local_478 [4];
  void *local_474;
  undefined4 local_464;
  uint local_460;
  char local_45c [100];
  char local_3f8 [1000];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Handles selecting a tournament deck: builds the tournament deck path, updates
                       or clears deck state, then emits opcode 0x7d with the tournament id string
                       and deck path. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a9def;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_4b4;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 0x24) == 0) {
    pvVar8 = (void *)0x0;
  }
  else {
    pvVar8 = (void *)(**(code **)(**(int **)((int)this + 0x24) + 0x74))
                               (DAT_01b839d8 ^ (uint)&stack0xfffffb3c);
    if (pvVar8 == (void *)0x0) {
      FUN_012f5a60(&DAT_018d4520,
                   "..\\common\\networking\\lobby_command\\LobbyCommandSelectTournamentDeck.cpp",
                   0x44);
    }
    Deck_setName(pvVar8,(void *)((int)this + 8));
  }
  _sprintf(local_45c,"t%d",*(undefined4 *)((int)this + 0x28));
  pcVar2 = local_45c;
  local_498 = 0xf;
  local_49c = 0;
  local_4ac = (void *)((uint)local_4ac & 0xffffff00);
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_4b0,local_45c,(int)pcVar2 - (int)(local_45c + 1));
  local_4 = 0;
  pcVar3 = (char *)TournamentDeck_getFileExtensionSuffix();
  local_47c = 0xf;
  local_480 = 0;
  local_490 = (void *)((uint)local_490 & 0xffffff00);
  pcVar2 = pcVar3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_494,pcVar3,(int)pcVar2 - (int)(pcVar3 + 1));
  local_4._0_1_ = 1;
  _sprintf(local_3f8,"data\\decks\\tournament\\%s%s",local_45c);
  uVar4 = PathConfig_getDefaultBasePath(local_3f8);
  FUN_01249400(local_478,uVar4);
  local_4 = CONCAT31(local_4._1_3_,2);
  Deck_setName(pvVar8,local_4b0);
  puVar9 = local_478;
  FUN_012aab80(puVar9);
  iVar5 = DeckDB_getDeckByName(puVar9);
  if (iVar5 == 0) {
    pvVar6 = pvVar8;
    pvVar7 = (void *)FUN_012aab80();
    DeckDB_setDeck(pvVar7,pvVar6);
  }
  else {
    if (*(char *)((int)this + 0x30) == '\0') goto LAB_014c08e9;
    name = local_4b0;
    pvVar6 = (void *)FUN_012aab80();
    FixedRecordVector_removeRecordByString(pvVar6,name);
    pvVar6 = pvVar8;
    pvVar7 = (void *)FUN_012aab80();
    DeckDB_setDeck(pvVar7,pvVar6);
  }
  pvVar6 = (void *)FUN_012aab80(pvVar8,local_478);
  DeckDB_saveDeck(pvVar6,pvVar8);
LAB_014c08e9:
  local_4b4 = Mem_Alloc(0x14);
  local_4._0_1_ = 3;
  if (local_4b4 == (void *)0x0) {
    pvVar8 = (void *)0x0;
  }
  else {
    pvVar8 = (void *)FUN_012f9eb0();
  }
  local_4._0_1_ = 2;
  FUN_012f8c70(0x7d);
  DisplayActionBuilder_addStringArg(pvVar8,local_4b0);
  DisplayActionBuilder_addStringArg(pvVar8,local_478);
  DisplayActionManager_ensureSingleton();
  uVar4 = FUN_012d3550(pvVar8);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (0xf < local_460) {
                    /* WARNING: Subroutine does not return */
    _free(local_474);
  }
  local_460 = 0xf;
  local_464 = 0;
  local_474 = (void *)((uint)local_474 & 0xffffff00);
  local_4 = (uint)local_4._1_3_ << 8;
  if (0xf < local_47c) {
                    /* WARNING: Subroutine does not return */
    _free(local_490);
  }
  local_47c = 0xf;
  local_480 = 0;
  local_490 = (void *)((uint)local_490 & 0xffffff00);
  local_4 = 0xffffffff;
  if (0xf < local_498) {
                    /* WARNING: Subroutine does not return */
    _free(local_4ac);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}

