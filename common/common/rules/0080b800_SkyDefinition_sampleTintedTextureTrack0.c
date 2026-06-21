// addr: 0x0080b800
// name: SkyDefinition_sampleTintedTextureTrack0
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall SkyDefinition_sampleTintedTextureTrack0(int param_1,void *param_2,int param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* SEH wrapper that samples a wrapped tinted-texture animation track via the
                       common TintedTexture blend sampler. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01568249;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0080a050((void *)(param_1 + 0xc),param_2,param_3,
               (float)(DAT_01b839d8 ^ (uint)&stack0xffffffec));
  ExceptionList = local_c;
  return param_2;
}

