// addr: 0x007bae10
// name: AnimationEventTrack_updateRange
// subsystem: common/animation/events
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AnimationEventTrack_updateRange(void * this, float newTime_) */

void __thiscall AnimationEventTrack_updateRange(void *this,float newTime_)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  
                    /* Walks animation event references between the previous time and new time,
                       firing newly reached events and resetting completed events when their end
                       time is crossed. */
  piVar2 = *(int **)((int)this + 8);
  while (piVar3 = piVar2, piVar3 != (int *)0x0) {
    piVar2 = (int *)piVar3[7];
    if ((*(float *)((int)this + 0x18) <= (float)piVar3[1]) && ((float)piVar3[1] < newTime_)) {
      AnimationEvent_fireIfActive((void *)*piVar3,*(void **)((int)this + 0x1c));
    }
    fVar1 = (float)piVar3[2];
    if (((DAT_01762a30 <= fVar1) && (*(float *)((int)this + 0x18) <= fVar1)) && (fVar1 < newTime_))
    {
      piVar3 = (int *)*piVar3;
      if ((*(ushort *)(piVar3 + 3) >> 0xe & 1) != 0) {
        *(ushort *)(piVar3 + 3) = *(ushort *)(piVar3 + 3) & 0xbfff;
        (**(code **)(*piVar3 + 0x14))();
      }
    }
  }
  *(float *)((int)this + 0x18) = newTime_;
  return;
}

