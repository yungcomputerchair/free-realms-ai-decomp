// addr: 0x01497210
// name: MinExpression_dtor
// subsystem: common/game/query
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MinExpression_dtor(void * this) */

void __fastcall MinExpression_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for MinExpression; resets the vtable then delegates to
                       Expression_dtor. Evidence is the MinExpression::vftable assignment and call
                       to 0149ae80. */
  puStack_8 = &LAB_016a2c98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = MinExpression::vftable;
  local_4 = 0xffffffff;
  Expression_dtor(this);
  ExceptionList = local_c;
  return;
}

