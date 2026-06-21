// addr: 0x01492d80
// name: QueryPlayabilityNode_deletingDtor
// subsystem: common/game/query
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * QueryPlayabilityNode_deletingDtor(void * this, char shouldFree_) */

void * __thiscall QueryPlayabilityNode_deletingDtor(void *this,char shouldFree_)

{
                    /* Scalar deleting destructor for QueryPlayabilityNode; calls
                       QueryPlayabilityNode_dtor and frees this when requested. Evidence is direct
                       call to 01492a40 followed by conditional _free. */
  QueryPlayabilityNode_dtor(this);
  if ((shouldFree_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

