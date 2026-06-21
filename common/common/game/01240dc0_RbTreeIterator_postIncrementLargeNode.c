// addr: 0x01240dc0
// name: RbTreeIterator_postIncrementLargeNode
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __fastcall RbTreeIterator_postIncrementLargeNode(void *param_1)

{
                    /* Post-increment helper for the large-node RB-tree iterator: advances the
                       iterator and returns the saved value argument. */
  RbTreeIterator_incrementLargeNode(param_1);
  return param_1;
}

