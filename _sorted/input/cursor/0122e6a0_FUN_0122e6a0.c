// addr: 0x0122e6a0
// name: FUN_0122e6a0
// subsystem: common/input/cursor
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_0122e6a0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  bool bVar5;
  int local_8;
  undefined4 *local_4;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  puVar4 = *(undefined4 **)(param_1 + 4);
  bVar5 = true;
  if (*(char *)((int)puVar4[1] + 0x15) == '\0') {
    puVar2 = (undefined4 *)puVar4[1];
    do {
      puVar4 = puVar2;
      bVar5 = *param_3 < (int)puVar4[3];
      if (bVar5) {
        puVar2 = (undefined4 *)*puVar4;
      }
      else {
        puVar2 = (undefined4 *)puVar4[2];
      }
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  local_8 = param_1;
  local_4 = puVar4;
  if (bVar5) {
    if (puVar4 == (undefined4 *)**(int **)(param_1 + 4)) {
      bVar5 = true;
      goto LAB_0122e6fc;
    }
    FUN_0122e180();
  }
  if (*param_3 <= (int)local_4[3]) {
    *param_2 = local_8;
    param_2[1] = (int)local_4;
    *(undefined1 *)(param_2 + 2) = 0;
    return;
  }
LAB_0122e6fc:
  piVar3 = (int *)FUN_0122e4b0(&local_8,bVar5,puVar4,param_3);
  iVar1 = piVar3[1];
  *param_2 = *piVar3;
  param_2[1] = iVar1;
  *(undefined1 *)(param_2 + 2) = 1;
  return;
}

