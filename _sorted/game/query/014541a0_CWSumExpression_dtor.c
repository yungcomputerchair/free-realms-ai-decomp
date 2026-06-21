// addr: 0x014541a0
// name: CWSumExpression_dtor
// subsystem: common/game/query
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWSumExpression_dtor(void * this) */

void __fastcall CWSumExpression_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for CWSumExpression; resets the vtable then delegates to
                       SumExpression_dtor. Evidence is the CWSumExpression::vftable assignment and
                       call to 0148dd90. */
  puStack_8 = &LAB_0169bc18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CWSumExpression::vftable;
  local_4 = 0xffffffff;
  SumExpression_dtor(this);
  ExceptionList = local_c;
  return;
}

