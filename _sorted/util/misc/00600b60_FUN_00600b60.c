// addr: 0x00600b60
// name: FUN_00600b60
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_00600b60(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  void *pvVar7;
  int *piVar8;
  uint uVar9;
  bool bVar10;
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  int local_8;
  
                    /* Walks indexed/container entries, looks them up in another structure,
                       conditionally invokes update/removal helpers, and returns a status. No class
                       evidence, so left unnamed. */
  puVar1 = param_2;
  local_8 = param_1;
  if (*(int *)(param_1 + 0x34) == 0) {
    FUN_0060093b(param_2[3]);
  }
  param_2 = (undefined4 *)0x0;
  iVar3 = FUN_004cda58();
  if (iVar3 != 0) {
    do {
      FUN_005dbca9(*(undefined4 *)(param_1 + 0x2c),param_1 + 0x28);
      uVar4 = FUN_004d4a7e(param_2);
      FUN_005e6ed9(local_18,uVar4);
      cVar2 = FUN_005db79d(local_10);
      if (cVar2 == '\0') {
        uVar4 = FUN_004d4a7e(param_2);
        FUN_00600796(uVar4);
        uVar9 = 0;
        iVar3 = FUN_005db745();
        param_1 = local_8;
        if (iVar3 != 0) {
          do {
            puVar5 = (undefined4 *)FUN_005db77c(uVar9);
            if (**(int **)*puVar5 == *(int *)*puVar1) {
              iVar3 = FUN_004c508d((int *)*puVar1 + 1,**(int **)*puVar5);
              bVar10 = iVar3 != 0;
            }
            else {
              bVar10 = false;
            }
            if (bVar10) {
              piVar8 = (int *)FUN_005db77c(uVar9);
              puVar1[1] = *(undefined4 *)(*piVar8 + 4);
              goto LAB_00600c42;
            }
            uVar9 = uVar9 + 1;
            uVar6 = FUN_005db745();
            param_1 = local_8;
          } while (uVar9 < uVar6);
        }
      }
      param_2 = (undefined4 *)((int)param_2 + 1);
      uVar9 = FUN_004cda58();
    } while (param_2 < uVar9);
  }
  puVar1[1] = *(undefined4 *)(param_1 + 0x34);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
LAB_00600c42:
  pvVar7 = Mem_Alloc(0x4c);
  if (pvVar7 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00600408(puVar1);
  }
  uVar4 = FUN_005f52c9(uVar4,0);
  FUN_00600796(puVar1 + 3);
  FUN_005ffbe8(uVar4);
  FUN_005ee39f();
  return 1;
}

