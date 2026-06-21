// addr: 0x01321ea0
// name: PackedActionId_getHighBits
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int PackedActionId_getHighBits(int param_1)

{
                    /* Returns the high portion of a packed action/card identifier by shifting the
                       integer right 12 bits. Used by ActionDB, Game deserialize, and action
                       install/remove paths. */
  return param_1 >> 0xc;
}

