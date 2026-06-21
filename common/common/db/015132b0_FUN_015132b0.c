// addr: 0x015132b0
// name: FUN_015132b0
// subsystem: common/common/db
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_015132b0(int *param_1)

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
  if (*(char *)(iVar2 + 0x19) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x19) != '\0') {
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x19);
      while ((cVar1 == '\0' && (param_1[1] == *(int *)(iVar2 + 8)))) {
        param_1[1] = iVar2;
        iVar2 = *(int *)(iVar2 + 4);
        cVar1 = *(char *)(iVar2 + 0x19);
      }
      param_1[1] = iVar2;
      return;
    }
    cVar1 = *(char *)(*piVar3 + 0x19);
    piVar4 = (int *)*piVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar4 + 0x19);
      piVar3 = piVar4;
      piVar4 = (int *)*piVar4;
    }
    param_1[1] = (int)piVar3;
    return;
  }
  FUN_00d83c2d();
  return;
}

