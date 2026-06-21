// addr: 0x014c0600
// name: LobbyCommand_SelectTournamentDeck_dump
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void LobbyCommand_SelectTournamentDeck_dump(void * this, void * out) */

void __thiscall LobbyCommand_SelectTournamentDeck_dump(void *this,void *out)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined1 auStack_414 [4];
  void *local_410;
  undefined4 local_400;
  uint local_3fc;
  char local_3f8 [1000];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Writes a debug/text dump of the LobbyCommand_SelectTournamentDeck command,
                       including deck ID string. Evidence is the command banner and field format
                       strings in the function. */
  puStack_8 = &LAB_016a9d8b;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)auStack_414;
  ExceptionList = &local_c;
  local_3fc = 0xf;
  local_400 = 0;
  local_410 = (void *)((uint)local_410 & 0xffffff00);
  local_4 = 0;
  FUN_01241650("Select Deck Tournament Lobby Command\n",0x25);
  AccountCommand_dump(this,out);
  if (*(uint *)((int)this + 0x20) < 0x10) {
    iVar3 = (int)this + 0xc;
  }
  else {
    iVar3 = *(int *)((int)this + 0xc);
  }
  _sprintf(local_3f8,"DeckID: %s\n",iVar3);
  pcVar2 = local_3f8;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3f8,(int)pcVar2 - (int)(local_3f8 + 1));
  local_4 = 0xffffffff;
  if (0xf < local_3fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_410);
  }
  ExceptionList = local_c;
  return;
}

