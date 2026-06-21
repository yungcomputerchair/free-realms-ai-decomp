// addr: 0x00787160
// name: AnimationController_setPlaybackRate
// subsystem: common/animation/events
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AnimationController_setPlaybackRate(void * this, float value_) */

void __thiscall AnimationController_setPlaybackRate(void *this,float value_)

{
                    /* Sets the float field at runtime-state offset 0x58 after lazy initialization.
                        */
  if (*(int *)((int)this + 0x14) == 0) {
    AnimationController_createRuntimeState(this);
  }
  *(float *)(*(int *)((int)this + 0x14) + 0x58) = value_;
  return;
}

