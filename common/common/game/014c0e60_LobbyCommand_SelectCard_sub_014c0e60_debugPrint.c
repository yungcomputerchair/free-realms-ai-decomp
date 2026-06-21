// addr: 0x014c0e60
// name: LobbyCommand_SelectCard_sub_014c0e60_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_SelectCard_sub_014c0e60_debugPrint(void * this, void * out)
    */

void __thiscall LobbyCommand_SelectCard_sub_014c0e60_debugPrint(void *this,void *out)

{
                    /* Appends the 'Select Card Lobby Command' header and then emits the base
                       LobbyCommand account-id fields. */
  FUN_01241650("Select Card Lobby Command\n",0x1a);
  AccountCommand_dump(this,out);
  return;
}

