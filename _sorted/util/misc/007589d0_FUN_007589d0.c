// addr: 0x007589d0
// name: FUN_007589d0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_007589d0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
                    /* Rebuilds cached layout/graphics resource sizes by querying a driver,
                       iterating child entries, accumulating visible/hidden extents, and reserving
                       command storage. No class evidence, so left unnamed. */
  uVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x98))();
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  uVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x98))();
  iVar8 = 0;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  iStack_c = 0;
  iStack_8 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    do {
      iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0xc0) + iVar8 * 4);
      piVar9 = &iStack_8;
      if (*(char *)(iVar3 + 0x48) == '\0') {
        piVar9 = &iStack_c;
      }
      iVar3 = FUN_00755850(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(iVar3 + 0x34),
                           *(undefined4 *)(iVar3 + 8));
      *piVar9 = *piVar9 + iVar3;
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_1 + 0x20));
  }
  iStack_4 = 0;
  if (0 < *(int *)(*(int *)(param_1 + 0xc) + 0xd4)) {
    do {
      iVar4 = iStack_4;
      iVar8 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0xd0) + iStack_4 * 4);
      iVar3 = *(int *)(iVar8 + 0x34);
      if (*(int *)(iVar3 + 0x44) < 1) {
        iVar5 = FUN_00755850(*(undefined4 *)(param_1 + 0x14),iVar3,*(undefined4 *)(iVar8 + 8));
      }
      else {
        iVar5 = *(int *)(iVar3 + 0x44);
        iVar3 = FUN_00755850(*(undefined4 *)(param_1 + 0x14),iVar3,*(undefined4 *)(iVar8 + 8));
        iVar4 = FUN_00fab620();
        iVar5 = (iVar4 + iVar3) * iVar5;
        iVar4 = iStack_4;
      }
      piVar9 = &iStack_8;
      if (*(char *)(iVar8 + 0x48) == '\0') {
        piVar9 = &iStack_c;
      }
      *piVar9 = *piVar9 + iVar5;
      iStack_4 = iVar4 + 1;
    } while (iStack_4 < *(int *)(*(int *)(param_1 + 0xc) + 0xd4));
  }
  FUN_00fac230(iStack_c);
  iVar8 = 0;
  if (iStack_c != 0) {
    FUN_00fac230(iStack_c);
  }
  if (0 < *(int *)(param_1 + 0x20)) {
    iStack_c = 0;
    do {
      if (*(char *)(*(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0xc0) + iVar8 * 4) + 0x48) == '\0')
      {
        iStack_8 = *(int *)(param_1 + 0x10);
      }
      else {
        iStack_8 = *(int *)(param_1 + 0x14);
      }
      piVar9 = (int *)(*(int *)(param_1 + 0x1c) + iStack_c);
      iVar3 = *piVar9;
      iVar3 = FUN_007558e0(iStack_8,*(undefined4 *)(iVar3 + 0x34),*(undefined4 *)(iVar3 + 4),
                           *(undefined4 *)(iVar3 + 8));
      iStack_c = iStack_c + 0xc;
      iVar8 = iVar8 + 1;
      piVar9[2] = iVar3;
    } while (iVar8 < *(int *)(param_1 + 0x20));
  }
  iVar8 = *(int *)(param_1 + 0xc);
  iVar3 = 0;
  if (0 < *(int *)(iVar8 + 0xd4)) {
    piVar9 = *(int **)(iVar8 + 0xd0);
    iVar8 = *(int *)(iVar8 + 0xd4);
    do {
      uVar1 = *(uint *)(*(int *)(*piVar9 + 0x34) + 0x44);
      piVar9 = piVar9 + 1;
      uVar6 = -(uint)(1 < (int)uVar1);
      iVar3 = iVar3 + (uVar6 & uVar1 | ~uVar6 & 1);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if ((*(int *)(param_1 + 0x30) < iVar3) && (*(int *)(param_1 + 0x34) < iVar3)) {
    FUN_00757c20(iVar3,1);
  }
  *(int *)(param_1 + 0x30) = iVar3;
  iVar3 = 0;
  iVar8 = 0;
  if (0 < *(int *)(*(int *)(param_1 + 0xc) + 0xd4)) {
    do {
      iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0xd0) + iVar8 * 4);
      iStack_8 = *(int *)(*(int *)(iVar4 + 0x34) + 0x44);
      if (*(char *)(iVar4 + 0x48) == '\0') {
        uVar2 = *(undefined4 *)(param_1 + 0x10);
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 0x14);
      }
      if (iStack_8 < 1) {
        iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0xd0) + iVar8 * 4);
        uVar2 = FUN_007558e0(uVar2,*(undefined4 *)(iVar4 + 0x34),*(undefined4 *)(iVar4 + 4),
                             *(undefined4 *)(iVar4 + 8));
        *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar3 * 4) = uVar2;
        iVar3 = iVar3 + 1;
      }
      else if (0 < iStack_8) {
        iVar4 = 0;
        do {
          FUN_00fab5b0(iVar4);
          iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0xd0) + iVar8 * 4);
          uVar7 = FUN_007558e0(uVar2,*(undefined4 *)(iVar5 + 0x34),*(undefined4 *)(iVar5 + 4),
                               *(undefined4 *)(iVar5 + 8));
          *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar3 * 4) = uVar7;
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + 1;
        } while (iVar4 < iStack_8);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(*(int *)(param_1 + 0xc) + 0xd4));
  }
  *(undefined1 *)(param_1 + 0x41) = 1;
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}

