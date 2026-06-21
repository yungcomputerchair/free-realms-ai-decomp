// addr: 0x01489340
// name: TargetQueryNode_dtor
// subsystem: common/game/query
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TargetQueryNode_dtor(void * this) */

void __fastcall TargetQueryNode_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for TargetQueryNode; resets the vtable, deletes owned node
                       pointers in slots 8-10, then calls QueryNode_dtor. Evidence is the
                       TargetQueryNode::vftable assignment and child pointer deletion before
                       01493fd0. */
  puStack_8 = &LAB_016a17e8;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *(undefined ***)this = TargetQueryNode::vftable;
  local_4 = 0;
  if (*(undefined4 **)((int)this + 0x24) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x24))(1,uVar1);
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  if (*(undefined4 **)((int)this + 0x28) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x28))(1);
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  if (*(undefined4 **)((int)this + 0x20) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x20))(1);
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  local_4 = 0xffffffff;
  QueryNode_dtor(this);
  ExceptionList = local_c;
  return;
}

