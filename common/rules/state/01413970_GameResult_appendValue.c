// addr: 0x01413970
// name: GameResult_appendValue
// subsystem: common/rules/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void GameResult_appendValue(void)

{
                    /* Thin wrapper around a container append helper used by GameResult and multiple
                       state methods to append a value/list item. Evidence is GameResult_ctor caller
                       and forwarding directly to 014135c0. */
  FUN_014135c0();
  return;
}

