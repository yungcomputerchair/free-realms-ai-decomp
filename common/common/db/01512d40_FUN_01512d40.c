// addr: 0x01512d40
// name: FUN_01512d40
// subsystem: common/common/db
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_01512d40(int *param_1)

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
  if (*(char *)(iVar2 + 0x2d) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x2d) != '\0') {
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x2d);
      while ((cVar1 == '\0' && (param_1[1] == *(int *)(iVar2 + 8)))) {
        param_1[1] = iVar2;
        iVar2 = *(int *)(iVar2 + 4);
        cVar1 = *(char *)(iVar2 + 0x2d);
      }
      param_1[1] = iVar2;
      return;
    }
    cVar1 = *(char *)(*piVar3 + 0x2d);
    piVar4 = (int *)*piVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar4 + 0x2d);
      piVar3 = piVar4;
      piVar4 = (int *)*piVar4;
    }
    param_1[1] = (int)piVar3;
    return;
  }
  FUN_00d83c2d();
  return;
}

