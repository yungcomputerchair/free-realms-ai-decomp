// addr: 0x01502ee0
// name: CommandObject_PickList_applySelectedPhase
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall CommandObject_PickList_applySelectedPhase(int param_1)

{
                    /* If field 0x128 equals 2, forwards field 0x12c to a game helper, then returns
                       success. Exact semantic role is inferred from its proximity to PickList
                       command code. */
  if (*(int *)(param_1 + 0x128) == 2) {
    Game_sendPickListDisplayAction(*(void **)(param_1 + 0x30),*(int *)(param_1 + 300));
  }
  return 1;
}

