// addr: 0x014bdd90
// name: LobbyCommand_SetFlag_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_SetFlag_debugPrint(void * this, void * out) */

void __thiscall LobbyCommand_SetFlag_debugPrint(void *this,void *out)

{
                    /* Appends the 'Set Flag Lobby Command' header and then emits the base
                       LobbyCommand account id fields. */
  FUN_01241650("Set Flag Lobby Command\n",0x17);
  AccountCommand_dump(this,out);
  return;
}

