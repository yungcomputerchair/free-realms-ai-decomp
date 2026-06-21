// addr: 0x0122fec0
// name: FUN_0122fec0
// subsystem: common/input/cursor
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall
FUN_0122fec0(int param_1,int *param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  undefined1 local_8 [8];
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  iVar1 = **(int **)(param_1 + 4);
  if ((param_3 == 0) || (param_3 != param_1)) {
    FUN_00d83c2d();
  }
  if (param_4 == iVar1) {
    iVar1 = *(int *)(param_1 + 4);
    if ((param_5 == 0) || (param_5 != param_1)) {
      FUN_00d83c2d();
    }
    if (param_6 == iVar1) {
      FUN_0122fa80(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
      *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
      *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
      iVar1 = **(int **)(param_1 + 4);
      *param_2 = param_1;
      param_2[1] = iVar1;
      return;
    }
  }
  while( true ) {
    if ((param_3 == 0) || (param_3 != param_5)) {
      FUN_00d83c2d();
    }
    if (param_4 == param_6) break;
    FUN_0122f900();
    FUN_0122fc00(local_8,param_3,param_4);
  }
  *param_2 = param_3;
  param_2[1] = param_4;
  return;
}

