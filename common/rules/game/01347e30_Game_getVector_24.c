// addr: 0x01347e30
// name: Game_getVector_24
// subsystem: common/rules/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __fastcall Game_getVector_24(int param_1)

{
                    /* Returns a pointer to the Game member at offset 0x24, which callers treat as a
                       vector/list. Evidence: simple address getter and vector size checks in
                       game-won logic. */
  return param_1 + 0x24;
}

