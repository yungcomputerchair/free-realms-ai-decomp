// addr: 0x01454ae0
// name: CWLastActionQueryNode_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWLastActionQueryNode_ctor(void * this) */

void * __fastcall CWLastActionQueryNode_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CWLastActionQueryNode, invoking its base constructor as needed,
                       assigning CWLastActionQueryNode::vftable, and initializing default fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169be28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LastActionQueryNode_ctor(this);
  *(undefined ***)this = CWLastActionQueryNode::vftable;
  ExceptionList = local_c;
  return this;
}

