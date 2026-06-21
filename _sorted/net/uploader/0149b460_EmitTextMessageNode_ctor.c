// addr: 0x0149b460
// name: EmitTextMessageNode_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EmitTextMessageNode_ctor(void * this) */

void * __fastcall EmitTextMessageNode_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs EmitTextMessageNode, invoking its base constructor as needed,
                       assigning EmitTextMessageNode::vftable, and initializing default fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a38e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ExpressionTreeNode_ctor(this);
  *(undefined ***)this = EmitTextMessageNode::vftable;
  *(undefined4 *)((int)this + 0x14) = 1;
  *(undefined4 *)((int)this + 0x10) = 0;
  ExceptionList = local_c;
  return this;
}

