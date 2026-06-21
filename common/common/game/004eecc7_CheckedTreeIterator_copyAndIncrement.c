// addr: 0x004eecc7
// name: CheckedTreeIterator_copyAndIncrement
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
CheckedTreeIterator_copyAndIncrement(undefined4 *param_1,undefined4 *param_2)

{
                    /* Implements post-increment for a checked tree iterator: copies owner/current
                       node to the output iterator, then increments the original iterator. */
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_004d21f9();
  return param_2;
}

