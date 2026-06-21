// addr: 0x01423400
// name: MacroNode_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MacroNode_ctor(void * this) */

void * __fastcall MacroNode_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs MacroNode via a query/expression base initializer, installs the
                       vtable, and clears one field. Vtable identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01694c48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ExpressionTreeNode_ctor(this);
  *(undefined ***)this = MacroNode::vftable;
  *(undefined4 *)((int)this + 0x10) = 0;
  ExceptionList = local_c;
  return this;
}

