// addr: 0x014c7340
// name: LobbyCommand_ChangeBulkStatus_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_ChangeBulkStatus_debugPrint(void * this, void * out) */

void __thiscall LobbyCommand_ChangeBulkStatus_debugPrint(void *this,void *out)

{
                    /* Appends the 'Change Bulk Status Lobby Command' header and then emits the base
                       LobbyCommand account id fields. */
  FUN_01241650("Change Bulk Status Lobby Command\n",0x21);
  AccountCommand_dump(this,out);
  return;
}

