// addr: 0x0080c730
// name: SkyDefinition_sampleTintedTextureAndDestroy
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


float * __thiscall
SkyDefinition_sampleTintedTextureAndDestroy(int param_1,float *param_2,int param_3)

{
  float fVar1;
  undefined1 local_90 [16];
  int local_80;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  int local_50;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
                    /* Samples a tinted-texture track and destroys the temporary blended texture
                       object afterward. */
  local_14 = 0xffffffff;
  puStack_18 = &LAB_015684b8;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_0080a050((void *)(param_1 + 0x1fd0),local_90,param_3,
               (float)(DAT_01b839d8 ^ (uint)&stack0xffffff60));
  fVar1 = (*(float *)(local_50 + 0x30) - *(float *)(local_80 + 0x30)) * local_30 +
          *(float *)(local_80 + 0x30);
  *param_2 = fVar1 * (local_70 + local_30 * (local_40 - local_70));
  param_2[1] = fVar1 * (fStack_6c + local_30 * (fStack_3c - fStack_6c));
  param_2[2] = fVar1 * (fStack_68 + local_30 * (fStack_38 - fStack_68));
  param_2[3] = fVar1 * (fStack_64 + local_30 * (fStack_34 - fStack_64));
  local_14 = 0xffffffff;
  SkyDefinition_TintedTexturePair_dtor();
  ExceptionList = local_1c;
  return param_2;
}

