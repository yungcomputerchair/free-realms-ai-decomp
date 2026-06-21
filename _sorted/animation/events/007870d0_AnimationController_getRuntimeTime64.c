// addr: 0x007870d0
// name: AnimationController_getRuntimeTime64
// subsystem: common/animation/events
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined8 * __thiscall AnimationController_getRuntimeTime64(void *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
                    /* Lazily initializes runtime state, obtains an 8-byte time/value through a
                       helper, and writes it to the output pointer. */
  if (*(int *)((int)param_1 + 0x14) == 0) {
    AnimationController_createRuntimeState(param_1);
  }
  uVar1 = FUN_00d83cc6();
  *param_2 = uVar1;
  return param_2;
}

