// addr: 0x004ed6b0
// name: StdMapInt_lowerBoundIterator_alt
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * StdMapInt_lowerBoundIterator_alt(void * outIter, int key) */

void * StdMapInt_lowerBoundIterator_alt(void *outIter,int key)

{
  undefined4 uVar1;
  undefined4 extraout_var;
  
                    /* Same lower_bound checked-iterator adapter as the nearby wrapper; kept
                       distinct because the owner/container specialization is not evident. */
  uVar1 = StdRbTree_lowerBoundInt(key);
  CheckedTreeIterator_ctor(uVar1,extraout_var);
  return outIter;
}

