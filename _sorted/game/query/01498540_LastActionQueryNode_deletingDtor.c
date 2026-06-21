// addr: 0x01498540
// name: LastActionQueryNode_deletingDtor
// subsystem: common/game/query
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LastActionQueryNode_deletingDtor(void * this, char shouldFree_) */

void * __thiscall LastActionQueryNode_deletingDtor(void *this,char shouldFree_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for LastActionQueryNode; runs QueryNode cleanup
                       and frees this when requested. Evidence is the LastActionQueryNode::vftable
                       assignment, QueryNode destructor call, and conditional _free. */
  puStack_8 = &LAB_016a30f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = LastActionQueryNode::vftable;
  local_4 = 0xffffffff;
  QueryNode_dtor(this);
  if ((shouldFree_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

