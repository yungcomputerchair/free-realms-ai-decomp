// addr: 0x0096f540
// name: OverHeadTextElement_ctor
// subsystem: common/client/effects
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
OverHeadTextElement_ctor
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 *param_6,undefined4 param_7,undefined4 param_8,
          undefined4 *param_9)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Identifies a OverHeadTextElement ctor routine. Evidence: vftable/call-shape
                       evidence in ctx. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015971f3;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  OverHeadElement_sub_00957850(param_3,param_4,param_7,param_5,param_8,&stack0x00000024);
  local_4 = 0;
  *param_1 = OverHeadTextElement::vftable;
  FUN_009626d0(uVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0x4b] = *param_9;
  param_1[0x4c] = *param_6;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0x14;
  if (((int)param_1[0x1e] < 1) && ((int)param_1[0x1e] < 1)) {
    FUN_0096b1d0(0);
  }
  FUN_006f9e60(param_2);
  ExceptionList = local_c;
  return param_1;
}

