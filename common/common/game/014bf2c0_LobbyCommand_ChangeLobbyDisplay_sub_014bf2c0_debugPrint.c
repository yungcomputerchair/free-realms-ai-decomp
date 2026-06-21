// addr: 0x014bf2c0
// name: LobbyCommand_ChangeLobbyDisplay_sub_014bf2c0_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_ChangeLobbyDisplay_sub_014bf2c0_debugPrint(void * this, void
   * out) */

void __thiscall LobbyCommand_ChangeLobbyDisplay_sub_014bf2c0_debugPrint(void *this,void *out)

{
                    /* Appends the 'Change Lobby display Lobby Command' header and then emits the
                       base LobbyCommand account id fields. */
  FUN_01241650("Change Lobby display Lobby Command\n",0x23);
  AccountCommand_dump(this,out);
  return;
}

