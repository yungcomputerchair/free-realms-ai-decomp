// addr: 0x013d0460
// name: GameCommand_AddOnlineDeckCommand_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void GameCommand_AddOnlineDeckCommand_debugPrint(void * this, void * printer)
    */

void __thiscall GameCommand_AddOnlineDeckCommand_debugPrint(void *this,void *printer)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char local_3ec [1000];
  uint local_4;
  
                    /* Debug-prints an Add Online Deck command, including serialized deck length and
                       serialized deck text. */
  local_4 = DAT_01b839d8 ^ (uint)local_3ec;
  FUN_01241650("Add Online Deck Deck Command\n",0x1d);
  GameCommand_DeckCommand_debugPrint(printer);
  _sprintf(local_3ec,"SerializedDeckLength : %d\n",*(undefined4 *)((int)this + 4));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  FUN_01241650("SerializedDeck: ",0x10);
  pcVar2 = *(char **)((int)this + 8);
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  FUN_01241650(&DAT_01770548,1);
  return;
}

