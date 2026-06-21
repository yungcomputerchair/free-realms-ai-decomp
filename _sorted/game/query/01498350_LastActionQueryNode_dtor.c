// addr: 0x01498350
// name: LastActionQueryNode_dtor
// subsystem: common/game/query
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LastActionQueryNode_dtor(void * this) */

void __fastcall LastActionQueryNode_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for LastActionQueryNode; resets the vtable then delegates to
                       QueryNode_dtor. Evidence is the LastActionQueryNode::vftable assignment and
                       call to 01493fd0. */
  puStack_8 = &LAB_016a3098;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = LastActionQueryNode::vftable;
  local_4 = 0xffffffff;
  QueryNode_dtor(this);
  ExceptionList = local_c;
  return;
}

