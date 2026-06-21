// addr: 0x00864400
// name: GuiCustomCtrl_ctor
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall GuiCustomCtrl_ctor(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_20;
  undefined4 local_1c;
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Identifies a GuiCustomCtrl ctor routine. Evidence: vftable/call-shape
                       evidence in ctx. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01573b34;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffcc;
  ExceptionList = &local_c;
  local_20 = 0x1100;
  local_1c = 0;
  local_18 = (void *)0x0;
  local_14 = 0;
  local_10 = 0;
  FUN_0042912f(&local_20,0x1040,0);
  local_4 = 0;
  FUN_0083d3a0(uVar1);
  local_4._0_1_ = 1;
  *param_1 = GuiCustomCtrl::vftable;
  param_1[1] = GuiCustomCtrl::vftable;
  param_1[9] = GuiCustomCtrl::vftable;
  param_1[0x3a] = GuiCustomCtrl::vftable;
  FUN_00486164();
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined1 *)(param_1 + 0x54) = 0;
  iVar3 = 0x20;
  if (0x1f < (int)param_1[0x1c]) {
    iVar3 = param_1[0x1c];
  }
  uVar2 = 0x20;
  if (0x1f < (int)param_1[0x1d]) {
    uVar2 = param_1[0x1d];
  }
  (**(code **)(param_1[0x3d] + 0x11c))(0x610888,iVar3,uVar2);
  if (DAT_01be1598 != 0) {
    FUN_0083d4b0(param_1 + 0x3a);
  }
  ExceptionList = local_18;
  return param_1;
}

