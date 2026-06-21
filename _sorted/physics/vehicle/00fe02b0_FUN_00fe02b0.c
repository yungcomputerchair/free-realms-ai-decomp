// addr: 0x00fe02b0
// name: FUN_00fe02b0
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00fe02b0(float *param_1,float *param_2)

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
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  fVar1 = param_2[0xd];
  fVar2 = param_2[0xc];
  fVar3 = param_2[0xe];
  param_1[0xc] = param_1[0xc] + fVar2 * *param_1 + param_1[1] * fVar1 + param_1[2] * fVar3;
  param_1[0xd] = param_1[0xd] + param_1[5] * fVar1 + param_1[6] * fVar3 + param_1[4] * fVar2;
  param_1[0xe] = param_1[0xe] + param_1[9] * fVar1 + param_1[10] * fVar3 + fVar2 * param_1[8];
  fVar1 = param_2[10];
  fVar2 = param_2[6];
  fVar3 = param_2[2];
  fVar4 = param_1[9];
  fVar5 = param_2[5];
  fVar6 = param_2[9];
  fVar7 = param_2[1];
  fVar8 = param_1[8];
  fVar9 = param_1[8];
  fVar10 = param_2[4];
  fVar11 = param_2[8];
  fVar12 = *param_2;
  fVar13 = param_1[5];
  fVar14 = param_1[4];
  fVar15 = param_2[5];
  fVar16 = param_2[9];
  fVar17 = param_2[1];
  fVar18 = param_1[4];
  fVar19 = param_2[4];
  fVar20 = *param_2;
  fVar21 = param_2[2];
  fVar22 = param_1[2];
  fVar23 = param_1[1];
  fVar24 = *param_1;
  fVar25 = param_2[6];
  fVar26 = param_2[10];
  fVar27 = param_2[1];
  fVar28 = param_2[5];
  fVar29 = param_2[9];
  *param_1 = fVar24 * *param_2 + fVar23 * param_2[4] + fVar22 * param_2[8];
  param_1[1] = fVar24 * fVar27 + fVar23 * fVar28 + fVar22 * fVar29;
  param_1[2] = fVar24 * fVar21 + fVar23 * fVar25 + fVar22 * fVar26;
  param_1[3] = 0.0;
  param_1[4] = param_1[5] * fVar19 + param_1[6] * fVar11 + param_1[4] * fVar20;
  param_1[5] = param_1[5] * fVar15 + param_1[6] * fVar16 + fVar18 * fVar17;
  param_1[6] = fVar13 * fVar2 + param_1[6] * fVar1 + fVar14 * fVar3;
  param_1[7] = 0.0;
  param_1[8] = param_1[9] * fVar10 + param_1[10] * fVar11 + fVar12 * param_1[8];
  param_1[9] = param_1[9] * fVar5 + param_1[10] * fVar6 + fVar7 * fVar8;
  param_1[10] = fVar4 * fVar2 + param_1[10] * fVar1 + fVar3 * fVar9;
  param_1[0xb] = 0.0;
  return;
}

