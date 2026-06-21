// addr: 0x014cf440
// name: LobbyCommand_AddBooster_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_AddBooster_debugPrint(void * this, void * out) */

void __thiscall LobbyCommand_AddBooster_debugPrint(void *this,void *out)

{
                    /* Appends the 'Add Boooster Lobby Command' header and then emits the base
                       LobbyCommand account id fields. */
  FUN_01241650("Add Boooster Lobby Command\n",0x1b);
  AccountCommand_dump(this,out);
  return;
}

