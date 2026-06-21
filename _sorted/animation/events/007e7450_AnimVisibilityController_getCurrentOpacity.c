// addr: 0x007e7450
// name: AnimVisibilityController_getCurrentOpacity
// subsystem: common/animation/events
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: float AnimVisibilityController_getCurrentOpacity(void * this) */

float __fastcall AnimVisibilityController_getCurrentOpacity(void *this)

{
  void *pvVar1;
  
                    /* Returns 1.0 when forced visible, otherwise reads the current
                       opacity/visibility value from the attached animation controller state when
                       present. */
  if (*(char *)((int)this + 0x10) != '\0') {
    return _DAT_0175b420;
  }
  pvVar1 = *(void **)((int)this + 0xc);
  if (pvVar1 != (void *)0x0) {
    if (*(int *)((int)pvVar1 + 0x14) == 0) {
      AnimationController_createRuntimeState(pvVar1);
    }
    if (*(int *)(*(int *)((int)pvVar1 + 0x14) + 0x44) != 0) {
      pvVar1 = *(void **)((int)this + 0xc);
      if (*(int *)((int)pvVar1 + 0x14) == 0) {
        AnimationController_createRuntimeState(pvVar1);
      }
      return *(float *)(*(int *)(*(int *)((int)pvVar1 + 0x14) + 0x44) + 0xd0);
    }
  }
  return 0.0;
}

