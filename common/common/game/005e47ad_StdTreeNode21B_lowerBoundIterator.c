// addr: 0x005e47ad
// name: StdTreeNode21B_lowerBoundIterator
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 StdTreeNode21B_lowerBoundIterator(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 extraout_var;
  
                    /* Builds an iterator from the lower_bound node of another int-key tree variant.
                        */
  uVar1 = FUN_005e16a5(param_2);
  CheckedTreeIterator_ctor_nodeFlag21B(uVar1,extraout_var);
  return param_1;
}

