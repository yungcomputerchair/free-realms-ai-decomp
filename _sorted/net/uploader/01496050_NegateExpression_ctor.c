// addr: 0x01496050
// name: NegateExpression_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * NegateExpression_ctor(void * this) */

void * __fastcall NegateExpression_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs NegateExpression, invoking its base constructor as needed,
                       assigning NegateExpression::vftable, and initializing default fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a2898;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Expression_ctor(this);
  *(undefined ***)this = NegateExpression::vftable;
  ExceptionList = local_c;
  return this;
}

