// addr: 0x014974d0
// name: MaxExpression_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MaxExpression_ctor(void * this) */

void * __fastcall MaxExpression_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs MaxExpression, invoking its base constructor as needed, assigning
                       MaxExpression::vftable, and initializing default fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a2d58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Expression_ctor(this);
  *(undefined ***)this = MaxExpression::vftable;
  ExceptionList = local_c;
  return this;
}

