// addr: 0x013f7ef0
// name: GameTurn_setTurnNumber
// subsystem: common/rules/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall GameTurn_setTurnNumber(int param_1,undefined4 param_2)

{
                    /* Stores a value at offset 0x18 in GameTurn; callers pass current turn counters
                       during turn creation/deserialization. Evidence: called from Game_advanceTurn
                       and Game_deserialize near GameTurn setup. */
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}

