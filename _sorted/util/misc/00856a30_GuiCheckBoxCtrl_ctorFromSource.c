// addr: 0x00856a30
// name: GuiCheckBoxCtrl_ctorFromSource
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall GuiCheckBoxCtrl_ctorFromSource(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs GuiCheckBoxCtrl from a source/config object by initializing
                       GButtonCtrl and GCheckBoxCtrl bases, then GuiCheckBoxCtrl state. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01572278;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
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
  *param_1 = GCheckBoxCtrl::vftable;
  param_1[1] = GCheckBoxCtrl::vftable;
  param_1[9] = GCheckBoxCtrl::vftable;
  FUN_004d9a26(param_2,0);
  local_4 = 5;
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_2 + 0x148;
  }
  FUN_00856860(iVar2);
  local_4 = CONCAT31(local_4._1_3_,6);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = param_2 + 0x168;
  }
  FUN_00837550(param_2);
  *param_1 = GuiCheckBoxCtrl::vftable;
  param_1[1] = GuiCheckBoxCtrl::vftable;
  param_1[9] = GuiCheckBoxCtrl::vftable;
  param_1[0x52] = GuiCheckBoxCtrl::vftable;
  param_1[0x5a] = GuiCheckBoxCtrl::vftable;
  ExceptionList = local_c;
  return param_1;
}

