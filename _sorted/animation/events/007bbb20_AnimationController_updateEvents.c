// addr: 0x007bbb20
// name: AnimationController_updateEvents
// subsystem: common/animation/events
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AnimationController_updateEvents(void * this) */

void __fastcall AnimationController_updateEvents(void *this)

{
  int *piVar1;
  int iVar2;
  void *this_00;
  char cVar3;
  int *piVar4;
  int iVar5;
  float newTime_;
  float newTime__00;
  
                    /* Updates animation-controller event state for the current time, enables
                       eligible effect references, handles wrap/rewind, and advances the event track
                       to the current time. */
  if (*(int *)((int)this + 0x14) == 0) {
    AnimationController_createRuntimeState(this);
  }
  for (piVar1 = *(int **)(*(int *)((int)this + 0x14) + 0x20); piVar1 != (int *)0x0;
      piVar1 = (int *)piVar1[2]) {
    piVar4 = (int *)(**(code **)(*piVar1 + 0xc))();
    cVar3 = (**(code **)(*piVar4 + 0x1c))();
    if ((cVar3 != '\0') && (cVar3 = (**(code **)(*piVar4 + 0x14))(), cVar3 == '\0')) {
      (**(code **)(*piVar4 + 8))(1,1);
    }
  }
  if ((*(int *)((int)this + 0x14) == 0) ||
     (iVar2 = *(int *)(*(int *)((int)this + 0x14) + 0x44), iVar2 == 0)) {
    newTime_ = 0.0;
  }
  else {
    iVar5 = (**(code **)(**(int **)(iVar2 + 0x18) + 0x14))();
    newTime_ = fRam0000001c;
    if (iVar5 == 0) {
      newTime_ = *(float *)(*(int *)(iVar2 + 0x18) + 0x1c);
    }
  }
  this_00 = *(void **)((int)this + 0x14);
  if (newTime_ < *(float *)((int)this_00 + 0x54)) {
    if ((this_00 == (void *)0x0) || (*(int *)((int)this_00 + 0x40) == 0)) {
      newTime__00 = 0.0;
    }
    else {
      newTime__00 = *(float *)(*(int *)((int)this_00 + 0x40) + 0x28);
    }
    AnimationEventTrack_updateRange(this_00,newTime__00);
    FUN_007732b0();
  }
  *(float *)(*(int *)((int)this + 0x14) + 0x54) = newTime_;
  AnimationEventTrack_updateRange(*(void **)((int)this + 0x14),newTime_);
  return;
}

