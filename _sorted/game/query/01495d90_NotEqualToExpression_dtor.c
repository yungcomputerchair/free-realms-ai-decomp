// addr: 0x01495d90
// name: NotEqualToExpression_dtor
// subsystem: common/game/query
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NotEqualToExpression_dtor(void * this) */

void __fastcall NotEqualToExpression_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for NotEqualToExpression; resets the vtable then delegates to
                       Expression_dtor. Evidence is the NotEqualToExpression::vftable assignment and
                       call to 0149ae80. */
  puStack_8 = &LAB_016a27d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = NotEqualToExpression::vftable;
  local_4 = 0xffffffff;
  Expression_dtor(this);
  ExceptionList = local_c;
  return;
}

