// addr: 0x0149ae80
// name: Expression_dtor
// subsystem: common/game/query
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Expression_dtor(void * this) */

void __fastcall Expression_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for Expression; resets the vtable, deletes owned expression
                       pointers in slots 7 and 8, then calls QueryNode_dtor. Evidence is the
                       Expression::vftable assignment and child deletes before 01493fd0. */
  puStack_8 = &LAB_016a3798;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)this = Expression::vftable;
  local_4 = 0;
  if (*(undefined4 **)((int)this + 0x1c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x1c))(1,uVar1);
    *(undefined4 *)((int)this + 0x1c) = 0;
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

