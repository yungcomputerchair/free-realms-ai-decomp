// addr: 0x01497910
// name: LessThanExpression_dtor
// subsystem: common/game/query
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LessThanExpression_dtor(void * this) */

void __fastcall LessThanExpression_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for LessThanExpression; resets the vtable then delegates to
                       Expression_dtor. Evidence is the LessThanExpression::vftable assignment and
                       call to 0149ae80. */
  puStack_8 = &LAB_016a2e78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = LessThanExpression::vftable;
  local_4 = 0xffffffff;
  Expression_dtor(this);
  ExceptionList = local_c;
  return;
}

