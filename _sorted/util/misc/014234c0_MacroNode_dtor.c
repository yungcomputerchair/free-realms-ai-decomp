// addr: 0x014234c0
// name: MacroNode_dtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall MacroNode_dtor(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor/cleanup for MacroNode: installs MacroNode vtable, clears a member
                       pointer, and runs base cleanup. */
  puStack_8 = &LAB_01694c78;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  *param_1 = MacroNode::vftable;
  param_1[4] = 0;
  local_4 = 0xffffffff;
  local_10 = param_1;
  FUN_0149a860(uVar1);
  ExceptionList = local_c;
  return;
}

