// addr: 0x014540e0
// name: CWSumExpression_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWSumExpression_ctor(void * this) */

void * __fastcall CWSumExpression_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CWSumExpression, invoking its base constructor as needed,
                       assigning CWSumExpression::vftable, and initializing default fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169bbe8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  SumExpression_ctor(this);
  *(undefined ***)this = CWSumExpression::vftable;
  ExceptionList = local_c;
  return this;
}

