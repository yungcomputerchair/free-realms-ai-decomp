// addr: 0x0149b110
// name: EqualToExpression_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EqualToExpression_ctor(void * this) */

void * __fastcall EqualToExpression_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs EqualToExpression, invoking its base constructor as needed,
                       assigning EqualToExpression::vftable, and initializing default fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a37f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Expression_ctor(this);
  *(undefined ***)this = EqualToExpression::vftable;
  ExceptionList = local_c;
  return this;
}

