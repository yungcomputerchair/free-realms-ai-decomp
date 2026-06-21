// addr: 0x0149b1d0
// name: EqualToExpression_dtor
// subsystem: common/game/query
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EqualToExpression_dtor(void * this) */

void __fastcall EqualToExpression_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for EqualToExpression; resets the vtable then delegates to
                       Expression_dtor. Evidence is the EqualToExpression::vftable assignment and
                       call to 0149ae80. */
  puStack_8 = &LAB_016a3828;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = EqualToExpression::vftable;
  local_4 = 0xffffffff;
  Expression_dtor(this);
  ExceptionList = local_c;
  return;
}

