// addr: 0x0149b090
// name: Expression_deletingDtor
// subsystem: common/game/query
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Expression_deletingDtor(void * this, char shouldFree_) */

void * __thiscall Expression_deletingDtor(void *this,char shouldFree_)

{
                    /* Scalar deleting destructor for Expression; calls Expression_dtor and frees
                       this when requested. Evidence is direct call to 0149ae80 followed by
                       conditional _free. */
  Expression_dtor(this);
  if ((shouldFree_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

