// addr: 0x00a47cc0
// name: FUN_00a47cc0
// subsystem: common/client/effects
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00a47cc0(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  iVar3 = *param_2 * 0x24;
  iVar4 = *(int *)(*(int *)(param_1 + 0x2c) + 8 + iVar3);
  while (0 < iVar4) {
    iVar4 = iVar3 + *(int *)(param_1 + 0x2c);
    puVar2 = *(undefined4 **)
              (*(int *)(iVar4 + 4) + -4 + *(int *)(iVar3 + 8 + *(int *)(param_1 + 0x2c)) * 4);
    piVar1 = (int *)(iVar4 + 8);
    *piVar1 = *piVar1 + -1;
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
    iVar3 = *param_2 * 0x24;
    iVar4 = *(int *)(*(int *)(param_1 + 0x2c) + 8 + iVar3);
  }
  return;
}

