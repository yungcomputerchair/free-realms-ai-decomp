// addr: 0x00a8cf10
// name: FUN_00a8cf10
// subsystem: common/client/effects
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00a8cf10(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_015be161;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 4))(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = *param_3;
    puVar1[3] = *param_2;
  }
  puVar1[2] = param_1[3];
  puVar1[1] = 0;
  if (param_1[3] == 0) {
    param_1[2] = (int)puVar1;
  }
  else {
    *(undefined4 **)(param_1[3] + 4) = puVar1;
  }
  param_1[3] = (int)puVar1;
  puVar1[4] = param_1[(puVar1[3] & 0x3ff) + 5];
  param_1[(puVar1[3] & 0x3ff) + 5] = (int)puVar1;
  param_1[4] = param_1[4] + 1;
  ExceptionList = local_c;
  return;
}

