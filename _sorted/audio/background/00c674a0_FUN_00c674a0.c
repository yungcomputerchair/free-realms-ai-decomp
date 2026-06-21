// addr: 0x00c674a0
// name: FUN_00c674a0
// subsystem: common/audio/background
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00c674a0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_015ffb81;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = *param_3;
  }
  uStack_4 = 0xffffffff;
  FUN_00c671f0(param_2,puVar1);
  ExceptionList = local_c;
  return;
}

