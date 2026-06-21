// addr: 0x0148dd90
// name: SumExpression_dtor
// subsystem: common/game/query
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SumExpression_dtor(void * this) */

void __fastcall SumExpression_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for SumExpression; resets the vtable then delegates to
                       Expression_dtor. Evidence is the SumExpression::vftable assignment and call
                       to 0149ae80. */
  puStack_8 = &LAB_016a1bc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = SumExpression::vftable;
  local_4 = 0xffffffff;
  Expression_dtor(this);
  ExceptionList = local_c;
  return;
}

