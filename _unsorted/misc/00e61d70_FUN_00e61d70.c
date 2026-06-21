// addr: 0x00e61d70
// name: FUN_00e61d70
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00e61d70(int param_1,int param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  
  if (*(void **)(param_1 + 8) == (void *)0x0) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0x18);
    pvVar2 = _malloc(*(int *)(param_1 + 0x18) * 8);
    *(void **)(param_1 + 8) = pvVar2;
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0xc)) {
      do {
        puVar1 = (undefined4 *)(*(int *)(param_1 + 8) + iVar3 * 8);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0xc));
    }
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0xc) + -1;
    return;
  }
  if (*(int *)(param_1 + 0xc) * 2 < param_2) {
    for (iVar3 = *(int *)(param_1 + 0xc) * 4; iVar3 < param_2; iVar3 = iVar3 * 2) {
    }
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 8));
  }
  return;
}

