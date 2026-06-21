// addr: 0x0127a170
// name: FUN_0127a170
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_0127a170(undefined4 param_1,void *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01664738;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)local_18;
  ExceptionList = &local_c;
  FUN_012fa9f0(param_3);
  local_4 = 0;
  Property_cloneIfPresent(param_2,local_18);
  local_4 = 0xffffffff;
  FUN_01300cd0(uVar1);
  ExceptionList = local_c;
  return;
}

