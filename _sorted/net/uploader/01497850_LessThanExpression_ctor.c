// addr: 0x01497850
// name: LessThanExpression_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LessThanExpression_ctor(void * this) */

void * __fastcall LessThanExpression_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs LessThanExpression, invoking its base constructor as needed,
                       assigning LessThanExpression::vftable, and initializing default fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a2e48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Expression_ctor(this);
  *(undefined ***)this = LessThanExpression::vftable;
  ExceptionList = local_c;
  return this;
}

