// addr: 0x014993e0
// name: IfThenExpression_dtor
// subsystem: common/game/query
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void IfThenExpression_dtor(void * this) */

void __fastcall IfThenExpression_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for IfThenExpression; resets the vtable, deletes its extra child
                       expression in slot 9, then calls Expression_dtor. Evidence is the
                       IfThenExpression::vftable assignment and child delete before 0149ae80. */
  puStack_8 = &LAB_016a32e8;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)this = IfThenExpression::vftable;
  local_4 = 0;
  if (*(undefined4 **)((int)this + 0x24) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x24))(1,uVar1);
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  local_4 = 0xffffffff;
  Expression_dtor(this);
  ExceptionList = local_c;
  return;
}

