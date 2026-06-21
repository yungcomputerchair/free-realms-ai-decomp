// addr: 0x00600c9d
// name: FUN_00600c9d
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_00600c9d(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  void *pvVar7;
  int *piVar8;
  bool bVar9;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  undefined4 local_18;
  int local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_14 = param_1;
                    /* Iterates a container of entries, performs lookups and range checks, and calls
                       update/removal helpers; likely synchronizes or prunes an owned collection. No
                       class evidence, so left unnamed. */
  iVar2 = FUN_005db7d5();
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x34) == 0) {
      iVar2 = FUN_005db7eb(0);
      FUN_0060093b(*(undefined4 *)(iVar2 + 0xc));
    }
    local_10 = 0;
    iVar2 = FUN_005db7d5();
    if (iVar2 != 0) {
      do {
        puVar3 = (undefined4 *)FUN_005db7eb(local_10);
        local_8 = 0;
        local_18 = puVar3[3];
        iVar2 = FUN_004cda58();
        if (iVar2 != 0) {
          do {
            FUN_005dbca9(*(undefined4 *)(param_1 + 0x2c),param_1 + 0x28);
            uVar4 = FUN_004d4a7e(local_8);
            FUN_005e6ed9(local_28,uVar4);
            cVar1 = FUN_005db79d(local_20);
            if (cVar1 == '\0') {
              uVar4 = FUN_004d4a7e(local_8);
              FUN_00600796(uVar4);
              local_c = 0;
              iVar2 = FUN_005db745();
              if (iVar2 != 0) {
                do {
                  puVar5 = (undefined4 *)FUN_005db77c(local_c);
                  if (**(int **)*puVar5 == *(int *)*puVar3) {
                    iVar2 = FUN_004c508d((int *)*puVar3 + 1,**(int **)*puVar5);
                    bVar9 = iVar2 != 0;
                  }
                  else {
                    bVar9 = false;
                  }
                  if (bVar9) {
                    piVar8 = (int *)FUN_005db77c(local_c);
                    puVar3[1] = *(undefined4 *)(*piVar8 + 4);
                    param_1 = local_14;
                    goto LAB_00600dc4;
                  }
                  local_c = local_c + 1;
                  uVar6 = FUN_005db745();
                } while (local_c < uVar6);
              }
            }
            local_8 = local_8 + 1;
            uVar6 = FUN_004cda58();
            param_1 = local_14;
          } while (local_8 < uVar6);
        }
        puVar3[1] = *(undefined4 *)(param_1 + 0x34);
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
LAB_00600dc4:
        pvVar7 = Mem_Alloc(0x4c);
        if (pvVar7 == (void *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_00600408(puVar3);
        }
        uVar4 = FUN_005f52c9(uVar4,0);
        FUN_00600796(&local_18);
        FUN_005ffbe8(uVar4);
        FUN_005ee39f();
        local_10 = local_10 + 1;
        uVar6 = FUN_005db7d5();
      } while (local_10 < uVar6);
    }
  }
  return 1;
}

