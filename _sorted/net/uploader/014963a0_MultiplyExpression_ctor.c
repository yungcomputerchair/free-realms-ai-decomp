// addr: 0x014963a0
// name: MultiplyExpression_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MultiplyExpression_ctor(void * this) */

void * __fastcall MultiplyExpression_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs MultiplyExpression, invoking its base constructor as needed,
                       assigning MultiplyExpression::vftable, and initializing default fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a2988;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Expression_ctor(this);
  *(undefined ***)this = MultiplyExpression::vftable;
  ExceptionList = local_c;
  return this;
}

