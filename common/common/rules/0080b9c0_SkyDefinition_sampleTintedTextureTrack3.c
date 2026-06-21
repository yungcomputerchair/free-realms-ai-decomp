// addr: 0x0080b9c0
// name: SkyDefinition_sampleTintedTextureTrack3
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall SkyDefinition_sampleTintedTextureTrack3(int param_1,void *param_2,int param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* SEH wrapper for a fourth SkyDefinition tinted-texture animation track. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01568349;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0080a050((void *)(param_1 + 0x2280),param_2,param_3,
               (float)(DAT_01b839d8 ^ (uint)&stack0xffffffec));
  ExceptionList = local_c;
  return param_2;
}

