// addr: 0x01496de0
// name: ModulusExpression_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ModulusExpression_ctor(void * this) */

void * __fastcall ModulusExpression_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs ModulusExpression, invoking its base constructor as needed,
                       assigning ModulusExpression::vftable, and initializing default fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a2b78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Expression_ctor(this);
  *(undefined ***)this = ModulusExpression::vftable;
  ExceptionList = local_c;
  return this;
}

