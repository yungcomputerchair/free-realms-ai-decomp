// addr: 0x01497ee0
// name: LessEqualExpression_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LessEqualExpression_ctor(void * this) */

void * __fastcall LessEqualExpression_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs LessEqualExpression, invoking its base constructor as needed,
                       assigning LessEqualExpression::vftable, and initializing default fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a2f78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Expression_ctor(this);
  *(undefined ***)this = LessEqualExpression::vftable;
  ExceptionList = local_c;
  return this;
}

