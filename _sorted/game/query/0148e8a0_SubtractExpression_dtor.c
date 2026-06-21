// addr: 0x0148e8a0
// name: SubtractExpression_dtor
// subsystem: common/game/query
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SubtractExpression_dtor(void * this) */

void __fastcall SubtractExpression_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for SubtractExpression; resets the vtable then delegates to
                       Expression_dtor. Evidence is the SubtractExpression::vftable assignment and
                       call to 0149ae80. */
  puStack_8 = &LAB_016a1d28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = SubtractExpression::vftable;
  local_4 = 0xffffffff;
  Expression_dtor(this);
  ExceptionList = local_c;
  return;
}

