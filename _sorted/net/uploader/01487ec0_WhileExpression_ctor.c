// addr: 0x01487ec0
// name: WhileExpression_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * WhileExpression_ctor(void * this) */

void * __fastcall WhileExpression_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs WhileExpression, invoking its base constructor as needed,
                       assigning WhileExpression::vftable, and initializing default fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a15b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Expression_ctor(this);
  *(undefined ***)this = WhileExpression::vftable;
  ExceptionList = local_c;
  return this;
}

