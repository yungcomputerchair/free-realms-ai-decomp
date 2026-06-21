// addr: 0x011718d0
// name: FUN_011718d0
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_011718d0(int param_1)

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
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  fVar1 = *(float *)(param_1 + 0x4a4);
  fVar2 = *(float *)(param_1 + 0x4a0);
  fVar12 = fVar1 * *(float *)(param_1 + 0x4b8) -
           *(float *)(param_1 + 0x4a8) * *(float *)(param_1 + 0x4b4);
  fVar13 = *(float *)(param_1 + 0x4b0) * *(float *)(param_1 + 0x4a8) -
           fVar2 * *(float *)(param_1 + 0x4b8);
  fVar10 = fVar2 * *(float *)(param_1 + 0x4b4) - *(float *)(param_1 + 0x4b0) * fVar1;
  fVar3 = *(float *)(param_1 + 0x494);
  fVar8 = _DAT_0175b420 /
          (fVar10 * *(float *)(param_1 + 0x498) + *(float *)(param_1 + 0x494) * fVar13 +
          *(float *)(param_1 + 0x490) * fVar12);
  fVar4 = *(float *)(param_1 + 0x490);
  fVar15 = (fVar3 * *(float *)(param_1 + 0x4b0) - fVar4 * *(float *)(param_1 + 0x4b4)) * fVar8;
  fVar10 = fVar10 * fVar8;
  fVar5 = *(float *)(param_1 + 0x498);
  fVar16 = (fVar5 * *(float *)(param_1 + 0x4a0) - fVar4 * *(float *)(param_1 + 0x4a8)) * fVar8;
  fVar9 = (fVar4 * *(float *)(param_1 + 0x4b8) - fVar5 * *(float *)(param_1 + 0x4b0)) * fVar8;
  fVar13 = fVar13 * fVar8;
  fVar14 = (fVar4 * fVar1 - fVar3 * fVar2) * fVar8;
  fVar11 = (fVar5 * *(float *)(param_1 + 0x4b4) - fVar3 * *(float *)(param_1 + 0x4b8)) * fVar8;
  fVar12 = fVar12 * fVar8;
  fVar8 = (fVar3 * *(float *)(param_1 + 0x4a8) - fVar5 * *(float *)(param_1 + 0x4a4)) * fVar8;
  fVar1 = *(float *)(param_1 + 0x4f8);
  fVar2 = *(float *)(param_1 + 0x4e8);
  fVar3 = *(float *)(param_1 + 0x4d8);
  local_28 = fVar2 * fVar15 + fVar1 * fVar14 + fVar3 * fVar10;
  fVar4 = *(float *)(param_1 + 0x4f4);
  fVar5 = *(float *)(param_1 + 0x4d0);
  local_2c = fVar10 * *(float *)(param_1 + 0x4d4) + fVar15 * *(float *)(param_1 + 0x4e4) +
             fVar4 * fVar14;
  fVar6 = *(float *)(param_1 + 0x4f0);
  fVar7 = *(float *)(param_1 + 0x4e0);
  local_30 = fVar5 * fVar10 + fVar7 * fVar15 + fVar6 * fVar14;
  local_38 = fVar1 * fVar16 + fVar3 * fVar13 + fVar2 * fVar9;
  local_3c = fVar13 * *(float *)(param_1 + 0x4d4) + fVar4 * fVar16 +
             fVar9 * *(float *)(param_1 + 0x4e4);
  local_40 = fVar5 * fVar13 + fVar7 * fVar9 + fVar6 * fVar16;
  local_48 = fVar1 * fVar8 + fVar3 * fVar12 + fVar2 * fVar11;
  local_4c = fVar12 * *(float *)(param_1 + 0x4d4) + fVar4 * fVar8 +
             fVar11 * *(float *)(param_1 + 0x4e4);
  local_50 = fVar5 * fVar12 + fVar7 * fVar11 + fVar6 * fVar8;
  local_44 = 0;
  local_34 = 0;
  local_24 = 0;
  FUN_0116fe60(&local_50,param_1 + 0x510);
  fVar1 = *(float *)(param_1 + 0x4b8);
  fVar2 = *(float *)(param_1 + 0x4f0);
  fVar3 = *(float *)(param_1 + 0x4a8);
  fVar4 = *(float *)(param_1 + 0x4e0);
  fVar5 = *(float *)(param_1 + 0x4d0);
  fVar6 = *(float *)(param_1 + 0x498);
  *(float *)(param_1 + 0x530) = fVar3 * fVar2 - fVar1 * fVar4;
  *(float *)(param_1 + 0x534) = fVar1 * fVar5 - fVar2 * fVar6;
  *(float *)(param_1 + 0x538) = fVar4 * fVar6 - fVar3 * fVar5;
  *(undefined4 *)(param_1 + 0x53c) = 0;
  *(float *)(param_1 + 0x520) =
       fVar1 * *(float *)(param_1 + 0x534) - fVar3 * *(float *)(param_1 + 0x538);
  *(float *)(param_1 + 0x524) =
       fVar6 * *(float *)(param_1 + 0x538) - fVar1 * *(float *)(param_1 + 0x530);
  *(float *)(param_1 + 0x528) =
       fVar3 * *(float *)(param_1 + 0x530) - fVar6 * *(float *)(param_1 + 0x534);
  *(undefined4 *)(param_1 + 0x52c) = 0;
  *(float *)(param_1 + 0x540) =
       fVar4 * *(float *)(param_1 + 0x538) - fVar2 * *(float *)(param_1 + 0x534);
  *(float *)(param_1 + 0x544) =
       fVar2 * *(float *)(param_1 + 0x530) - *(float *)(param_1 + 0x538) * fVar5;
  *(float *)(param_1 + 0x548) =
       *(float *)(param_1 + 0x534) * fVar5 - fVar4 * *(float *)(param_1 + 0x530);
  *(undefined4 *)(param_1 + 0x54c) = 0;
  fVar1 = *(float *)(param_1 + 0x520);
  fVar2 = *(float *)(param_1 + 0x528);
  fVar3 = *(float *)(param_1 + 0x524);
  fVar4 = 1.0 / SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  *(float *)(param_1 + 0x520) = fVar4 * fVar1;
  *(float *)(param_1 + 0x524) = fVar4 * fVar3;
  *(float *)(param_1 + 0x528) = fVar4 * fVar2;
  fVar1 = *(float *)(param_1 + 0x530);
  fVar2 = *(float *)(param_1 + 0x534);
  fVar3 = *(float *)(param_1 + 0x538);
  fVar4 = 1.0 / SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  *(float *)(param_1 + 0x530) = fVar4 * fVar1;
  *(float *)(param_1 + 0x534) = fVar4 * fVar2;
  *(float *)(param_1 + 0x538) = fVar4 * fVar3;
  fVar1 = *(float *)(param_1 + 0x540);
  fVar2 = *(float *)(param_1 + 0x544);
  fVar3 = *(float *)(param_1 + 0x548);
  fVar4 = 1.0 / SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  *(float *)(param_1 + 0x540) = fVar4 * fVar1;
  *(float *)(param_1 + 0x544) = fVar4 * fVar2;
  *(float *)(param_1 + 0x548) = fVar4 * fVar3;
  return;
}

