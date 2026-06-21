// addr: 0x014bbb60
// name: LobbyCommand_SetupDraft_dump
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_SetupDraft_dump(void * this) */

void __thiscall LobbyCommand_SetupDraft_dump(void *this)

{
  void *in_stack_00000004;
  
                    /* Dumps a SetupDraft lobby command and then the account-scoped command fields.
                        */
  FUN_01241650("SetupDraft Lobby Command\n",0x19);
  AccountCommand_dump(this,in_stack_00000004);
  return;
}

