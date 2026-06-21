// addr: 0x00786690
// name: AnimationController_getRuntimeState
// subsystem: common/animation/events
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall AnimationController_getRuntimeState(void *param_1)

{
                    /* Lazily creates the animation runtime state object at offset 0x14 if needed
                       and returns it. */
  if (*(int *)((int)param_1 + 0x14) == 0) {
    AnimationController_createRuntimeState(param_1);
  }
  return *(undefined4 *)((int)param_1 + 0x14);
}

