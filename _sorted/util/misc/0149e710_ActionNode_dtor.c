// addr: 0x0149e710
// name: ActionNode_dtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall ActionNode_dtor(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor/cleanup for ActionNode; installs vtable, releases two owned
                       child/reference objects, and runs MacroNode cleanup. */
  puStack_8 = &LAB_016a4208;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *param_1 = ActionNode::vftable;
  local_4 = 0;
  if ((undefined4 *)param_1[7] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[7])(1,uVar1);
    param_1[7] = 0;
  }
  if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[8])(1);
    param_1[8] = 0;
  }
  local_4 = 0xffffffff;
  FUN_0149a860();
  ExceptionList = local_c;
  return;
}

