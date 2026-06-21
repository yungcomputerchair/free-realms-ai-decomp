// addr: 0x00984320
// name: FUN_00984320
// subsystem: common/client/effects
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00984320(int param_1,int param_2)

{
  int iVar1;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  for (iVar1 = *(int *)(param_1 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x68)) {
    if (*(int *)(iVar1 + 0x18d0) == param_2) {
      FUN_009622f0();
    }
  }
  return;
}

