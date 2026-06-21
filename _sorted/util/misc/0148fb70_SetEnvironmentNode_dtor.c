// addr: 0x0148fb70
// name: SetEnvironmentNode_dtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall SetEnvironmentNode_dtor(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor/cleanup for SetEnvironmentNode; installs vtable, frees owned
                       string storage, and runs MacroNode cleanup. */
  puStack_8 = &LAB_016a1e83;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *param_1 = SetEnvironmentNode::vftable;
  local_4 = 0;
  if (0xf < (uint)param_1[0xb]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[6]);
  }
  param_1[0xb] = 0xf;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  local_4 = 0xffffffff;
  FUN_0149a860(uVar1);
  ExceptionList = local_c;
  return;
}

