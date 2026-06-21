// addr: 0x01499c00
// name: GreaterThanExpression_dtor
// subsystem: common/game/query
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GreaterThanExpression_dtor(void * this) */

void __fastcall GreaterThanExpression_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for GreaterThanExpression; resets the vtable then delegates to
                       Expression_dtor. Evidence is the GreaterThanExpression::vftable assignment
                       and call to 0149ae80. */
  puStack_8 = &LAB_016a3468;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = GreaterThanExpression::vftable;
  local_4 = 0xffffffff;
  Expression_dtor(this);
  ExceptionList = local_c;
  return;
}

