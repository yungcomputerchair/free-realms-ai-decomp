// addr: 0x007871a0
// name: FUN_007871a0
// subsystem: common/animation/events
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_007871a0(void *param_1,undefined1 param_2)

{
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  if (*(int *)((int)param_1 + 0x14) == 0) {
    AnimationController_createRuntimeState(param_1);
    *(undefined1 *)(*(int *)((int)param_1 + 0x14) + 0x60) = param_2;
    return;
  }
  *(undefined1 *)(*(int *)((int)param_1 + 0x14) + 0x60) = param_2;
  return;
}

