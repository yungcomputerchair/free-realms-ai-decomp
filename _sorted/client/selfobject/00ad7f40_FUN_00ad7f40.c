// addr: 0x00ad7f40
// name: FUN_00ad7f40
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00ad7f40(void *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  void *unaff_EBX;
  int iVar3;
  int iVar4;
  int iVar5;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  piVar2 = *(int **)((int)param_1 + 0xc);
  piVar1 = *(int **)((int)param_1 + 8) + 1;
  if (piVar2 < piVar1) {
    iVar5 = 0;
    *(undefined1 *)((int)param_1 + 0x10) = 1;
    *(int **)((int)param_1 + 8) = piVar2;
  }
  else {
    iVar5 = **(int **)((int)param_1 + 8);
    *(int **)((int)param_1 + 8) = piVar1;
    if (iVar5 < 0) goto LAB_00ad7fb4;
  }
  if (iVar5 <= (int)piVar2 - *(int *)((int)param_1 + 8)) {
    if (*(int *)(param_2 + 8) < iVar5) {
      FUN_00ad7b80(iVar5);
    }
    else {
      *(int *)(param_2 + 8) = iVar5;
    }
    iVar4 = 0;
    if (0 < iVar5) {
      iVar3 = 0;
      do {
        if (*(char *)((int)param_1 + 0x10) != '\0') {
          return;
        }
        Stream_ReadVariantIntOrFloat((void *)(*(int *)(param_2 + 4) + iVar3),param_1,unaff_EBX);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0xc;
      } while (iVar4 < iVar5);
    }
    return;
  }
LAB_00ad7fb4:
  *(undefined1 *)((int)param_1 + 0x10) = 1;
  *(int **)((int)param_1 + 8) = piVar2;
  return;
}

