// addr: 0x008066c0
// name: SkyDefinition_TintedTexture_differs
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 SkyDefinition_TintedTexture_differs(int param_1,int param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  
                    /* Compares two SkyDefinition tinted-texture-like records: ref pointer, four
                       floats, second ref pointer, and four more floats; returns 0 if equal and 1 if
                       any field differs. */
  if ((((*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10)) &&
       (auVar1._4_4_ = -(uint)(*(float *)(param_1 + 0x24) == *(float *)(param_2 + 0x24)),
       auVar1._0_4_ = -(uint)(*(float *)(param_1 + 0x20) == *(float *)(param_2 + 0x20)),
       auVar1._8_4_ = -(uint)(*(float *)(param_1 + 0x28) == *(float *)(param_2 + 0x28)),
       auVar1._12_4_ = -(uint)(*(float *)(param_1 + 0x2c) == *(float *)(param_2 + 0x2c)),
       iVar3 = movmskps(*(int *)(param_1 + 0x10),auVar1), iVar3 == 0xf)) &&
      (*(int *)(param_1 + 0x40) == *(int *)(param_2 + 0x40))) &&
     (auVar2._4_4_ = -(uint)(*(float *)(param_1 + 0x54) == *(float *)(param_2 + 0x54)),
     auVar2._0_4_ = -(uint)(*(float *)(param_1 + 0x50) == *(float *)(param_2 + 0x50)),
     auVar2._8_4_ = -(uint)(*(float *)(param_1 + 0x58) == *(float *)(param_2 + 0x58)),
     auVar2._12_4_ = -(uint)(*(float *)(param_1 + 0x5c) == *(float *)(param_2 + 0x5c)),
     iVar3 = movmskps(param_1,auVar2), iVar3 == 0xf)) {
    return 0;
  }
  return 1;
}

