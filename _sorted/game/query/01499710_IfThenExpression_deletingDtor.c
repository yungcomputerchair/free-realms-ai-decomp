// addr: 0x01499710
// name: IfThenExpression_deletingDtor
// subsystem: common/game/query
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * IfThenExpression_deletingDtor(void * this, char shouldFree_) */

void * __thiscall IfThenExpression_deletingDtor(void *this,char shouldFree_)

{
                    /* Scalar deleting destructor for IfThenExpression; calls IfThenExpression_dtor
                       and frees this when requested. Evidence is direct call to 014993e0 followed
                       by conditional _free. */
  IfThenExpression_dtor(this);
  if ((shouldFree_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

