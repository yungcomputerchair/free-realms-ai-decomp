// addr: 0x01344ef0
// name: PlayElement_getGame
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall PlayElement_getGame(int param_1)

{
                    /* Returns the pointer at offset 4 from a play element. It is used by
                       card/play-area logic before resolving play areas and node targets through the
                       containing game. */
  return *(undefined4 *)(param_1 + 4);
}

