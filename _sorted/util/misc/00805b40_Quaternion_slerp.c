// addr: 0x00805b40
// name: Quaternion_slerp
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] __thiscall Quaternion_slerp(float *param_1,undefined1 (*param_2) [16])

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float10 fVar11;
  float10 fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
                    /* Interpolates between two quaternions using acos/sin spherical interpolation
                       when the angle is large enough, otherwise falls back to scaled blending.
                       Named by behavior only; no class evidence. */
  fVar3 = param_1[4];
  fVar4 = param_1[5];
  fVar5 = param_1[6];
  fVar6 = param_1[7];
  fVar7 = *param_1;
  fVar8 = param_1[1];
  fVar9 = param_1[2];
  fVar10 = param_1[3];
  fVar11 = (float10)FUN_00d842c0();
  if ((float10)_DAT_017ebf0c < fVar11) {
    fVar12 = (float10)fsin(((float10)1 - (float10)param_1[8]) * fVar11);
    fVar1 = (float)fVar12;
    fVar12 = (float10)fsin((float10)param_1[8] * fVar11);
    fVar2 = (float)fVar12;
    fVar11 = (float10)fsin(fVar11);
    auVar13._0_4_ = fVar1 * fVar7 + fVar2 * fVar3;
    auVar13._4_4_ = fVar1 * fVar8 + fVar2 * fVar4;
    auVar13._8_4_ = fVar1 * fVar9 + fVar2 * fVar5;
    auVar13._12_4_ = fVar1 * fVar10 + fVar2 * fVar6;
    fVar3 = (float)fVar11;
    auVar14._4_4_ = fVar3;
    auVar14._0_4_ = fVar3;
    auVar14._8_4_ = fVar3;
    auVar14._12_4_ = fVar3;
    auVar14 = divps(auVar13,auVar14);
    *param_2 = auVar14;
    return param_2;
  }
  *(float *)*param_2 = param_1[4];
  *(float *)(*param_2 + 4) = param_1[5];
  *(float *)(*param_2 + 8) = param_1[6];
  *(float *)(*param_2 + 0xc) = param_1[7];
  return param_2;
}

