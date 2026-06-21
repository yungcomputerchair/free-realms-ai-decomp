// addr: 0x01455920
// name: CWEachExpression_deletingDtor
// subsystem: common/game/query
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWEachExpression_deletingDtor(void * this, char shouldFree_) */

void * __thiscall CWEachExpression_deletingDtor(void *this,char shouldFree_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for CWEachExpression; runs EachExpression cleanup
                       and frees this when requested. Evidence is the CWEachExpression::vftable
                       assignment, base destructor call, and conditional _free. */
  puStack_8 = &LAB_0169c018;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CWEachExpression::vftable;
  local_4 = 0xffffffff;
  EachExpression_dtor(this);
  if ((shouldFree_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

