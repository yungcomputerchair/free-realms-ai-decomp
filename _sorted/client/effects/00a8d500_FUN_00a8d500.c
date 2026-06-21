// addr: 0x00a8d500
// name: FUN_00a8d500
// subsystem: common/client/effects
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_00a8d500(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  iVar2 = param_2;
  if (param_2 != 0) {
    for (iVar1 = *(int *)(param_1 + 0x13fc + (param_3 & 0x7f) * 4); iVar1 != 0;
        iVar1 = *(int *)(iVar1 + 0x24)) {
      if (*(uint *)(iVar1 + 0x20) == param_3) {
        if (iVar1 != 0) {
          *(int *)(iVar1 + 0x14) = param_2;
          LOCK();
          *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
          UNLOCK();
          if (param_3 == *(uint *)(param_1 + 0x1600)) {
            return 1;
          }
          FUN_00984320(param_3);
          return 1;
        }
        break;
      }
    }
    if (999 < (int)param_3) {
      param_3 = param_3 - 1000;
      FUN_00a8cf10(&param_3,&param_2);
      LOCK();
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
      UNLOCK();
    }
  }
  return 1;
}

