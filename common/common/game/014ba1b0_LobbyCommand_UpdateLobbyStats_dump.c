// addr: 0x014ba1b0
// name: LobbyCommand_UpdateLobbyStats_dump
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_UpdateLobbyStats_dump(void * this) */

void __thiscall LobbyCommand_UpdateLobbyStats_dump(void *this)

{
  void *in_stack_00000004;
  
                    /* Dumps an UpdateLobbyStats lobby command and then the account-scoped command
                       fields. */
  FUN_01241650("UpdateLobbyStats Lobby Command\n",0x1f);
  AccountCommand_dump(this,in_stack_00000004);
  return;
}

