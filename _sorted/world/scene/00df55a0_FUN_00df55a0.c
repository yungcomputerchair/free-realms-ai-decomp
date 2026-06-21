// addr: 0x00df55a0
// name: FUN_00df55a0
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00df55a0(int param_1,float *param_2)

{
  undefined4 *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  byte bVar8;
  int iVar9;
  float *pfVar10;
  undefined4 *puVar11;
  uint uVar12;
  float fVar13;
  
                    /* Updates an object 3x4 transform matrix, records velocity from translation
                       delta when tracking is enabled, caches uniform-scale and handedness flags,
                       and triggers a visibility update. */
  _DAT_01bf9540 = _DAT_01bf9540 + 1;
  puVar1 = (undefined4 *)(param_1 + 0x20);
  bVar8 = FUN_00e0eca0(param_2);
  fVar7 = DAT_01bf9718;
  if ((*(uint *)(param_1 + 0xc) & 0x100000) != 0) {
    iVar6 = *(int *)(param_1 + 0xc0);
    fVar13 = DAT_01bf9718 - *(float *)(iVar6 + 4);
    if (DAT_0180ae80 <= fVar13) {
      fVar3 = param_2[3];
      fVar4 = param_2[7];
      fVar5 = param_2[0xb];
      fVar13 = _DAT_0175b420 / fVar13;
      *(float *)(iVar6 + 0x18) = (fVar4 - *(float *)(iVar6 + 0xc)) * fVar13;
      *(float *)(iVar6 + 0x14) = fVar13 * (fVar3 - *(float *)(iVar6 + 8));
      *(float *)(iVar6 + 0x1c) = (fVar5 - *(float *)(iVar6 + 0x10)) * fVar13;
      iVar6 = *(int *)(param_1 + 0xc0);
      *(float *)(iVar6 + 8) = fVar3;
      *(float *)(iVar6 + 0xc) = fVar4;
      *(float *)(iVar6 + 0x10) = fVar5;
      *(float *)(*(int *)(param_1 + 0xc0) + 4) = fVar7;
    }
  }
  uVar12 = 0;
  pfVar10 = param_2;
  do {
    fVar7 = *pfVar10;
    pfVar2 = (float *)(((int)puVar1 - (int)param_2) + (int)pfVar10);
    pfVar10 = pfVar10 + 1;
    if (fVar7 != *pfVar2) {
      puVar11 = puVar1;
      iVar6 = 0xc;
      do {
        iVar9 = iVar6;
        *puVar11 = *(undefined4 *)(((int)param_2 - (int)puVar1) + (int)puVar11);
        puVar11 = puVar11 + 1;
        iVar6 = iVar9 + -1;
      } while (iVar9 + -1 != 0);
      *(uint *)(param_1 + 0xc) =
           *(uint *)(param_1 + 0xc) ^ ((uint)bVar8 << 0x10 ^ *(uint *)(param_1 + 0xc)) & 0x10000;
      if (0.0 <= param_2[10] * (param_2[5] * *param_2 - param_2[4] * param_2[1]) +
                 param_2[6] * (param_2[8] * param_2[1] - param_2[9] * *param_2) +
                 param_2[2] * (param_2[4] * param_2[9] - param_2[8] * param_2[5])) {
        iVar9 = 0;
      }
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0x7fffffff | iVar9 << 0x1f;
      FUN_00df4cf0();
      return;
    }
    uVar12 = uVar12 + 1;
  } while (uVar12 < 0xc);
  return;
}

