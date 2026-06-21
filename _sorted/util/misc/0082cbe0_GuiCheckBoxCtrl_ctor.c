// addr: 0x0082cbe0
// name: GuiCheckBoxCtrl_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall GuiCheckBoxCtrl_ctor(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs GuiCheckBoxCtrl by initializing GButtonCtrl/GCheckBoxCtrl bases
                       and Gui-specific checkbox state. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0156bac8;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  FUN_00428f29(DAT_01bd5a34);
  *param_1 = GButtonCtrl::vftable;
  param_1[1] = GButtonCtrl::vftable;
  param_1[9] = GButtonCtrl::vftable;
  param_1[0x3f] = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_0041493a(uVar1);
  param_1[0x42] = GStringAccessWrapper::vftable;
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_00643d5a(0,0,0,0,param_2 | 1,0);
  *param_1 = GCheckBoxCtrl::vftable;
  param_1[1] = GCheckBoxCtrl::vftable;
  param_1[9] = GCheckBoxCtrl::vftable;
  local_4 = 5;
  FUN_00829520();
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_0081b470();
  *param_1 = GuiCheckBoxCtrl::vftable;
  param_1[1] = GuiCheckBoxCtrl::vftable;
  param_1[9] = GuiCheckBoxCtrl::vftable;
  param_1[0x52] = GuiCheckBoxCtrl::vftable;
  param_1[0x5a] = GuiCheckBoxCtrl::vftable;
  ExceptionList = local_c;
  return param_1;
}

