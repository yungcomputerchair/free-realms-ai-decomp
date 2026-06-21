// addr: 0x00d38260
// name: TimedRange_dispatchFrameSpan
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void TimedRange_dispatchFrameSpan(void * timeline, float startTime_, float
   endTime_) */

void __thiscall
TimedRange_dispatchFrameSpan(void *this,void *timeline,float startTime_,float endTime_)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  
                    /* Converts start/end times to frame indices using a frame-duration value and
                       dispatches the resulting integer span. */
  fVar3 = _DAT_0175b420 / *(float *)(*(int *)((int)this + 0x10) + 0xc4df8);
  CRT_floor((double)(fVar3 * (float)timeline));
  uVar1 = FUN_00d83c90();
  CRT_floor((double)(fVar3 * startTime_));
  uVar2 = FUN_00d83c90(uVar1);
  FUN_00d3bec0(uVar2,uVar1);
  return;
}

