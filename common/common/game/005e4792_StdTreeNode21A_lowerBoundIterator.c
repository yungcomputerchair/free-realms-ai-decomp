// addr: 0x005e4792
// name: StdTreeNode21A_lowerBoundIterator
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 StdTreeNode21A_lowerBoundIterator(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 extraout_var;
  
                    /* Builds an iterator from the lower_bound node of an int-key tree variant. */
  uVar1 = FUN_005e150c(param_2);
  CheckedTreeIterator_ctor_nodeFlag21A(uVar1,extraout_var);
  return param_1;
}

