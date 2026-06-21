// addr: 0x007871d0
// name: AnimationController_getBlendInTime
// subsystem: common/animation/events
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: float AnimationController_getBlendInTime(void * this) */

float __fastcall AnimationController_getBlendInTime(void *this)

{
                    /* Returns the float field at runtime-state offset 0x50 after lazy
                       initialization. */
  if (*(int *)((int)this + 0x14) == 0) {
    AnimationController_createRuntimeState(this);
    return *(float *)(*(int *)((int)this + 0x14) + 0x50);
  }
  return *(float *)(*(int *)((int)this + 0x14) + 0x50);
}

