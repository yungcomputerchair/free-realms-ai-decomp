// addr: 0x00759c60
// name: PrimitiveManager_CreateBatch
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall PrimitiveManager_CreateBatch(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int unaff_retaddr;
  undefined4 uVar9;
  int *piStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
                    /* Creates a PrimitiveManager/PrimitiveEntity batch, allocating a 0x1c-byte
                       batch record and logging via explicit
                       PrimitiveEntity::CreateBatch/PrimitiveManager::CreateBatch strings. */
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_01555cbb;
  local_c = ExceptionList;
  pvVar1 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe0);
  ExceptionList = &local_c;
  if (0 < param_1[4]) {
    if (*(int *)(param_1[3] + 8) != 0) {
      (**(code **)(**(int **)(param_1[3] + 8) + 0xc))();
    }
    if (*(int *)(param_1[3] + 0xc) != 0) {
      (**(code **)(**(int **)(param_1[3] + 0xc) + 0xc))();
    }
  }
  if (param_1[4] < 1) {
    piVar2 = param_1 + 5;
    piStack_10 = param_1;
  }
  else {
    piStack_10 = Mem_Alloc(0x1c);
    if (piStack_10 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      *piStack_10 = 0;
      piStack_10[1] = 0;
      piStack_10[2] = 0;
      piStack_10[3] = 0;
      piStack_10[4] = 0;
      piStack_10[5] = 0;
      piStack_10[6] = 0;
      piVar2 = piStack_10;
    }
    puStack_4 = (undefined4 *)0xffffffff;
  }
  piVar2[5] = param_1[3];
  if (param_1[3] == 0) {
    param_1[2] = (int)piVar2;
  }
  else {
    *(int **)(param_1[3] + 0x18) = piVar2;
  }
  param_1[4] = param_1[4] + 1;
  param_1[3] = (int)piVar2;
  iVar3 = FUN_00748b00(param_2);
  iVar4 = FUN_00754710(iVar3);
  piVar2[1] = iVar4;
  for (iVar4 = *(int *)(*(int *)(iVar4 + 0xc) + 0xfc); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x58)) {
    if (*(int *)(iVar4 + 0x54) == 0x20cdbf43) goto LAB_00759d54;
  }
  iVar4 = 0;
LAB_00759d54:
  *piVar2 = iVar4;
  uVar9 = 0;
  uVar5 = (**(code **)(**(int **)(**(int **)(iVar3 + 0x8c) + 8) + 0x1c))(0,0);
  piVar6 = (int *)FUN_00750490(1,"PrimitiveEntity::CreateBatch",param_3,uVar5,uVar9);
  piVar2[2] = (int)piVar6;
  uVar5 = (**(code **)(*piVar6 + 8))(param_3,0,0,0);
  *puStack_4 = uVar5;
  if ((0 < unaff_retaddr) && (param_2 != (undefined4 *)0x0)) {
    piVar6 = (int *)FUN_007502c0(1,"PrimitiveManager::CreateBatch",unaff_retaddr,2,0);
    piVar2[3] = (int)piVar6;
    uVar5 = (**(code **)(*piVar6 + 8))(unaff_retaddr,0,0,0);
    *param_2 = uVar5;
  }
  iVar4 = (**(code **)(**(int **)(param_1[1] + 0x1d0) + 0x98))();
  piVar2[4] = iVar4;
  iVar4 = GraphicsDriver_CommandCall_size();
  iVar3 = FUN_00fab6b0();
  if (piVar2[3] == 0) {
    iVar7 = FUN_00fabb90();
  }
  else {
    iVar7 = FUN_00fab740();
    iVar8 = FUN_00fabb00();
    iVar7 = iVar7 + iVar8;
  }
  FUN_00fac230(iVar7 + iVar4 + iVar3);
  iVar4 = piVar2[1];
  if (*(char *)(iVar4 + 0x41) == '\0') {
    FUN_007589d0();
  }
  GraphicsDriver_CommandCall_ctorInBuffer(*(undefined4 *)(iVar4 + 0x10));
  FUN_00fab630(piVar2[2],0);
  if (piVar2[3] == 0) {
    FUN_00fabb10(piStack_10,0,param_3);
  }
  else {
    FUN_00fab6c0(piVar2[3]);
    FUN_00faba70(piStack_10,0,param_3,0,unaff_retaddr,0);
  }
  ExceptionList = pvVar1;
  return piVar2[1];
}

