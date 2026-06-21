// addr: 0x014c3b90
// name: LobbyCommand_LeaveLeague_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_LeaveLeague_debugPrint(void * this, void * out) */

void __thiscall LobbyCommand_LeaveLeague_debugPrint(void *this,void *out)

{
                    /* Appends the Leave League lobby-command header and delegates to the
                       LeaveLobby/base formatter, which prints account and group ids. */
  FUN_01241650("Leave League Lobby Command\n",0x1b);
  LobbyCommand_Leave_dump(this,out);
  return;
}

