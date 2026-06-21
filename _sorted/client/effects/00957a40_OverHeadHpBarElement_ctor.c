// addr: 0x00957a40
// name: OverHeadHpBarElement_ctor
// subsystem: common/client/effects
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
OverHeadHpBarElement_ctor
          (undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Identifies a OverHeadHpBarElement ctor routine. Evidence: vftable/call-shape
                       evidence in ctx. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01595198;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_14 = DAT_017ed93c;
  local_10 = param_1;
  OverHeadElement_sub_00957850(param_3,param_4,param_6,param_5,param_7,&local_14);
  uVar2 = _DAT_0175b420;
  *param_1 = OverHeadHpBarElement::vftable;
  uVar1 = *param_2;
  param_1[0x1d] = uVar2;
  param_1[0x1c] = uVar1;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0x10;
  ExceptionList = local_c;
  return param_1;
}

