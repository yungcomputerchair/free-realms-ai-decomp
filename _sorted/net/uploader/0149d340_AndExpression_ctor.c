// addr: 0x0149d340
// name: AndExpression_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * AndExpression_ctor(void * this) */

void * __fastcall AndExpression_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs AndExpression, invoking its base constructor as needed, assigning
                       AndExpression::vftable, and initializing default fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a3e78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Expression_ctor(this);
  *(undefined ***)this = AndExpression::vftable;
  ExceptionList = local_c;
  return this;
}

