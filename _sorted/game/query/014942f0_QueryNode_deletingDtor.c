// addr: 0x014942f0
// name: QueryNode_deletingDtor
// subsystem: common/game/query
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * QueryNode_deletingDtor(void * this, char shouldFree_) */

void * __thiscall QueryNode_deletingDtor(void *this,char shouldFree_)

{
                    /* Scalar deleting destructor for QueryNode; calls QueryNode_dtor and frees this
                       when requested. Evidence is direct call to 01493fd0 followed by conditional
                       _free. */
  QueryNode_dtor(this);
  if ((shouldFree_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

