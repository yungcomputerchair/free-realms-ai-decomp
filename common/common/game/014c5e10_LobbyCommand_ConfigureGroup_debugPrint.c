// addr: 0x014c5e10
// name: LobbyCommand_ConfigureGroup_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_ConfigureGroup_debugPrint(void * this, void * out) */

void __thiscall LobbyCommand_ConfigureGroup_debugPrint(void *this,void *out)

{
                    /* Appends the 'Configure Group Lobby Command' header and then emits the base
                       LobbyCommand account id fields. */
  FUN_01241650("Configure Group Lobby Command\n",0x1e);
  AccountCommand_dump(this,out);
  return;
}

