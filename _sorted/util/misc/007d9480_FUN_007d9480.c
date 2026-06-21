// addr: 0x007d9480
// name: FUN_007d9480
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_007d9480(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
                    /* Moves/copies a range of 0x20-byte records within a growable array after
                       ensuring capacity, handling overlapping source pointers. No class evidence,
                       so left unnamed. */
  puVar2 = *(undefined4 **)(param_1 + 4);
  if ((param_3 < puVar2) || (puVar2 + *(int *)(param_1 + 8) * 8 <= param_3)) {
    if (*(int *)(param_1 + 8) < param_2 + param_4) {
      FUN_007d89e0(param_2 + param_4 + -1);
    }
  }
  else {
    iVar3 = (int)param_3 - (int)puVar2 >> 5;
    iVar1 = param_2 + param_4;
    if (*(int *)(param_1 + 8) < iVar1) {
      FUN_007d89e0(iVar1 + -1);
    }
    param_3 = (undefined4 *)(iVar3 * 0x20 + *(int *)(param_1 + 4));
    if (iVar3 <= param_2) {
      if (param_2 <= iVar3) {
        return;
      }
      param_3 = param_3 + param_4 * 8;
      puVar2 = (undefined4 *)(iVar1 * 0x20 + *(int *)(param_1 + 4));
      if (param_4 == 0) {
        return;
      }
      do {
        puVar2 = puVar2 + -8;
        param_4 = param_4 + -1;
        param_3 = param_3 + -8;
        if (puVar2 != (undefined4 *)0x0) {
          puVar4 = param_3;
          puVar5 = puVar2;
          for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
        }
      } while (param_4 != 0);
      return;
    }
  }
  puVar2 = (undefined4 *)(param_2 * 0x20 + *(int *)(param_1 + 4));
  while (param_4 != 0) {
    param_4 = param_4 + -1;
    if (puVar2 != (undefined4 *)0x0) {
      puVar4 = param_3;
      puVar5 = puVar2;
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    puVar2 = puVar2 + 8;
    param_3 = param_3 + 8;
  }
  return;
}

