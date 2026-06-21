// addr: 0x007871f0
// name: AnimationController_setBlendInTime
// subsystem: common/animation/events
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AnimationController_setBlendInTime(void * this, float value_) */

void __thiscall AnimationController_setBlendInTime(void *this,float value_)

{
                    /* Sets the float field at runtime-state offset 0x50 after lazy initialization.
                        */
  if (*(int *)((int)this + 0x14) == 0) {
    AnimationController_createRuntimeState(this);
  }
  *(float *)(*(int *)((int)this + 0x14) + 0x50) = value_;
  return;
}

