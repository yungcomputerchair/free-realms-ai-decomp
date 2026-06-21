// addr: 0x0149ced0
// name: ConcatExpression_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ConcatExpression_ctor(void * this) */

void * __fastcall ConcatExpression_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs ConcatExpression, invoking its base constructor as needed,
                       assigning ConcatExpression::vftable, and initializing default fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a3d48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Expression_ctor(this);
  *(undefined ***)this = ConcatExpression::vftable;
  ExceptionList = local_c;
  return this;
}

