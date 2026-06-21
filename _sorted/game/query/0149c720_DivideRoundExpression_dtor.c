// addr: 0x0149c720
// name: DivideRoundExpression_dtor
// subsystem: common/game/query
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DivideRoundExpression_dtor(void * this) */

void __fastcall DivideRoundExpression_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for DivideRoundExpression; resets the vtable then delegates to
                       Expression_dtor. Evidence is the DivideRoundExpression::vftable assignment
                       and call to 0149ae80. */
  puStack_8 = &LAB_016a3b98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = DivideRoundExpression::vftable;
  local_4 = 0xffffffff;
  Expression_dtor(this);
  ExceptionList = local_c;
  return;
}

