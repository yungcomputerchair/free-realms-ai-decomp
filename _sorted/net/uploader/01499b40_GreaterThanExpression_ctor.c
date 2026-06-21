// addr: 0x01499b40
// name: GreaterThanExpression_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GreaterThanExpression_ctor(void * this) */

void * __fastcall GreaterThanExpression_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs GreaterThanExpression, invoking its base constructor as needed,
                       assigning GreaterThanExpression::vftable, and initializing default fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a3438;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Expression_ctor(this);
  *(undefined ***)this = GreaterThanExpression::vftable;
  ExceptionList = local_c;
  return this;
}

