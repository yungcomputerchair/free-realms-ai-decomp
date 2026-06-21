// addr: 0x0064d9a5
// name: GButtonCtrl_ctorThunk
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * GButtonCtrl_ctorThunk(int param_1,undefined4 *param_2,undefined4 param_3)

{
                    /* Constructs or allocates a GButtonCtrl, writing GButtonCtrl vtables,
                       initializing GStringAccessWrapper, and calling the shared button/bitmap base
                       initializer. */
  if (param_1 == 0) {
    if (param_2 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
LAB_0064da7c:
    FUN_00428f29(DAT_01bd40f0);
    *param_2 = GButtonCtrl::vftable;
    param_2[1] = GButtonCtrl::vftable;
    param_2[9] = GButtonCtrl::vftable;
    param_2[0x3f] = 0;
    FUN_0041493a();
    param_2[0x42] = GStringAccessWrapper::vftable;
    FUN_00643d5a(0,0,0,0,0,0);
  }
  else {
    if (param_1 == 1) {
      if (param_2 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
    }
    else {
      if (param_1 == 2) {
        param_2 = (undefined4 *)FUN_006063da(0x148);
        if (param_2 == (undefined4 *)0x0) {
          return (undefined4 *)0x0;
        }
        goto LAB_0064da7c;
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
      param_2 = (undefined4 *)FUN_006063da(0x148);
      if (param_2 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
    }
    FUN_00429076(0,0);
    *param_2 = GButtonCtrl::vftable;
    param_2[1] = GButtonCtrl::vftable;
    param_2[9] = GButtonCtrl::vftable;
    param_2[0x3f] = 0;
    FUN_0041493a();
    param_2[0x42] = GStringAccessWrapper::vftable;
    FUN_00643d5a(0,0,0,0,0,0);
    FUN_004d9a26(param_3,0);
  }
  return param_2;
}

