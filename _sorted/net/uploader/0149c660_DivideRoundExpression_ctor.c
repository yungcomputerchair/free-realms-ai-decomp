// addr: 0x0149c660
// name: DivideRoundExpression_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * DivideRoundExpression_ctor(void * this) */

void * __fastcall DivideRoundExpression_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs DivideRoundExpression, invoking its base constructor as needed,
                       assigning DivideRoundExpression::vftable, and initializing default fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a3b68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Expression_ctor(this);
  *(undefined ***)this = DivideRoundExpression::vftable;
  *(undefined1 *)((int)this + 0x24) = 1;
  ExceptionList = local_c;
  return this;
}

