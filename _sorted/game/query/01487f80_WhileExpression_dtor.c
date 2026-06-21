// addr: 0x01487f80
// name: WhileExpression_dtor
// subsystem: common/game/query
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void WhileExpression_dtor(void * this) */

void __fastcall WhileExpression_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for WhileExpression; resets the vtable then delegates to
                       Expression_dtor. Evidence is the WhileExpression::vftable assignment and call
                       to 0149ae80. */
  puStack_8 = &LAB_016a15e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = WhileExpression::vftable;
  local_4 = 0xffffffff;
  Expression_dtor(this);
  ExceptionList = local_c;
  return;
}

