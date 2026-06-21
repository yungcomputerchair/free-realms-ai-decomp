// addr: 0x0082bf40
// name: GuiButtonCtrl_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
GuiButtonCtrl_ctor(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs GuiButtonCtrl by initializing GButtonCtrl and GStringAccessWrapper
                       bases, the shared bitmap/button base, GuiButton-specific state, and its label
                       IString. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0156b850;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  FUN_00428f29(param_4);
  *param_1 = GButtonCtrl::vftable;
  param_1[1] = GButtonCtrl::vftable;
  param_1[9] = GButtonCtrl::vftable;
  param_1[0x3f] = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_0041493a(uVar1);
  param_1[0x42] = GStringAccessWrapper::vftable;
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_00643d5a(0,0,0,0,param_2,param_3);
  local_4 = 4;
  FUN_00826910();
  *param_1 = GuiButtonCtrl::vftable;
  param_1[1] = GuiButtonCtrl::vftable;
  param_1[9] = GuiButtonCtrl::vftable;
  param_1[0x52] = GuiButtonCtrl::vftable;
  param_1[0x5a] = SoeUtil::IString<char>::vftable;
  param_1[0x5b] = &DAT_01be1210;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  ExceptionList = local_c;
  return param_1;
}

