// addr: 0x00a4cdf0
// name: FUN_00a4cdf0
// subsystem: common/client/effects
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
FUN_00a4cdf0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015b543b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[4] = *param_4;
  param_1[5] = param_4[1];
  param_1[6] = param_4[2];
  param_1[7] = param_4[3];
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 0x25) = 0;
  FUN_00a4b280(uVar1);
  local_4 = 0;
  if ((int)param_1[0xc] < 8) {
    FUN_00a4bec0(8);
  }
  else {
    FUN_00a47280(param_1[0xc] + -8);
  }
  ExceptionList = local_c;
  return param_1;
}

