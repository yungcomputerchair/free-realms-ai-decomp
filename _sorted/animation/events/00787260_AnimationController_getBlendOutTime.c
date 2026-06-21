// addr: 0x00787260
// name: AnimationController_getBlendOutTime
// subsystem: common/animation/events
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: float AnimationController_getBlendOutTime(void * this) */

float __fastcall AnimationController_getBlendOutTime(void *this)

{
                    /* Returns the float field at runtime-state offset 0x5c after lazy
                       initialization. */
  if (*(int *)((int)this + 0x14) == 0) {
    AnimationController_createRuntimeState(this);
    return *(float *)(*(int *)((int)this + 0x14) + 0x5c);
  }
  return *(float *)(*(int *)((int)this + 0x14) + 0x5c);
}

