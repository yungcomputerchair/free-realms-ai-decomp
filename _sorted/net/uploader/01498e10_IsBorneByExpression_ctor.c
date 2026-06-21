// addr: 0x01498e10
// name: IsBorneByExpression_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * IsBorneByExpression_ctor(void * this) */

void * __fastcall IsBorneByExpression_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs IsBorneByExpression, invoking its base constructor as needed,
                       assigning IsBorneByExpression::vftable, and initializing default fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a3198;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Expression_ctor(this);
  *(undefined ***)this = IsBorneByExpression::vftable;
  ExceptionList = local_c;
  return this;
}

