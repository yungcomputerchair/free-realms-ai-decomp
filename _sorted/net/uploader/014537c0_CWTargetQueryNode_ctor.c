// addr: 0x014537c0
// name: CWTargetQueryNode_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWTargetQueryNode_ctor(void * this) */

void * __fastcall CWTargetQueryNode_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CWTargetQueryNode, invoking its base constructor as needed,
                       assigning CWTargetQueryNode::vftable, and initializing default fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169bad8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  TargetQueryNode_ctor(this);
  *(undefined ***)this = CWTargetQueryNode::vftable;
  ExceptionList = local_c;
  return this;
}

