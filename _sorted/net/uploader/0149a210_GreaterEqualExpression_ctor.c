// addr: 0x0149a210
// name: GreaterEqualExpression_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GreaterEqualExpression_ctor(void * this) */

void * __fastcall GreaterEqualExpression_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs GreaterEqualExpression, invoking its base constructor as needed,
                       assigning GreaterEqualExpression::vftable, and initializing default fields.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a3568;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Expression_ctor(this);
  *(undefined ***)this = GreaterEqualExpression::vftable;
  ExceptionList = local_c;
  return this;
}

