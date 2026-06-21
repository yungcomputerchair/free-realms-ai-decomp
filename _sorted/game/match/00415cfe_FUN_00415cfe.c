// addr: 0x00415cfe
// name: FUN_00415cfe
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint __thiscall FUN_00415cfe(int param_1,uint *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  uint uVar10;
  uint local_c;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  uVar6 = *(uint *)(param_1 + 0x10);
  bVar1 = false;
  bVar3 = false;
  if (((uVar6 & 0x800000) != 0) && ((uVar6 & 0x2000000) == 0)) {
    bVar1 = true;
  }
  if (((uVar6 & 0x80000) != 0) && ((uVar6 & 0x1000000) == 0)) {
    bVar3 = true;
  }
  if (((bVar1) && (bVar3)) && (param_2 == (uint *)0x0)) {
    uVar6 = 0x880000;
  }
  else {
    local_c = 0;
    bVar4 = false;
    bVar2 = false;
    iVar7 = FUN_0040a67f();
    if (iVar7 != 0) {
      do {
        puVar8 = (undefined4 *)FUN_0040a692(local_c);
        cVar5 = (**(code **)(*(int *)*puVar8 + 0x18))();
        if ((cVar5 != '\0') ||
           (piVar9 = (int *)FUN_0040a692(local_c), (*(uint *)(*piVar9 + 0x10) & 0x80000000) != 0)) {
          puVar8 = (undefined4 *)FUN_0040a692(local_c);
          uVar10 = (**(code **)(*(int *)*puVar8 + 0x3c))(0);
          if ((uVar10 & 0x800000) != 0) {
            bVar2 = true;
          }
          if ((uVar10 & 0x80000) != 0) {
            bVar4 = true;
          }
          if ((bVar2) && (bVar4)) break;
        }
        local_c = local_c + 1;
        uVar10 = FUN_0040a67f();
      } while (local_c < uVar10);
    }
    if (param_2 != (uint *)0x0) {
      *param_2 = -(uint)bVar2 & 0x800000 | -(uint)bVar4 & 0x80000;
    }
    if (((*(uint *)(param_1 + 0x10) & 0xf00000) != 0x100000) && ((uVar6 & 0x2000000) == 0)) {
      bVar1 = (bool)(bVar1 | bVar2);
    }
    if (((*(uint *)(param_1 + 0x10) & 0xf0000) != 0x10000) && ((uVar6 & 0x1000000) == 0)) {
      bVar3 = (bool)(bVar3 | bVar4);
    }
    uVar6 = -(uint)bVar1 & 0x800000 | -(uint)bVar3 & 0x80000;
  }
  return uVar6;
}

