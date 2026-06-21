// addr: 0x01453880
// name: CWTargetQueryNode_dtor
// subsystem: common/game/query
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWTargetQueryNode_dtor(void * this) */

void __fastcall CWTargetQueryNode_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for CWTargetQueryNode; resets the vtable then delegates cleanup to
                       TargetQueryNode_dtor. Evidence is the CWTargetQueryNode::vftable assignment
                       and call to the TargetQueryNode destructor at 01489340. */
  puStack_8 = &LAB_0169bb08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CWTargetQueryNode::vftable;
  local_4 = 0xffffffff;
  TargetQueryNode_dtor(this);
  ExceptionList = local_c;
  return;
}

