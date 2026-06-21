// addr: 0x0080ba70
// name: SkyDefinition_lerpVector4
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


float * SkyDefinition_lerpVector4(float *param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  undefined1 local_40 [60];
  
                    /* Computes an interpolated four-float vector from a SkyDefinition key pair and
                       blend factor returned by FUN_0080a350. */
  pfVar8 = (float *)SkyDefinition_sampleVector4Curve(local_40,param_2);
  fVar2 = pfVar8[1];
  fVar3 = pfVar8[2];
  fVar4 = pfVar8[3];
  fVar5 = pfVar8[5];
  fVar6 = pfVar8[6];
  fVar7 = pfVar8[7];
  fVar1 = pfVar8[8];
  *param_1 = (pfVar8[4] - *pfVar8) * fVar1 + *pfVar8;
  param_1[1] = (fVar5 - fVar2) * fVar1 + fVar2;
  param_1[2] = (fVar6 - fVar3) * fVar1 + fVar3;
  param_1[3] = (fVar7 - fVar4) * fVar1 + fVar4;
  return param_1;
}

