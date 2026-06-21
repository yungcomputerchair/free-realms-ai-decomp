// addr: 0x0149bdc0
// name: EachExpression_deletingDtor
// subsystem: common/game/query
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EachExpression_deletingDtor(void * this, char shouldFree_) */

void * __thiscall EachExpression_deletingDtor(void *this,char shouldFree_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for EachExpression; runs Expression cleanup and
                       frees this when requested. Evidence is the EachExpression::vftable
                       assignment, Expression destructor call, and conditional _free. */
  puStack_8 = &LAB_016a3ac8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = EachExpression::vftable;
  local_4 = 0xffffffff;
  Expression_dtor(this);
  if ((shouldFree_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

