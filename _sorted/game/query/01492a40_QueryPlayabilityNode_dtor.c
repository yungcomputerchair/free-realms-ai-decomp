// addr: 0x01492a40
// name: QueryPlayabilityNode_dtor
// subsystem: common/game/query
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void QueryPlayabilityNode_dtor(void * this) */

void __fastcall QueryPlayabilityNode_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for QueryPlayabilityNode; resets the vtable, deletes two owned
                       child pointers, then calls QueryNode_dtor. Evidence is the
                       QueryPlayabilityNode::vftable assignment and cleanup of slots 9 and 10 before
                       01493fd0. */
  puStack_8 = &LAB_016a2288;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)this = QueryPlayabilityNode::vftable;
  local_4 = 0;
  if (*(undefined4 **)((int)this + 0x24) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x24))(1,uVar1);
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  if (*(undefined4 **)((int)this + 0x28) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x28))(1);
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  local_4 = 0xffffffff;
  QueryNode_dtor(this);
  ExceptionList = local_c;
  return;
}

