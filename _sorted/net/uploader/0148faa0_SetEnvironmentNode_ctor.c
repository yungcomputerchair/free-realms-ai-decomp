// addr: 0x0148faa0
// name: SetEnvironmentNode_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * SetEnvironmentNode_ctor(void * this) */

void * __fastcall SetEnvironmentNode_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs SetEnvironmentNode, invoking its base constructor as needed,
                       assigning SetEnvironmentNode::vftable, and initializing default fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a1e53;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ExpressionTreeNode_ctor(this);
  *(undefined ***)this = SetEnvironmentNode::vftable;
  *(undefined4 *)((int)this + 0x2c) = 0xf;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined1 *)((int)this + 0x34) = 0;
  ExceptionList = local_c;
  return this;
}

