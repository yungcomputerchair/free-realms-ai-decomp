// addr: 0x0148e7e0
// name: SubtractExpression_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * SubtractExpression_ctor(void * this) */

void * __fastcall SubtractExpression_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs SubtractExpression, invoking its base constructor as needed,
                       assigning SubtractExpression::vftable, and initializing default fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a1cf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Expression_ctor(this);
  *(undefined ***)this = SubtractExpression::vftable;
  ExceptionList = local_c;
  return this;
}

