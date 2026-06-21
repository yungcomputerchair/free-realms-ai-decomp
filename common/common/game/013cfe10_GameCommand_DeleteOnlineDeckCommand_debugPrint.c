// addr: 0x013cfe10
// name: GameCommand_DeleteOnlineDeckCommand_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void GameCommand_DeleteOnlineDeckCommand_debugPrint(void * this, void *
   printer) */

void __thiscall GameCommand_DeleteOnlineDeckCommand_debugPrint(void *this,void *printer)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char local_3ec [1000];
  uint local_4;
  
                    /* Debug-prints a Delete Online Deck command, including base deck-command fields
                       and the deck id string. */
  local_4 = DAT_01b839d8 ^ (uint)local_3ec;
  FUN_01241650("Delete Online Deck Deck Command\n",0x20);
  GameCommand_DeckCommand_debugPrint(printer);
  if (*(uint *)((int)this + 0x1c) < 0x10) {
    iVar3 = (int)this + 8;
  }
  else {
    iVar3 = *(int *)((int)this + 8);
  }
  _sprintf(local_3ec,"DeckID: %s\n",iVar3);
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  return;
}

