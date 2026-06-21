// addr: 0x01455980
// name: CWActionPlayNode_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWActionPlayNode_ctor(void * this) */

void * __fastcall CWActionPlayNode_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CWActionPlayNode, invoking its base constructor as needed,
                       assigning CWActionPlayNode::vftable, and initializing default fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169c048;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ActionPlayNode_ctor(this);
  *(undefined ***)this = CWActionPlayNode::vftable;
  ExceptionList = local_c;
  return this;
}

