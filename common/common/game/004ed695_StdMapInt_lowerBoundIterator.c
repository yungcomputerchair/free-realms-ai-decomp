// addr: 0x004ed695
// name: StdMapInt_lowerBoundIterator
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * StdMapInt_lowerBoundIterator(void * outIter, int key) */

void * StdMapInt_lowerBoundIterator(void *outIter,int key)

{
  undefined4 uVar1;
  undefined4 extraout_var;
  
                    /* Builds a checked iterator from the red-black tree lower_bound result for an
                       integer key. */
  uVar1 = StdRbTree_lowerBoundInt(key);
  CheckedTreeIterator_ctor(uVar1,extraout_var);
  return outIter;
}

