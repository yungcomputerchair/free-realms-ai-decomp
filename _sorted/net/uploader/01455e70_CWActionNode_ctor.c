// addr: 0x01455e70
// name: CWActionNode_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWActionNode_ctor(void * this) */

void * __fastcall CWActionNode_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CWActionNode, invoking its base constructor as needed, assigning
                       CWActionNode::vftable, and initializing default fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169c138;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ActionNode_ctor(this);
  *(undefined ***)this = CWActionNode::vftable;
  ExceptionList = local_c;
  return this;
}

