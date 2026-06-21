// addr: 0x014bc430
// name: LobbyCommand_ChangeLobbyDisplay_printHeader2
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_ChangeLobbyDisplay_debugPrint(void * this, void * out) */

void __thiscall LobbyCommand_ChangeLobbyDisplay_printHeader2(void *this,void *out)

{
                    /* Appends the 'Change Lobby display Lobby Command' header and then emits the
                       base LobbyCommand account id fields. [QA: body byte-identical to
                       LobbyCommand_ChangeLobbyDisplay_printHeader but a distinct sibling class,
                       vftable 0x01900670] */
  FUN_01241650("Change Lobby display Lobby Command\n",0x23);
  AccountCommand_dump(this,out);
  return;
}

