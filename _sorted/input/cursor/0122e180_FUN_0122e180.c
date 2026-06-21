// addr: 0x0122e180
// name: FUN_0122e180
// subsystem: common/input/cursor
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_0122e180(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  if (*param_1 == 0) {
    FUN_00d83c2d();
  }
  piVar2 = (int *)param_1[1];
  if (*(char *)((int)piVar2 + 0x15) == '\0') {
    iVar3 = *piVar2;
    if (*(char *)(iVar3 + 0x15) == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x15);
      iVar4 = *(int *)(iVar3 + 8);
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*(int *)(iVar4 + 8) + 0x15);
        iVar3 = iVar4;
        iVar4 = *(int *)(iVar4 + 8);
      }
      param_1[1] = iVar3;
      return;
    }
    piVar2 = (int *)piVar2[1];
    cVar1 = *(char *)((int)piVar2 + 0x15);
    while ((cVar1 == '\0' && (param_1[1] == *piVar2))) {
      param_1[1] = (int)piVar2;
      piVar2 = (int *)piVar2[1];
      cVar1 = *(char *)((int)piVar2 + 0x15);
    }
    if (*(char *)(param_1[1] + 0x15) != '\0') {
      FUN_00d83c2d();
      return;
    }
    param_1[1] = (int)piVar2;
  }
  else {
    iVar3 = piVar2[2];
    param_1[1] = iVar3;
    if (*(char *)(iVar3 + 0x15) != '\0') {
      FUN_00d83c2d();
      return;
    }
  }
  return;
}

