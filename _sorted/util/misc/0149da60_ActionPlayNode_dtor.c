// addr: 0x0149da60
// name: ActionPlayNode_dtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall ActionPlayNode_dtor(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor/cleanup for ActionPlayNode; installs vtable, releases owned action
                       object, and runs MacroNode cleanup. */
  puStack_8 = &LAB_016a4058;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *param_1 = ActionPlayNode::vftable;
  local_4 = 0;
  if ((undefined4 *)param_1[5] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[5])(1,uVar1);
    param_1[5] = 0;
  }
  local_4 = 0xffffffff;
  FUN_0149a860();
  ExceptionList = local_c;
  return;
}

