// addr: 0x01489790
// name: TargetQueryNode_deletingDtor
// subsystem: common/game/query
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * TargetQueryNode_deletingDtor(void * this, char shouldFree_) */

void * __thiscall TargetQueryNode_deletingDtor(void *this,char shouldFree_)

{
                    /* Scalar deleting destructor for TargetQueryNode; calls TargetQueryNode_dtor
                       and frees this when requested. Evidence is direct call to 01489340 followed
                       by conditional _free. */
  TargetQueryNode_dtor(this);
  if ((shouldFree_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

