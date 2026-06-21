// addr: 0x01340370
// name: PlayElement_getId
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall PlayElement_getId(int param_1)

{
                    /* Returns the id at offset 0x34 for play elements such as play areas and node
                       targets. CWGame_getPlayArea and CWGame_getNodeTarget log this return value as
                       the found play area/node target id. */
  return *(undefined4 *)(param_1 + 0x34);
}

