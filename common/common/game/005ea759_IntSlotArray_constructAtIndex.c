// addr: 0x005ea759
// name: IntSlotArray_constructAtIndex
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int IntSlotArray_constructAtIndex(int param_1,int param_2,undefined4 param_3)

{
                    /* Constructs or assigns a 4-byte element through a helper, then returns the
                       address of the indexed slot. */
  FUN_005e6832(param_1,param_2,param_3);
  return param_1 + param_2 * 4;
}

