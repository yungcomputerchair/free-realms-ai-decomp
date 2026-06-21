// addr: 0x0137a9c0
// name: FUN_0137a9c0
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_0137a9c0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  if (*param_1 == 0) {
    FUN_00d83c2d();
  }
  iVar2 = param_1[1];
  if (*(char *)(iVar2 + 0x1d) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x1d) != '\0') {
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x1d);
      while ((cVar1 == '\0' && (param_1[1] == *(int *)(iVar2 + 8)))) {
        param_1[1] = iVar2;
        iVar2 = *(int *)(iVar2 + 4);
        cVar1 = *(char *)(iVar2 + 0x1d);
      }
      param_1[1] = iVar2;
      return;
    }
    cVar1 = *(char *)(*piVar3 + 0x1d);
    piVar4 = (int *)*piVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar4 + 0x1d);
      piVar3 = piVar4;
      piVar4 = (int *)*piVar4;
    }
    param_1[1] = (int)piVar3;
    return;
  }
  FUN_00d83c2d();
  return;
}

