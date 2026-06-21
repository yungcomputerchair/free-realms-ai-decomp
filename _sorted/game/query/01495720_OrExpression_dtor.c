// addr: 0x01495720
// name: OrExpression_dtor
// subsystem: common/game/query
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void OrExpression_dtor(void * this) */

void __fastcall OrExpression_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for OrExpression; resets the vtable then delegates to
                       Expression_dtor. Evidence is the OrExpression::vftable assignment and call to
                       0149ae80. */
  puStack_8 = &LAB_016a26c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = OrExpression::vftable;
  local_4 = 0xffffffff;
  Expression_dtor(this);
  ExceptionList = local_c;
  return;
}

