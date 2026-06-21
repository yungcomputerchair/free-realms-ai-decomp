// addr: 0x0149e640
// name: ActionNode_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ActionNode_ctor(void * this) */

void * __fastcall ActionNode_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs ActionNode, invoking its base constructor as needed, assigning
                       ActionNode::vftable, and initializing default fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a41d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ExpressionTreeNode_ctor(this);
  *(undefined ***)this = ActionNode::vftable;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined1 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  ExceptionList = local_c;
  return this;
}

