// addr: 0x009a0e70
// name: FUN_009a0e70
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 FUN_009a0e70(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  puVar3 = *(undefined4 **)(param_1 + 8);
  puVar4 = (undefined4 *)0x0;
  while (puVar1 = puVar3, puVar1 != (undefined4 *)0x0) {
    puVar4 = puVar1;
    puVar3 = (undefined4 *)puVar1[2];
  }
  if (puVar4 != (undefined4 *)0x0) {
    do {
      puVar3 = (undefined4 *)puVar4[3];
      if (puVar3 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)puVar4[1];
        puVar1 = puVar4;
        while ((puVar3 = puVar2, puVar3 != (undefined4 *)0x0 && ((undefined4 *)puVar3[3] == puVar1))
              ) {
          puVar1 = puVar3;
          puVar2 = (undefined4 *)puVar3[1];
        }
      }
      else {
        for (puVar1 = (undefined4 *)puVar3[2]; puVar1 != (undefined4 *)0x0;
            puVar1 = (undefined4 *)puVar1[2]) {
          puVar3 = puVar1;
        }
      }
      FUN_009a0080(param_2,L"%d%s",*puVar4,&DAT_0180d2f4);
      puVar4 = puVar3;
    } while (puVar3 != (undefined4 *)0x0);
    return *(undefined4 *)(param_2 + 4);
  }
  return *(undefined4 *)(param_2 + 4);
}

