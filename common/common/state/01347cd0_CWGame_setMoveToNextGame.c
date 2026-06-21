// addr: 0x01347cd0
// name: CWGame_setMoveToNextGame
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall CWGame_setMoveToNextGame(int param_1,undefined1 param_2)

{
                    /* Sets the byte flag at offset 0x38a that CWGameTurn::advancePhase reads as
                       moveToNextGame. The caller string explicitly names 'moveToNextGame'. */
  *(undefined1 *)(param_1 + 0x38a) = param_2;
  return;
}

