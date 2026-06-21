// addr: 0x014967e0
// name: MoveActionNode_dtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall MoveActionNode_dtor(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor/cleanup for MoveActionNode; installs vtable and runs MacroNode
                       cleanup. */
  puStack_8 = &LAB_016a2aa8;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  *param_1 = MoveActionNode::vftable;
  local_4 = 0xffffffff;
  local_10 = param_1;
  FUN_0149a860(uVar1);
  ExceptionList = local_c;
  return;
}

