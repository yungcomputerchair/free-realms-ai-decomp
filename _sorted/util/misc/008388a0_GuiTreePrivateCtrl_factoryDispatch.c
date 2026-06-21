// addr: 0x008388a0
// name: GuiTreePrivateCtrl_factoryDispatch
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 *
GuiTreePrivateCtrl_factoryDispatch(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  void *unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Factory/placement/destruction dispatch for GuiTreePrivateCtrl: constructs
                       default/configured instances, allocates new instances, destroys, or deletes
                       based on an operation code. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0156da28;
  local_c = ExceptionList;
  switch(param_1) {
  case 0:
    local_4 = 0;
    if (param_2 != (undefined4 *)0x0) {
      ExceptionList = &local_c;
      GuiTreePrivateCtrl_ctor(0,0,0,0);
    }
    ExceptionList = local_c;
    return param_2;
  case 1:
    local_4 = 1;
    if (param_2 != (undefined4 *)0x0) {
      ExceptionList = &local_c;
      GuiTreePrivateCtrl_ctorWithConfig(param_3);
    }
    ExceptionList = local_c;
    return param_2;
  case 2:
    ExceptionList = &local_c;
    iVar1 = FUN_00835a70(0x1e8);
    local_4 = 2;
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)GuiTreePrivateCtrl_ctor(0,0,0,0);
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 3:
    ExceptionList = &local_c;
    iVar1 = FUN_00835a70(0x1e8);
    local_4 = 3;
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)GuiTreePrivateCtrl_ctorWithConfig(param_3);
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 4:
    ExceptionList = &local_c;
    FUN_008357d0();
    ExceptionList = local_c;
    return param_2;
  case 5:
    if (param_2 != (undefined4 *)0x0) {
      ExceptionList = &local_c;
      (**(code **)*param_2)(1,DAT_01b839d8 ^ (uint)&stack0xfffffff0);
      ExceptionList = unaff_ESI;
      return param_2;
    }
  default:
    return param_2;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

