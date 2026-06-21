// addr: 0x0144b8f0
// name: LobbyCommand_ChangeLobbyDisplay_printHeader
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_ChangeLobbyDisplay_dump(void * this) */

void __thiscall LobbyCommand_ChangeLobbyDisplay_printHeader(void *this)

{
  void *in_stack_00000004;
  
                    /* Dumps a Change Lobby display lobby command and then the account-scoped
                       command fields. [QA: header-only dump; distinct class, vftable 0x018eb940] */
  FUN_01241650("Change Lobby display Lobby Command\n",0x23);
  AccountCommand_dump(this,in_stack_00000004);
  return;
}

