// addr: 0x009622f0
// name: FUN_009622f0
// subsystem: common/client/effects
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_009622f0(int param_1)

{
  char cVar1;
  double *pdVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  float local_18;
  undefined4 local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01595d8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_18 = _DAT_0175b420;
  if ((*(byte *)(param_1 + 0x140) & 0x18) == 0) {
    iVar3 = *(int *)(param_1 + 0x138);
    if (iVar3 == 0) {
      if ((*(float *)(param_1 + 0x194) < _DAT_0175b420) ||
         (*(char *)(*(int *)(param_1 + 0x738) + 0xc61) != '\0')) {
        iVar3 = *(int *)(param_1 + 0x1a0);
        if (iVar3 == 0) {
          cVar1 = FUN_008c73e0(1);
          iVar3 = 0;
          if ((cVar1 == '\0') || (cVar1 = FUN_0095f540(), cVar1 != '\0')) goto LAB_009624da;
          local_18 = 3.5518679e+19;
          FUN_00706570(&local_18);
          iVar3 = FUN_00d83c90();
          local_18 = -1.18976925e-29;
          pdVar2 = (double *)FUN_00706570(&local_18);
          if (pdVar2 != (double *)0x0) {
            local_18 = (float)*pdVar2;
            goto LAB_009624da;
          }
        }
        else {
          local_18 = -7.684703e+21;
          pdVar2 = (double *)FUN_00706570(&local_18);
          if (pdVar2 != (double *)0x0) {
LAB_009623fd:
            local_18 = (float)*pdVar2;
            goto LAB_009624da;
          }
        }
      }
      else {
        iVar3 = *(int *)(param_1 + 0x19c);
        for (pdVar2 = *(double **)(*(int *)(*(int *)(param_1 + 0x738) + 500) + 0x1fb4);
            pdVar2 != (double *)0x0; pdVar2 = *(double **)((int)pdVar2 + 0x14)) {
          if (*(int *)(pdVar2 + 2) == 0x3c93fe7) goto LAB_009623fd;
        }
      }
    }
    else {
      for (pdVar2 = *(double **)(*(int *)(*(int *)(param_1 + 0x738) + 500) + 0x1194);
          pdVar2 != (double *)0x0; pdVar2 = *(double **)((int)pdVar2 + 0x14)) {
        if (*(int *)(pdVar2 + 2) == 0x3ead3c5f) goto LAB_009623fd;
      }
    }
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x738) + 500);
    for (iVar3 = *(int *)(iVar4 + 0x2000); (iVar3 != 0 && (*(int *)(iVar3 + 0x10) != 0x2636effa));
        iVar3 = *(int *)(iVar3 + 0x14)) {
    }
    iVar3 = FUN_00d83c90(DAT_01b839d8 ^ (uint)&stack0xffffffdc);
    for (pdVar2 = *(double **)(iVar4 + 0xbe8); pdVar2 != (double *)0x0;
        pdVar2 = *(double **)((int)pdVar2 + 0x14)) {
      if (*(int *)(pdVar2 + 2) == 0x55b662f4) goto LAB_009623fd;
    }
  }
  local_18 = (float)_DAT_01764650;
LAB_009624da:
  local_14 = 0;
  iVar4 = FUN_00a8d6f0(iVar3,&local_14);
  local_10 = (void *)0x1;
  FUN_00a47cc0(&local_10);
  if (iVar4 != 0) {
    local_18 = local_18 * _DAT_0180a684;
    local_10 = Mem_Alloc(0xa0);
    local_4 = 0;
    if (local_10 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = OverHeadNameIconElement_ctor
                        (iVar3,*(undefined4 *)(iVar4 + 0x2c),0xffffffff,local_18,1);
    }
    local_4 = 0xffffffff;
    FUN_00a4b190(uVar5);
    FUN_00709dd0(7);
    *(undefined4 *)(param_1 + 0x18d0) = local_14;
    ExceptionList = local_c;
    return;
  }
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x18d0) = local_14;
  ExceptionList = local_c;
  return;
}

