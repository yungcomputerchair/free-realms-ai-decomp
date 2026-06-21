// addr: 0x006417e5
// name: GTreeCtrl_ctorThunk
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * GTreeCtrl_ctorThunk(int param_1,undefined4 *param_2,undefined4 param_3)

{
                    /* Constructs or allocates a GTreeCtrl, initializing the GTableCtrl base vtables
                       and fields first, then writing GTreeCtrl vtables and GTree-specific state. */
  if (param_1 == 0) {
    if (param_2 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
LAB_00641917:
    FUN_004291d2(0,0,DAT_01bd6308);
    param_2[9] = GTableCtrl::vftable;
    param_2[1] = GTableCtrl::vftable;
    *param_2 = GTableCtrl::vftable;
    param_2[0x52] = 0;
    param_2[0x53] = 0;
    param_2[0x54] = 0;
    param_2[0x56] = 0;
    param_2[0x57] = 0;
    param_2[0x58] = 0;
    param_2[0x6a] = 0;
    param_2[0x6b] = 0;
    param_2[0x6c] = 0;
    param_2[0x6e] = 0;
    param_2[0x6f] = 0;
    param_2[0x70] = 0;
    param_2[0x71] = 0;
    FUN_00699f95(0,0,0);
    *param_2 = GTreeCtrl::vftable;
    param_2[1] = GTreeCtrl::vftable;
    param_2[9] = GTreeCtrl::vftable;
    param_2[0x74] = 0;
    FUN_0061e9e3(0,0);
  }
  else {
    if (param_1 == 1) {
      if (param_2 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
    }
    else {
      if (param_1 == 2) {
        param_2 = (undefined4 *)FUN_0060bef5(0x1d8);
        if (param_2 == (undefined4 *)0x0) {
          return (undefined4 *)0x0;
        }
        goto LAB_00641917;
      }
      if (param_1 != 3) {
        if (param_1 == 4) {
          FUN_00616e55();
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
      param_2 = (undefined4 *)FUN_0060bef5(0x1d8);
      if (param_2 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
    }
    FUN_004291d2(0,0,DAT_01bdd5d4);
    *param_2 = GTableCtrl::vftable;
    param_2[1] = GTableCtrl::vftable;
    param_2[9] = GTableCtrl::vftable;
    param_2[0x52] = 0;
    param_2[0x53] = 0;
    param_2[0x54] = 0;
    param_2[0x56] = 0;
    param_2[0x57] = 0;
    param_2[0x58] = 0;
    param_2[0x6a] = 0;
    param_2[0x6b] = 0;
    param_2[0x6c] = 0;
    param_2[0x6e] = 0;
    param_2[0x6f] = 0;
    param_2[0x70] = 0;
    param_2[0x71] = 0;
    FUN_00699f95(0,0,0);
    *param_2 = GTreeCtrl::vftable;
    param_2[1] = GTreeCtrl::vftable;
    param_2[9] = GTreeCtrl::vftable;
    param_2[0x74] = 0;
    FUN_0061e9e3(0,0);
    FUN_004d9a26(param_3,0);
  }
  return param_2;
}

