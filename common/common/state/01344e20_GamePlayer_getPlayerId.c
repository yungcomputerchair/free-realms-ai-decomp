// addr: 0x01344e20
// name: GamePlayer_getPlayerId
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall GamePlayer_getPlayerId(int param_1)

{
                    /* Returns the player id at offset 0x34. Evidence comes from setActivePlayer
                       logging and CWGame player/play-area selection code that pass this value as a
                       player number. */
  return *(undefined4 *)(param_1 + 0x34);
}

