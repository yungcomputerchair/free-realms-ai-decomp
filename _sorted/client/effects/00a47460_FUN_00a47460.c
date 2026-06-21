// addr: 0x00a47460
// name: FUN_00a47460
// subsystem: common/client/effects
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00a47460(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_ESI;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 4))(param_2,&param_3,param_3);
  if (puVar1 != (undefined4 *)param_1[1]) {
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      iVar2 = 0;
      puVar3 = puVar1;
      if (0 < param_1[2]) {
        do {
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = *(undefined4 *)(param_1[1] + iVar2 * 4);
          }
          iVar2 = iVar2 + 1;
          puVar3 = puVar3 + 1;
        } while (iVar2 < param_1[2]);
      }
      (**(code **)(*param_1 + 8))(param_1[1],param_1[3]);
    }
    param_1[1] = (int)puVar1;
    param_1[3] = unaff_ESI;
  }
  return;
}

