// addr: 0x014547a0
// name: CWMacroNode_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWMacroNode_ctor(void * this) */

void * __fastcall CWMacroNode_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CWMacroNode, invoking its base constructor as needed, assigning
                       CWMacroNode::vftable, and initializing default fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169bd68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  MacroNode_ctor(this);
  *(undefined ***)this = CWMacroNode::vftable;
  ExceptionList = local_c;
  return this;
}

