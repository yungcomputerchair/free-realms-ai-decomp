// addr: 0x0064dcee
// name: GCheckBoxCtrl_ctorThunk
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * GCheckBoxCtrl_ctorThunk(int param_1,undefined4 *param_2,undefined4 param_3)

{
                    /* Constructs or allocates a GCheckBoxCtrl by initializing the GButtonCtrl base
                       and then replacing the vtables with GCheckBoxCtrl. */
  if (param_1 == 0) {
    if (param_2 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
LAB_0064dde3:
    FUN_00428f29(DAT_01bd5a34);
    *param_2 = GButtonCtrl::vftable;
    param_2[1] = GButtonCtrl::vftable;
    param_2[9] = GButtonCtrl::vftable;
    param_2[0x3f] = 0;
    FUN_0041493a();
    param_2[0x42] = GStringAccessWrapper::vftable;
    FUN_00643d5a(0,0,0,0,1,0);
    param_2[9] = GCheckBoxCtrl::vftable;
    param_2[1] = GCheckBoxCtrl::vftable;
    *param_2 = GCheckBoxCtrl::vftable;
  }
  else {
    if (param_1 == 1) {
      if (param_2 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
    }
    else {
      if (param_1 == 2) {
        param_2 = (undefined4 *)FUN_0060684b(0x148);
        if (param_2 == (undefined4 *)0x0) {
          return (undefined4 *)0x0;
        }
        goto LAB_0064dde3;
      }
      if (param_1 != 3) {
        if (param_1 == 4) {
          FUN_0064b68c();
          return param_2;
        }
        if (param_1 == 5) {
          if (param_2 != (undefined4 *)0x0) {
            (**(code **)*param_2)(1);
            return param_2;
          }
          return (undefined4 *)0x0;
        }
        return param_2;
      }
      param_2 = (undefined4 *)FUN_0060684b(0x148);
      if (param_2 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
    }
    FUN_00428f29(DAT_01bd40f0);
    *param_2 = GButtonCtrl::vftable;
    param_2[1] = GButtonCtrl::vftable;
    param_2[9] = GButtonCtrl::vftable;
    param_2[0x3f] = 0;
    FUN_0041493a();
    param_2[0x42] = GStringAccessWrapper::vftable;
    FUN_00643d5a(0,0,0,0,0,0);
    *param_2 = GCheckBoxCtrl::vftable;
    param_2[1] = GCheckBoxCtrl::vftable;
    param_2[9] = GCheckBoxCtrl::vftable;
    FUN_004d9a26(param_3,0);
  }
  return param_2;
}

