// addr: 0x0139d7b0
// name: Player_getDiscardPile
// subsystem: common/common/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall Player_getDiscardPile(int param_1)

{
                    /* Accessor returning the player's discard-pile pointer at offset 0x4c. */
  return *(undefined4 *)(param_1 + 0x4c);
}

