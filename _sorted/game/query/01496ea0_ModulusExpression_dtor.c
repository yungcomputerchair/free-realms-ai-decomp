// addr: 0x01496ea0
// name: ModulusExpression_dtor
// subsystem: common/game/query
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ModulusExpression_dtor(void * this) */

void __fastcall ModulusExpression_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for ModulusExpression; resets the vtable then delegates to
                       Expression_dtor. Evidence is the ModulusExpression::vftable assignment and
                       call to 0149ae80. */
  puStack_8 = &LAB_016a2ba8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = ModulusExpression::vftable;
  local_4 = 0xffffffff;
  Expression_dtor(this);
  ExceptionList = local_c;
  return;
}

