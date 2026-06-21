// addr: 0x008065e0
// name: SkyDefinition_AnimatedTransform_differs
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 SkyDefinition_AnimatedTransform_differs(int param_1,int param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  
                    /* Compares a SkyDefinition animation key/transform record: resource id, vector
                       floats, scalar floats, and nested transform; returns 0 if equal and 1 if
                       different. */
  if ((((*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10)) &&
       (auVar1._4_4_ = -(uint)(*(float *)(param_1 + 0x24) == *(float *)(param_2 + 0x24)),
       auVar1._0_4_ = -(uint)(*(float *)(param_1 + 0x20) == *(float *)(param_2 + 0x20)),
       auVar1._8_4_ = -(uint)(*(float *)(param_1 + 0x28) == *(float *)(param_2 + 0x28)),
       auVar1._12_4_ = -(uint)(*(float *)(param_1 + 0x2c) == *(float *)(param_2 + 0x2c)),
       iVar2 = movmskps(*(int *)(param_1 + 0x10),auVar1), iVar2 == 0xf)) &&
      (*(float *)(param_1 + 0x34) == *(float *)(param_2 + 0x34))) &&
     ((*(float *)(param_1 + 0x30) == *(float *)(param_2 + 0x30) &&
      (*(float *)(param_1 + 0x38) == *(float *)(param_2 + 0x38))))) {
    iVar2 = AnimationKey_differsTransform7((void *)(param_1 + 0x40),(void *)(param_2 + 0x40));
    if ((char)iVar2 == '\0') {
      return 0;
    }
  }
  return 1;
}

