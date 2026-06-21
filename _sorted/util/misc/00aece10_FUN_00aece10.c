// addr: 0x00aece10
// name: FUN_00aece10
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00aece10(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined4 *puVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar20;
  float fVar21;
  undefined1 auVar19 [16];
  float fVar22;
  undefined1 local_20 [28];
  
                    /* Advances/interpolates an animation track over elapsed time, updating current
                       key index/time and interpolated vector/quaternion-like values. No class
                       evidence, so left unnamed. */
  if (*(int *)(param_1 + 0x1b4) != 0) {
    fVar17 = *(float *)(param_1 + 0x1d0) + param_2;
    auVar19 = ZEXT416((uint)fVar17);
    if (*(float *)(param_1 + 0x1cc) <= fVar17) {
      if (*(int *)(param_1 + 0x1a8) < *(int *)(param_1 + 0x1b4) + -1) {
        *(float *)(param_1 + 0x1d0) = *(float *)(param_1 + 0x1d0) - *(float *)(param_1 + 0x1cc);
        *(int *)(param_1 + 0x1a8) = *(int *)(param_1 + 0x1a8) + 1;
      }
      else {
        *(undefined1 *)(param_1 + 0x240) = 1;
      }
    }
    param_2 = param_2 + *(float *)(param_1 + 0x1d0);
    fVar17 = *(float *)(param_1 + 0x1cc);
    if (param_2 <= *(float *)(param_1 + 0x1cc)) {
      fVar17 = param_2;
    }
    iVar2 = *(int *)(param_1 + 0x1a8);
    *(float *)(param_1 + 0x1d0) = fVar17;
    iVar3 = *(int *)(param_1 + 0x1b4);
    if (((iVar3 <= iVar2) && (iVar1 = iVar2 + 1, iVar3 < iVar1)) && (iVar3 <= iVar2)) {
      if (*(int *)(param_1 + 0x1b8) < iVar1) {
        FUN_00aec5f0(iVar1,0);
      }
      *(int *)(param_1 + 0x1b4) = iVar1;
    }
    puVar8 = (undefined4 *)FUN_007d3f20(local_20,*(undefined4 *)(param_1 + 0x1d0));
    *(undefined4 *)(param_1 + 0x1e0) = *puVar8;
    *(undefined4 *)(param_1 + 0x1e4) = puVar8[1];
    *(undefined4 *)(param_1 + 0x1e8) = puVar8[2];
    *(undefined4 *)(param_1 + 0x1ec) = puVar8[3];
    *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_1 + 0x1ec);
    fVar17 = *(float *)(param_1 + 0x1e4) * fRam01cb54a4 + fRam01cb54f4;
    fVar10 = *(float *)(param_1 + 0x1e8) * fRam01cb54a8 + fRam01cb54f8;
    fVar11 = *(float *)(param_1 + 0x1ec) * fRam01cb54ac + fRam01cb54fc;
    *(float *)(param_1 + 0x1e0) = *(float *)(param_1 + 0x1e0) * _DAT_01cb54a0 + _DAT_01cb54f0;
    *(float *)(param_1 + 0x1e4) = fVar17;
    *(float *)(param_1 + 0x1e8) = fVar10;
    *(float *)(param_1 + 0x1ec) = fVar11;
    iVar2 = *(int *)(param_1 + 0x1a8);
    iVar3 = *(int *)(param_1 + 0x1c4);
    if (((iVar3 <= iVar2) && (iVar1 = iVar2 + 1, iVar3 < iVar1)) && (iVar3 <= iVar2)) {
      if (*(int *)(param_1 + 0x1c8) < iVar1) {
        FUN_00aec5f0(iVar1,0);
      }
      *(int *)(param_1 + 0x1c4) = iVar1;
    }
    pfVar9 = (float *)FUN_007d3f20(local_20,*(undefined4 *)(param_1 + 0x1d0));
    fVar13 = (*pfVar9 * _DAT_01cb54a0 + _DAT_01cb54f0) - *(float *)(param_1 + 0x1e0);
    fVar14 = (pfVar9[1] * fRam01cb54a4 + fRam01cb54f4) - *(float *)(param_1 + 0x1e4);
    fVar15 = (pfVar9[2] * fRam01cb54a8 + fRam01cb54f8) - *(float *)(param_1 + 0x1e8);
    fVar16 = (pfVar9[3] * fRam01cb54ac + fRam01cb54fc) - *(float *)(param_1 + 0x1ec);
    fVar11 = fVar14 * fVar14 + fVar13 * fVar13;
    fVar12 = fVar16 * fVar16 + fVar15 * fVar15;
    fVar17 = fVar12 + fVar13 * fVar13 + fVar14 * fVar14;
    fVar10 = fVar11 + fVar15 * fVar15 + fVar16 * fVar16;
    auVar7._4_4_ = fVar17;
    auVar7._0_4_ = fVar12 + fVar11;
    auVar7._8_4_ = fVar11 + fVar12;
    auVar7._12_4_ = fVar10;
    auVar19 = rsqrtps(auVar19,auVar7);
    fVar18 = auVar19._0_4_;
    fVar20 = auVar19._4_4_;
    fVar21 = auVar19._8_4_;
    fVar22 = auVar19._12_4_;
    fVar13 = (DAT_017e99a8 - (fVar12 + fVar11) * fVar18 * fVar18) * DAT_017649d4 * fVar18 * fVar13;
    fVar14 = (DAT_017e99a8 - fVar17 * fVar20 * fVar20) * DAT_017649d4 * fVar20 * fVar14;
    fVar15 = (DAT_017e99a8 - (fVar11 + fVar12) * fVar21 * fVar21) * DAT_017649d4 * fVar21 * fVar15;
    fVar16 = (DAT_017e99a8 - fVar10 * fVar22 * fVar22) * DAT_017649d4 * fVar22 * fVar16;
    bVar4 = fVar14 - fVar14 == fRam01cb53d4;
    bVar5 = fVar15 - fVar15 == fRam01cb53d8;
    bVar6 = fVar16 - fVar16 == fRam01cb53dc;
    *(uint *)(param_1 + 0x1f0) = -(uint)(fVar13 - fVar13 == _DAT_01cb53d0) & (uint)fVar13;
    *(uint *)(param_1 + 500) = -(uint)bVar4 & (uint)fVar14;
    *(uint *)(param_1 + 0x1f8) = -(uint)bVar5 & (uint)fVar15;
    *(uint *)(param_1 + 0x1fc) = -(uint)bVar6 & (uint)fVar16;
  }
  return;
}

