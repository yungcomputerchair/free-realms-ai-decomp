// addr: 0x01454d00
// name: CWLastActionQueryNode_deletingDtor
// subsystem: common/game/query
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWLastActionQueryNode_deletingDtor(void * this, char shouldFree_) */

void * __thiscall CWLastActionQueryNode_deletingDtor(void *this,char shouldFree_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for CWLastActionQueryNode; runs
                       LastActionQueryNode cleanup and frees this when requested. Evidence is the
                       CWLastActionQueryNode::vftable assignment, base destructor call, and
                       conditional _free. */
  puStack_8 = &LAB_0169beb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CWLastActionQueryNode::vftable;
  local_4 = 0xffffffff;
  LastActionQueryNode_dtor(this);
  if ((shouldFree_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

