// addr: 0x01498ed0
// name: IsBorneByExpression_dtor
// subsystem: common/game/query
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void IsBorneByExpression_dtor(void * this) */

void __fastcall IsBorneByExpression_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for IsBorneByExpression; resets the vtable then delegates to
                       Expression_dtor. Evidence is the IsBorneByExpression::vftable assignment and
                       call to 0149ae80. */
  puStack_8 = &LAB_016a31c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = IsBorneByExpression::vftable;
  local_4 = 0xffffffff;
  Expression_dtor(this);
  ExceptionList = local_c;
  return;
}

