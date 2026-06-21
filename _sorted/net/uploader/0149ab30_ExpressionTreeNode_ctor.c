// addr: 0x0149ab30
// name: ExpressionTreeNode_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ExpressionTreeNode_ctor(void * this) */

void * __fastcall ExpressionTreeNode_ctor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs ExpressionTreeNode, invoking its base constructor as needed,
                       assigning ExpressionTreeNode::vftable, and initializing default fields. */
  puStack_8 = &LAB_016a36db;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)this = PersistentBase::vftable;
  *(undefined ***)this = PersistentComponent::vftable;
  local_4 = 1;
  *(undefined ***)this = ExpressionTreeNode::vftable;
  FUN_0149aa20(uVar1);
  ExceptionList = local_c;
  return this;
}

