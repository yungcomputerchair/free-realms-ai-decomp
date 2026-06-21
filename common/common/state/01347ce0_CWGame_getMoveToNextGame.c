// addr: 0x01347ce0
// name: CWGame_getMoveToNextGame
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined1 __fastcall CWGame_getMoveToNextGame(int param_1)

{
                    /* Returns the byte flag at offset 0x38a. CWGameTurn::advancePhase uses it to
                       decide whether to clear state and start the next game. */
  return *(undefined1 *)(param_1 + 0x38a);
}

