// addr: 0x01455790
// name: CWEachExpression_dtor
// subsystem: common/game/query
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWEachExpression_dtor(void * this) */

void __fastcall CWEachExpression_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for CWEachExpression; resets the vtable then delegates to
                       EachExpression_dtor. Evidence is the CWEachExpression::vftable assignment and
                       call to 0149bb20. */
  puStack_8 = &LAB_0169bfb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CWEachExpression::vftable;
  local_4 = 0xffffffff;
  EachExpression_dtor(this);
  ExceptionList = local_c;
  return;
}

