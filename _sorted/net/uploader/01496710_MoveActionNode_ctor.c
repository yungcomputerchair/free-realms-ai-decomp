// addr: 0x01496710
// name: MoveActionNode_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MoveActionNode_ctor(void * this) */

void * __fastcall MoveActionNode_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs MoveActionNode, invoking its base constructor as needed, assigning
                       MoveActionNode::vftable, and initializing default fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a2a78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ExpressionTreeNode_ctor(this);
  *(undefined ***)this = MoveActionNode::vftable;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x18) = 2;
  *(undefined4 *)((int)this + 0x20) = 0;
  ExceptionList = local_c;
  return this;
}

