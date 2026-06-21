// addr: 0x01489270
// name: TargetQueryNode_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * TargetQueryNode_ctor(void * this) */

void * __fastcall TargetQueryNode_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs TargetQueryNode by invoking the query-node base initializer,
                       installing the vtable, and clearing query fields/flags. Vtable identifies the
                       class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a17b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01494290(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = TargetQueryNode::vftable;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  ExceptionList = local_c;
  return this;
}

