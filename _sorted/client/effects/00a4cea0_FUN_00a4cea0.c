// addr: 0x00a4cea0
// name: FUN_00a4cea0
// subsystem: common/client/effects
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_00a4cea0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015b546b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x160);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00a4cdf0(param_1,*(undefined4 *)(param_1 + 8),param_2);
  }
  local_4 = 0xffffffff;
  iVar4 = *(int *)(param_1 + 0x14) + 1;
  if (*(int *)(param_1 + 0x18) < iVar4) {
    FUN_00a47460(iVar4,0);
  }
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x14) * 4);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = uVar3;
  }
  ExceptionList = local_c;
  return uVar3;
}

