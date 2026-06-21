// addr: 0x0080c810
// name: SkyDefinition_sampleTwoTintedTextureTracks
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


float * __thiscall
SkyDefinition_sampleTwoTintedTextureTracks(int param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined1 local_90 [16];
  int local_80;
  int local_50;
  float local_30;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
                    /* Samples two tinted-texture tracks in sequence and destroys their temporary
                       blend objects. */
  local_14 = 0xffffffff;
  puStack_18 = &LAB_015684e8;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_0080a050((void *)(param_1 + 0x1fd0),local_90,param_3,
               (float)(DAT_01b839d8 ^ (uint)&stack0xffffff40));
  local_14 = 0;
  local_a0 = *(float *)(local_80 + 0x20);
  fStack_9c = *(float *)(local_80 + 0x24);
  fStack_98 = *(float *)(local_80 + 0x28);
  fStack_94 = *(float *)(local_80 + 0x2c);
  fVar5 = local_a0 + local_30 * (*(float *)(local_50 + 0x20) - local_a0);
  fVar6 = fStack_9c + local_30 * (*(float *)(local_50 + 0x24) - fStack_9c);
  fVar7 = fStack_98 + local_30 * (*(float *)(local_50 + 0x28) - fStack_98);
  fVar8 = fStack_94 + local_30 * (*(float *)(local_50 + 0x2c) - fStack_94);
  pfVar4 = (float *)SkyDefinition_sampleTintedTextureAndDestroy(&local_a0,param_3);
  fVar1 = pfVar4[1];
  fVar2 = pfVar4[2];
  fVar3 = pfVar4[3];
  *param_2 = fVar5 * *pfVar4;
  param_2[1] = fVar6 * fVar1;
  param_2[2] = fVar7 * fVar2;
  param_2[3] = fVar8 * fVar3;
  local_14 = 0xffffffff;
  SkyDefinition_TintedTexturePair_dtor();
  ExceptionList = local_1c;
  return param_2;
}

