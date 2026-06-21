// addr: 0x01498290
// name: LastActionQueryNode_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LastActionQueryNode_ctor(void * this) */

void * __fastcall LastActionQueryNode_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs LastActionQueryNode via the common query-node initializer and
                       clears two fields. Vtable identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a3068;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01494290(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = LastActionQueryNode::vftable;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  ExceptionList = local_c;
  return this;
}

