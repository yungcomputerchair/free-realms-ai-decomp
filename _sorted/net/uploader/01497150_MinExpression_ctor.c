// addr: 0x01497150
// name: MinExpression_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MinExpression_ctor(void * this) */

void * __fastcall MinExpression_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs MinExpression, invoking its base constructor as needed, assigning
                       MinExpression::vftable, and initializing default fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a2c68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Expression_ctor(this);
  *(undefined ***)this = MinExpression::vftable;
  ExceptionList = local_c;
  return this;
}

