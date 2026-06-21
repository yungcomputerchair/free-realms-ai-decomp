// addr: 0x0149cbf0
// name: DivideExpression_dtor
// subsystem: common/game/query
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DivideExpression_dtor(void * this) */

void __fastcall DivideExpression_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for DivideExpression; resets the vtable then delegates to
                       Expression_dtor. Evidence is the DivideExpression::vftable assignment and
                       call to 0149ae80. */
  puStack_8 = &LAB_016a3c88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = DivideExpression::vftable;
  local_4 = 0xffffffff;
  Expression_dtor(this);
  ExceptionList = local_c;
  return;
}

