// addr: 0x01454300
// name: CWSumExpression_deletingDtor
// subsystem: common/game/query
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWSumExpression_deletingDtor(void * this, char shouldFree_) */

void * __thiscall CWSumExpression_deletingDtor(void *this,char shouldFree_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for CWSumExpression; runs SumExpression cleanup
                       and frees this when requested. Evidence is the CWSumExpression::vftable
                       assignment, base destructor call, and conditional _free. */
  puStack_8 = &LAB_0169bc78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CWSumExpression::vftable;
  local_4 = 0xffffffff;
  SumExpression_dtor(this);
  if ((shouldFree_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

