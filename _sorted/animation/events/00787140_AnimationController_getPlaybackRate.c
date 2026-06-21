// addr: 0x00787140
// name: AnimationController_getPlaybackRate
// subsystem: common/animation/events
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: float AnimationController_getPlaybackRate(void * this) */

float __fastcall AnimationController_getPlaybackRate(void *this)

{
                    /* Returns the float field at runtime-state offset 0x58 after lazy
                       initialization. */
  if (*(int *)((int)this + 0x14) == 0) {
    AnimationController_createRuntimeState(this);
    return *(float *)(*(int *)((int)this + 0x14) + 0x58);
  }
  return *(float *)(*(int *)((int)this + 0x14) + 0x58);
}

