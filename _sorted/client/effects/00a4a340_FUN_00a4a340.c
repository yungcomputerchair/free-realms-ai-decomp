// addr: 0x00a4a340
// name: FUN_00a4a340
// subsystem: common/client/effects
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall FUN_00a4a340(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  iVar2 = *(int *)(param_1 + 8) + 1;
  if (*(int *)(param_1 + 0xc) < iVar2) {
    FUN_00a47460(iVar2,0);
  }
  puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 4);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

