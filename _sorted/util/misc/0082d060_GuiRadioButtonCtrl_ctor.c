// addr: 0x0082d060
// name: GuiRadioButtonCtrl_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall GuiRadioButtonCtrl_ctor(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs GuiRadioButtonCtrl by initializing GButtonCtrl/GRadioButtonCtrl
                       bases and Gui-specific radio-button state. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0156bbc8;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  FUN_00428f29(DAT_01bd6f10);
  *param_1 = GButtonCtrl::vftable;
  param_1[1] = GButtonCtrl::vftable;
  param_1[9] = GButtonCtrl::vftable;
  param_1[0x3f] = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_0041493a(uVar1);
  param_1[0x42] = GStringAccessWrapper::vftable;
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_00643d5a(0,0,0,0,param_2 | 2,0);
  *param_1 = GRadioButtonCtrl::vftable;
  param_1[1] = GRadioButtonCtrl::vftable;
  param_1[9] = GRadioButtonCtrl::vftable;
  local_4 = 5;
  FUN_0082a050();
  local_4._0_1_ = 6;
  FUN_0081b470();
  local_4 = CONCAT31(local_4._1_3_,7);
  *param_1 = GuiRadioButtonCtrl::vftable;
  param_1[1] = GuiRadioButtonCtrl::vftable;
  param_1[9] = GuiRadioButtonCtrl::vftable;
  param_1[0x52] = GuiRadioButtonCtrl::vftable;
  param_1[0x5a] = GuiRadioButtonCtrl::vftable;
  FUN_0060644c(param_1[0x3a] & 0xfffffffd | 1,param_1[0x3b],0);
  ExceptionList = local_c;
  return param_1;
}

