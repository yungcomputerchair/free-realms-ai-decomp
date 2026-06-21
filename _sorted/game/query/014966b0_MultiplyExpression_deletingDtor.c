// addr: 0x014966b0
// name: MultiplyExpression_deletingDtor
// subsystem: common/game/query
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MultiplyExpression_deletingDtor(void * this, char shouldFree_) */

void * __thiscall MultiplyExpression_deletingDtor(void *this,char shouldFree_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for MultiplyExpression; runs Expression cleanup
                       and frees this when requested. Evidence is the MultiplyExpression::vftable
                       assignment, Expression destructor call, and conditional _free. */
  puStack_8 = &LAB_016a2a48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = MultiplyExpression::vftable;
  local_4 = 0xffffffff;
  Expression_dtor(this);
  if ((shouldFree_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

