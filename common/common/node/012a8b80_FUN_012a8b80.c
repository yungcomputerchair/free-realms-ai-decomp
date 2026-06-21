// addr: 0x012a8b80
// name: FUN_012a8b80
// subsystem: common/common/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int * __thiscall FUN_012a8b80(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  iVar1 = *param_1;
  iVar2 = param_1[1];
  *param_2 = iVar1;
  param_2[1] = iVar2;
  if (iVar1 == 0) {
    FUN_00d83c2d();
  }
  if (*(uint *)(*param_1 + 8) <= (uint)param_1[1]) {
    FUN_00d83c2d();
  }
  param_1[1] = param_1[1] + 0x1c;
  return param_2;
}

