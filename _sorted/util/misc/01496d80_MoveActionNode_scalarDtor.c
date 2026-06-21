// addr: 0x01496d80
// name: MoveActionNode_scalarDtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall MoveActionNode_scalarDtor(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for MoveActionNode; installs vtable, runs
                       MacroNode cleanup, and frees this when requested. */
  puStack_8 = &LAB_016a2b48;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *param_1 = MoveActionNode::vftable;
  local_4 = 0xffffffff;
  FUN_0149a860(uVar1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return param_1;
}

