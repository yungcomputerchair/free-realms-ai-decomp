// addr: 0x014be380
// name: LobbyCommand_SetDraftedCards_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_SetDraftedCards_debugPrint(void * this, void * out) */

void __thiscall LobbyCommand_SetDraftedCards_debugPrint(void *this,void *out)

{
                    /* Appends the 'LobbyCommand_SetDraftedCards' header and then emits the base
                       LobbyCommand account id fields. */
  FUN_01241650("LobbyCommand_SetDraftedCards\n",0x1d);
  AccountCommand_dump(this,out);
  return;
}

