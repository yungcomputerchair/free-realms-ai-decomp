// addr: 0x01348d40
// name: Game_setMatchStructure
// subsystem: common/rules/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall Game_setMatchStructure(int param_1,undefined4 param_2)

{
                    /* Stores a value at Game offset 0x2ec, which setup logs later as
                       matchStructure. Evidence: receiveCommandText has playFormat/leagueID setup
                       paths and Game_setup logs "matchStructure %d" from the same field area. */
  *(undefined4 *)(param_1 + 0x2ec) = param_2;
  return;
}

