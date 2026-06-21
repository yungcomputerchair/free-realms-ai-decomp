// addr: 0x012ea140
// name: FUN_012ea140
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x012ea181) */

void __thiscall FUN_012ea140(int param_1,int *param_2,int param_3)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  bool bVar10;
  int local_8;
  undefined4 *local_4;
  
                    /* Searches/inserts within a string-keyed preferences tree using string
                       comparison and tree insert helpers. No stable first-party method name
                       evident. */
  puVar2 = (undefined4 *)(*(undefined4 **)(param_1 + 4))[1];
  bVar10 = true;
  cVar1 = *(char *)((int)puVar2 + 0x39);
  puVar8 = *(undefined4 **)(param_1 + 4);
  local_8 = param_1;
  while (cVar1 == '\0') {
    uVar3 = puVar2[8];
    if ((uint)puVar2[9] < 0x10) {
      puVar8 = puVar2 + 4;
    }
    else {
      puVar8 = (undefined4 *)puVar2[4];
    }
    uVar4 = *(uint *)(param_3 + 0x14);
    uVar5 = uVar4;
    if (uVar3 <= uVar4) {
      uVar5 = uVar3;
    }
    if (*(uint *)(param_3 + 0x18) < 0x10) {
      iVar7 = param_3 + 4;
    }
    else {
      iVar7 = *(int *)(param_3 + 4);
    }
    uVar5 = FUN_00f93bd0(iVar7,puVar8,uVar5);
    if (uVar5 == 0) {
      if (uVar4 < uVar3) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = (uint)(uVar4 != uVar3);
      }
    }
    bVar10 = (int)uVar5 < 0;
    if (bVar10) {
      puVar9 = (undefined4 *)*puVar2;
    }
    else {
      puVar9 = (undefined4 *)puVar2[2];
    }
    puVar8 = puVar2;
    puVar2 = puVar9;
    cVar1 = *(char *)((int)puVar9 + 0x39);
  }
  local_4 = puVar8;
  if (bVar10) {
    if (puVar8 == (undefined4 *)**(int **)(local_8 + 4)) {
      bVar10 = true;
      goto LAB_012ea1f8;
    }
    FUN_012e6ce0();
  }
  puVar2 = local_4;
  if (*(uint *)(param_3 + 0x18) < 0x10) {
    iVar7 = param_3 + 4;
  }
  else {
    iVar7 = *(int *)(param_3 + 4);
  }
  iVar7 = FUN_00f942a0(0,local_4[8],iVar7,*(undefined4 *)(param_3 + 0x14));
  if (-1 < iVar7) {
    param_2[1] = (int)puVar2;
    *(undefined1 *)(param_2 + 2) = 0;
    *param_2 = local_8;
    return;
  }
LAB_012ea1f8:
  piVar6 = (int *)FUN_012e9cf0(&local_8,bVar10,puVar8,param_3);
  iVar7 = *piVar6;
  param_2[1] = piVar6[1];
  *(undefined1 *)(param_2 + 2) = 1;
  *param_2 = iVar7;
  return;
}

