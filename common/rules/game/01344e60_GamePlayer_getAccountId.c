// addr: 0x01344e60
// name: GamePlayer_getAccountId
// subsystem: common/rules/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall GamePlayer_getAccountId(int param_1)

{
                    /* Returns the dword at offset 0x38 from a GamePlayer-like object; callers use
                       it in account/order logging and winner maps. Evidence: frequent
                       GamePlayer-related callers and use with ordered account IDs. */
  return *(undefined4 *)(param_1 + 0x38);
}

