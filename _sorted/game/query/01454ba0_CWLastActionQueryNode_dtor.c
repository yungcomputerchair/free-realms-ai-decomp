// addr: 0x01454ba0
// name: CWLastActionQueryNode_dtor
// subsystem: common/game/query
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWLastActionQueryNode_dtor(void * this) */

void __fastcall CWLastActionQueryNode_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for CWLastActionQueryNode; resets the vtable then delegates to
                       LastActionQueryNode_dtor. Evidence is the CWLastActionQueryNode::vftable
                       assignment and call to 01498350. */
  puStack_8 = &LAB_0169be58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CWLastActionQueryNode::vftable;
  local_4 = 0xffffffff;
  LastActionQueryNode_dtor(this);
  ExceptionList = local_c;
  return;
}

