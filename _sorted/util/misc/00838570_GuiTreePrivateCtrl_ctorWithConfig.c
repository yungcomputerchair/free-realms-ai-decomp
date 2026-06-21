// addr: 0x00838570
// name: GuiTreePrivateCtrl_ctorWithConfig
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall GuiTreePrivateCtrl_ctorWithConfig(undefined4 *param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs GuiTreePrivateCtrl with a configuration argument: initializes
                       GTableCtrl/GTreeCtrl bases, GTree state, and GuiTreePrivateCtrl
                       vtables/state. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0156d90c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004291d2(0,0,DAT_01bdd5d4);
  *param_1 = GTableCtrl::vftable;
  param_1[1] = GTableCtrl::vftable;
  param_1[9] = GTableCtrl::vftable;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  local_4 = 5;
  FUN_00699f95(0,0,0);
  *param_1 = GTreeCtrl::vftable;
  param_1[1] = GTreeCtrl::vftable;
  param_1[9] = GTreeCtrl::vftable;
  param_1[0x74] = 0;
  local_4 = 7;
  FUN_0061e9e3(0,0);
  FUN_004d9a26(param_2,0);
  *param_1 = GuiTreePrivateCtrl::vftable;
  param_1[1] = GuiTreePrivateCtrl::vftable;
  param_1[9] = GuiTreePrivateCtrl::vftable;
  param_1[0x76] = *(undefined4 *)(param_2 + 0x1d8);
  param_1[0x77] = *(undefined4 *)(param_2 + 0x1dc);
  param_1[0x78] = *(undefined4 *)(param_2 + 0x1e0);
  ExceptionList = local_c;
  return param_1;
}

