// addr: 0x012410a0
// name: RbTreeIterator_postIncrementLargeNodeAlt
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __fastcall RbTreeIterator_postIncrementLargeNodeAlt(void *param_1)

{
                    /* Alternate post-increment helper for the same large-node RB-tree iterator
                       instantiation. */
  RbTreeIterator_incrementLargeNode(param_1);
  return param_1;
}

