// addr: 0x01497590
// name: MaxExpression_dtor
// subsystem: common/game/query
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MaxExpression_dtor(void * this) */

void __fastcall MaxExpression_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for MaxExpression; resets the vtable then delegates to
                       Expression_dtor. Evidence is the MaxExpression::vftable assignment and call
                       to 0149ae80. */
  puStack_8 = &LAB_016a2d88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = MaxExpression::vftable;
  local_4 = 0xffffffff;
  Expression_dtor(this);
  ExceptionList = local_c;
  return;
}

