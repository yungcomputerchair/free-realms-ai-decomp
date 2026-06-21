// addr: 0x00855d90
// name: GuiRadioButtonCtrl_ctorFromSource
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall GuiRadioButtonCtrl_ctorFromSource(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs GuiRadioButtonCtrl from a source/config object by initializing
                       GButtonCtrl and GRadioButtonCtrl bases, then GuiRadioButtonCtrl state. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01571fb8;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  FUN_00428f29(DAT_01bd40f0);
  *param_1 = GButtonCtrl::vftable;
  param_1[1] = GButtonCtrl::vftable;
  param_1[9] = GButtonCtrl::vftable;
  param_1[0x3f] = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_0041493a(uVar1);
  param_1[0x42] = GStringAccessWrapper::vftable;
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_00643d5a(0,0,0,0,0,0);
  local_4 = 4;
  *param_1 = GRadioButtonCtrl::vftable;
  param_1[1] = GRadioButtonCtrl::vftable;
  param_1[9] = GRadioButtonCtrl::vftable;
  FUN_004d9a26(param_2,0);
  local_4 = 5;
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_2 + 0x148;
  }
  FUN_00855bc0(iVar2);
  local_4 = CONCAT31(local_4._1_3_,6);
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_2 + 0x168;
  }
  FUN_00837550(iVar2);
  *param_1 = GuiRadioButtonCtrl::vftable;
  param_1[1] = GuiRadioButtonCtrl::vftable;
  param_1[9] = GuiRadioButtonCtrl::vftable;
  param_1[0x52] = GuiRadioButtonCtrl::vftable;
  param_1[0x5a] = GuiRadioButtonCtrl::vftable;
  param_1[0x61] = *(undefined4 *)(param_2 + 0x184);
  ExceptionList = local_c;
  return param_1;
}

