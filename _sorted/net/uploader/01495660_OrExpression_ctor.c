// addr: 0x01495660
// name: OrExpression_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * OrExpression_ctor(void * this) */

void * __fastcall OrExpression_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs OrExpression, invoking its base constructor as needed, assigning
                       OrExpression::vftable, and initializing default fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a2698;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Expression_ctor(this);
  *(undefined ***)this = OrExpression::vftable;
  ExceptionList = local_c;
  return this;
}

