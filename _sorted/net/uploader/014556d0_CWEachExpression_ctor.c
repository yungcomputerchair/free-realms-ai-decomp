// addr: 0x014556d0
// name: CWEachExpression_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWEachExpression_ctor(void * this) */

void * __fastcall CWEachExpression_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CWEachExpression, invoking its base constructor as needed,
                       assigning CWEachExpression::vftable, and initializing default fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169bf88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  EachExpression_ctor(this);
  *(undefined ***)this = CWEachExpression::vftable;
  ExceptionList = local_c;
  return this;
}

