// addr: 0x0080bda0
// name: SkyDefinition_sampleFloatTrack8
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


float10 __thiscall SkyDefinition_sampleFloatTrack8(int param_1,void *param_2)

{
  float *extraout_EAX;
  float in_stack_fffffff4;
  
                    /* Samples a wrapped SkyDefinition float animation track and returns the
                       interpolated scalar value. */
  FloatKeyTree_sampleWrappedPair
            ((void *)(param_1 + 0x1b5c),&stack0xfffffff4,param_2,in_stack_fffffff4);
  return ((float10)extraout_EAX[1] - (float10)*extraout_EAX) * (float10)extraout_EAX[2] +
         (float10)*extraout_EAX;
}

