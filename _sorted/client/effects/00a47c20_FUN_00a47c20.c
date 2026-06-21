// addr: 0x00a47c20
// name: FUN_00a47c20
// subsystem: common/client/effects
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_00a47c20(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  iVar1 = *param_3;
  if ((-1 < iVar1) && (iVar1 < *(int *)(*(int *)(param_1 + 0x2c) + 8 + *param_2 * 0x24))) {
    return *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x2c) + *param_2 * 0x24 + 4) + iVar1 * 4);
  }
  return 0;
}

