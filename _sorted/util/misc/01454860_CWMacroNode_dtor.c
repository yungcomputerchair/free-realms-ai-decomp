// addr: 0x01454860
// name: CWMacroNode_dtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall CWMacroNode_dtor(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor/cleanup for CWMacroNode; installs vtable and runs MacroNode
                       cleanup. */
  puStack_8 = &LAB_0169bd98;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  *param_1 = CWMacroNode::vftable;
  local_4 = 0xffffffff;
  local_10 = param_1;
  MacroNode_dtor(uVar1);
  ExceptionList = local_c;
  return;
}

