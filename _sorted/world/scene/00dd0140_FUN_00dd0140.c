// addr: 0x00dd0140
// name: FUN_00dd0140
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall FUN_00dd0140(int param_1,float *param_2)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  byte bVar8;
  float *pfVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  float fVar14;
  
                    /* Updates a global 3x4 transform matrix slot, caches uniform-scale and
                       handedness flags on the object, optionally records translation velocity, and
                       marks the global flag table dirty. */
  _DAT_01bf41dc = _DAT_01bf41dc + 1;
  puVar13 = (undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 4) * 0x30 + DAT_01bf3f6c);
  bVar8 = FUN_00ddf720(param_2);
  fVar6 = DAT_01bf43cc;
  if (((*(uint *)(param_1 + 4) & 0x20000) != 0) &&
     (iVar5 = *(int *)(*(int *)(param_1 + 8) + 0x34),
     DAT_0180ae80 <= DAT_01bf43cc - *(float *)(iVar5 + 4))) {
    fVar2 = param_2[3];
    fVar3 = param_2[7];
    fVar4 = param_2[0xb];
    fVar14 = _DAT_0175b420 / (DAT_01bf43cc - *(float *)(iVar5 + 4));
    *(float *)(iVar5 + 0x18) = (fVar3 - *(float *)(iVar5 + 0xc)) * fVar14;
    *(float *)(iVar5 + 0x14) = fVar14 * (fVar2 - *(float *)(iVar5 + 8));
    *(float *)(iVar5 + 0x1c) = (fVar4 - *(float *)(iVar5 + 0x10)) * fVar14;
    iVar5 = *(int *)(*(int *)(param_1 + 8) + 0x34);
    *(float *)(iVar5 + 8) = fVar2;
    *(float *)(iVar5 + 0xc) = fVar3;
    *(float *)(iVar5 + 0x10) = fVar4;
    *(float *)(*(int *)(*(int *)(param_1 + 8) + 0x34) + 4) = fVar6;
  }
  uVar12 = 0;
  pfVar9 = param_2;
  do {
    fVar6 = *pfVar9;
    fVar2 = *(float *)(((int)puVar13 - (int)param_2) + (int)pfVar9);
    pfVar9 = pfVar9 + 1;
    if (fVar6 != fVar2) {
      puVar10 = puVar13;
      uVar12 = 0xc;
      do {
        uVar11 = uVar12;
        *puVar10 = *(undefined4 *)(((int)param_2 - (int)puVar13) + (int)puVar10);
        puVar10 = puVar10 + 1;
        uVar12 = uVar11 - 1;
      } while (uVar11 - 1 != 0);
      *(uint *)(param_1 + 4) =
           *(uint *)(param_1 + 4) ^ ((uint)bVar8 << 0xf ^ *(uint *)(param_1 + 4)) & 0x8000;
      if (0.0 <= param_2[10] * (param_2[5] * *param_2 - param_2[4] * param_2[1]) +
                 param_2[6] * (param_2[8] * param_2[1] - param_2[9] * *param_2) +
                 param_2[2] * (param_2[4] * param_2[9] - param_2[8] * param_2[5])) {
        uVar11 = 0;
      }
      *(uint *)(param_1 + 4) = (*(uint *)(param_1 + 4) ^ uVar11) & 1 ^ *(uint *)(param_1 + 4);
      FUN_00dce980();
      iVar7 = DAT_01bf3f78;
      iVar5 = *(int *)(*(int *)(param_1 + 8) + 4);
      puVar1 = (uint *)(DAT_01bf3f78 + iVar5 * 4);
      *puVar1 = *puVar1 | 0x40000000;
      return (float)(iVar7 + iVar5 * 4);
    }
    uVar12 = uVar12 + 1;
  } while (uVar12 < 0xc);
  return fVar2;
}

