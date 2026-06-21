// addr: 0x00856c50
// name: FUN_00856c50
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * FUN_00856c50(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  void *unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01572308;
  local_c = ExceptionList;
  switch(param_1) {
  case 0:
    local_4 = 0;
    if (param_2 != (undefined4 *)0x0) {
      ExceptionList = &local_c;
      GuiCheckBoxCtrl_ctor(0);
    }
    ExceptionList = local_c;
    return param_2;
  case 1:
    local_4 = 1;
    if (param_2 != (undefined4 *)0x0) {
      ExceptionList = &local_c;
      GuiCheckBoxCtrl_ctorFromSource(param_3);
    }
    ExceptionList = local_c;
    return param_2;
  case 2:
    ExceptionList = &local_c;
    iVar1 = FUN_008561a0(0x188);
    local_4 = 2;
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)GuiCheckBoxCtrl_ctor(0);
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 3:
    ExceptionList = &local_c;
    iVar1 = FUN_008561a0(0x188);
    local_4 = 3;
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)GuiCheckBoxCtrl_ctorFromSource(param_3);
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 4:
    ExceptionList = &local_c;
    FUN_00856380();
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

