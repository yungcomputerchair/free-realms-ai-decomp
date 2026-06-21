// addr: 0x00437372
// name: FUN_00437372
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined1 __thiscall FUN_00437372(int param_1,int param_2)

{
  undefined4 *puVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* Copies/clones a large UI/graphics object including geometry bounds, owned
                       subobject at 0xc4, and several copied fields. No exact class evidence. */
  cVar2 = FUN_00521aa1(param_2);
  uVar3 = 0;
  if (cVar2 != '\0') {
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    uVar5 = *(undefined4 *)(param_2 + 0xa8);
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
    *(undefined4 *)(param_1 + 0xa8) = uVar5;
    *(undefined2 *)(param_1 + 0xb0) = *(undefined2 *)(param_2 + 0xb0);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x58);
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 0x5c) | 0x80000000;
    FUN_00405193(param_2 + 0x78);
    if (*(int *)(param_2 + 0xc4) == 0) {
      if (*(void **)(param_1 + 0xc4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)(param_1 + 0xc4));
      }
    }
    else {
      if (*(int *)(param_1 + 0xc4) == 0) {
        puVar4 = Mem_Alloc(0x24);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
          puVar4[3] = 0;
          puVar4[4] = 0;
          puVar4[5] = 0;
          puVar4[6] = 0;
          puVar4[7] = 0;
          puVar4[8] = 0;
        }
        *(undefined4 **)(param_1 + 0xc4) = puVar4;
      }
      puVar4 = *(undefined4 **)(param_2 + 0xc4);
      uVar5 = puVar4[1];
      puVar1 = *(undefined4 **)(param_1 + 0xc4);
      *puVar1 = *puVar4;
      puVar1[1] = uVar5;
      uVar5 = puVar4[3];
      puVar1[2] = puVar4[2];
      puVar1[3] = uVar5;
      uVar5 = puVar4[7];
      local_c = puVar4[6];
      local_8 = puVar4[5];
      puVar1[4] = puVar4[4];
      puVar1[5] = local_8;
      puVar1[6] = local_c;
      puVar1[7] = uVar5;
      puVar1[8] = puVar4[8];
    }
    piVar7 = *(int **)(param_2 + 0x3c);
    FUN_004c6dcb(&local_c);
    uVar5 = FUN_004cd10a();
    if (piVar7 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (**(code **)(*piVar7 + 8))(uVar5,0);
    }
    if (iVar6 == 0) {
      if (*(int **)(param_1 + 0x3c) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x3c) + 0x10))(0);
      }
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    else {
      piVar7 = (int *)FUN_004f4fa7(0);
      iVar6 = *piVar7;
      FUN_004c88d5(&local_8,0);
      uVar5 = FUN_004cd10a();
      uVar5 = (**(code **)(iVar6 + 8))(uVar5);
      if (*(int **)(param_1 + 0x3c) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x3c) + 0x10))(0);
      }
      *(undefined4 *)(param_1 + 0x3c) = uVar5;
    }
    piVar7 = *(int **)(param_2 + 0x38);
    FUN_004c6dcb(&local_c);
    uVar5 = FUN_004cd10a();
    if (piVar7 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (**(code **)(*piVar7 + 8))(uVar5,0);
    }
    if (iVar6 == 0) {
      if (*(int **)(param_1 + 0x38) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x38) + 0x10))(0);
      }
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    else {
      piVar7 = (int *)FUN_004f4fa7(0);
      iVar6 = *piVar7;
      FUN_004c88d5(&local_8,0);
      uVar5 = FUN_004cd10a();
      uVar5 = (**(code **)(iVar6 + 8))(uVar5);
      if (*(int **)(param_1 + 0x38) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x38) + 0x10))(0);
      }
      *(undefined4 *)(param_1 + 0x38) = uVar5;
    }
    if (*(int *)(param_2 + 0xd4) == 0) {
      if (*(int **)(param_1 + 0xd4) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0xd4) + 0x10))(0);
      }
      *(undefined4 *)(param_1 + 0xd4) = 0;
    }
    else {
      uVar5 = FUN_004f4fa7(0);
      if (*(int **)(param_1 + 0xd4) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0xd4) + 0x10))(0);
      }
      *(undefined4 *)(param_1 + 0xd4) = uVar5;
    }
    if (*(int *)(param_2 + 200) == 0) {
      if (*(int **)(param_1 + 200) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 200) + 0x10))(0);
      }
      *(undefined4 *)(param_1 + 200) = 0;
    }
    else {
      uVar5 = FUN_004f4fa7(0);
      if (*(int **)(param_1 + 200) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 200) + 0x10))(0);
      }
      *(undefined4 *)(param_1 + 200) = uVar5;
    }
    if (*(int *)(param_2 + 0xcc) == 0) {
      if (*(int **)(param_1 + 0xcc) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0xcc) + 0x10))(0);
      }
      *(undefined4 *)(param_1 + 0xcc) = 0;
    }
    else {
      uVar5 = FUN_004f4fa7(0);
      if (*(int **)(param_1 + 0xcc) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0xcc) + 0x10))(0);
      }
      *(undefined4 *)(param_1 + 0xcc) = uVar5;
    }
    if (*(int *)(param_1 + 0xb4) != 0) {
      FUN_004307f5(0);
    }
    if (*(int **)(param_2 + 0xb4) != (int *)0x0) {
      uVar5 = (**(code **)(**(int **)(param_2 + 0xb4) + 0x4c))(0);
      if (*(int **)(param_1 + 0xb4) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0xb4) + 0x10))(0);
      }
      *(undefined4 *)(param_1 + 0xb4) = uVar5;
      FUN_0042b68d(param_1,0);
    }
    uVar3 = 1;
  }
  return uVar3;
}

