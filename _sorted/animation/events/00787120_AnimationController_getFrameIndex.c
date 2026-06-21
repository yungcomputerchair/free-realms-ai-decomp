// addr: 0x00787120
// name: AnimationController_getFrameIndex
// subsystem: common/animation/events
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int AnimationController_getFrameIndex(void * this) */

int __fastcall AnimationController_getFrameIndex(void *this)

{
                    /* Returns the upper 24 bits of the runtime-state field at offset 0x60 after
                       lazy initialization. */
  if (*(int *)((int)this + 0x14) == 0) {
    AnimationController_createRuntimeState(this);
  }
  return *(uint *)(*(int *)((int)this + 0x14) + 0x60) >> 8;
}

