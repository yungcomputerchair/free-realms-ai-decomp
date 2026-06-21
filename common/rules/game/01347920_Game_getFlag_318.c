// addr: 0x01347920
// name: Game_getFlag_318
// subsystem: common/rules/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined1 __fastcall Game_getFlag_318(int param_1)

{
                    /* Returns the byte at Game offset 0x318, used as a boolean flag in
                       display/game-won state paths. Evidence: simple getter and callers from game
                       action display/state code. */
  return *(undefined1 *)(param_1 + 0x318);
}

