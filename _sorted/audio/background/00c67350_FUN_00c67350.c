// addr: 0x00c67350
// name: FUN_00c67350
// subsystem: common/audio/background
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_00c67350(int *param_1)

{
  int iVar1;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  iVar1 = param_1[1];
  while (iVar1 != 0) {
    iVar1 = param_1[1];
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 8) == 0) {
        param_1[1] = *(int *)(iVar1 + 4);
      }
      else {
        *(undefined4 *)(*(int *)(iVar1 + 8) + 4) = *(undefined4 *)(iVar1 + 4);
      }
      if (*(int *)(iVar1 + 4) == 0) {
        param_1[2] = *(int *)(iVar1 + 8);
      }
      else {
        *(undefined4 *)(*(int *)(iVar1 + 4) + 8) = *(undefined4 *)(iVar1 + 8);
      }
      param_1[3] = param_1[3] + -1;
      (**(code **)(*param_1 + 0xc))(iVar1);
    }
    iVar1 = param_1[1];
  }
  return;
}

