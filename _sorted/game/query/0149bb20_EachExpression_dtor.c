// addr: 0x0149bb20
// name: EachExpression_dtor
// subsystem: common/game/query
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EachExpression_dtor(void * this) */

void __fastcall EachExpression_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for EachExpression; resets the vtable then delegates to
                       Expression_dtor. Evidence is the EachExpression::vftable assignment and call
                       to 0149ae80. */
  puStack_8 = &LAB_016a3a38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = EachExpression::vftable;
  local_4 = 0xffffffff;
  Expression_dtor(this);
  ExceptionList = local_c;
  return;
}

