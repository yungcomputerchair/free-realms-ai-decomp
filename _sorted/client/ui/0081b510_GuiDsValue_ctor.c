// addr: 0x0081b510
// name: GuiDsValue_ctor
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall GuiDsValue_ctor(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Identifies a GuiDsValue ctor routine. Evidence: vftable/call-shape evidence
                       in ctx. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01569e03;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  FUN_00822990(param_2);
  local_4 = 0;
  FUN_0081b470(uVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = GuiDsValue::vftable;
  param_1[0xc] = GuiDsValue::vftable;
  param_1[0x13] = 0;
  FUN_00821940();
  param_1[0x13] = param_1[0x13] & 0xfffffffb | 2;
  param_1[0x14] = 1;
  FUN_00821dc0();
  ExceptionList = local_c;
  return param_1;
}

