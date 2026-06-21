// addr: 0x00793890
// name: FloatKeyTree_sampleInterpolated
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: float FloatKeyTree_sampleInterpolated(void * tree) */

float __thiscall FloatKeyTree_sampleInterpolated(void *this,void *tree)

{
  float *extraout_EAX;
  float in_stack_fffffff4;
  
                    /* Samples a wrapped float key tree and linearly interpolates between the
                       returned endpoints using the returned blend factor. */
  FloatKeyTree_sampleWrappedPair
            ((void *)((int)this + 0x1eec),&stack0xfffffff4,tree,in_stack_fffffff4);
  return (extraout_EAX[1] - *extraout_EAX) * extraout_EAX[2] + *extraout_EAX;
}

