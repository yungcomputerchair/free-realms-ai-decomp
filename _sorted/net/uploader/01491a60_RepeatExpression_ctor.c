// addr: 0x01491a60
// name: RepeatExpression_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * RepeatExpression_ctor(void * this) */

void * __fastcall RepeatExpression_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs RepeatExpression, invoking its base constructor as needed,
                       assigning RepeatExpression::vftable, and initializing default fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a2068;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Expression_ctor(this);
  *(undefined ***)this = RepeatExpression::vftable;
  ExceptionList = local_c;
  return this;
}

