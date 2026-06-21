// addr: 0x014539f0
// name: CWTargetQueryNode_deletingDtor
// subsystem: common/game/query
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWTargetQueryNode_deletingDtor(void * this, char shouldFree_) */

void * __thiscall CWTargetQueryNode_deletingDtor(void *this,char shouldFree_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for CWTargetQueryNode; runs the destructor path
                       then frees this when the low bit of shouldFree is set. Evidence is the
                       CWTargetQueryNode::vftable assignment, TargetQueryNode destructor call, and
                       conditional _free. */
  puStack_8 = &LAB_0169bb68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CWTargetQueryNode::vftable;
  local_4 = 0xffffffff;
  TargetQueryNode_dtor(this);
  if ((shouldFree_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

