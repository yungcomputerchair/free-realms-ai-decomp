// addr: 0x014182f0
// name: PropertyCommand_emitNonRandomizedIds
// subsystem: common/rules/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void PropertyCommand_emitNonRandomizedIds(void *param_1,void *param_2)

{
                    /* Wrapper around PropertyCommand_emitRandomizedIds passing 0 as the first flag,
                       likely emitting non-randomized ids for practice/empty deck setup. Evidence:
                       sole call is Game_setupPracticeOrEmptyDeck and direct call with constant 0.
                        */
  PropertyCommand_emitRandomizedIds(param_1,false,param_2);
  return;
}

