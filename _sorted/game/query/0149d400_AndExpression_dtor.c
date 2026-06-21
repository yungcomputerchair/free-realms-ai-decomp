// addr: 0x0149d400
// name: AndExpression_dtor
// subsystem: common/game/query
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AndExpression_dtor(void * this) */

void __fastcall AndExpression_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for AndExpression; resets the vtable then delegates to
                       Expression_dtor. Evidence is the AndExpression::vftable assignment and call
                       to 0149ae80. */
  puStack_8 = &LAB_016a3ea8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = AndExpression::vftable;
  local_4 = 0xffffffff;
  Expression_dtor(this);
  ExceptionList = local_c;
  return;
}

