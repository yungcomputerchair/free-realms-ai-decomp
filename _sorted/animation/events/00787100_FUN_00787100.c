// addr: 0x00787100
// name: FUN_00787100
// subsystem: common/animation/events
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_00787100(void *param_1)

{
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  if (*(int *)((int)param_1 + 0x14) == 0) {
    AnimationController_createRuntimeState(param_1);
    return *(undefined4 *)(*(int *)((int)param_1 + 0x14) + 0x44);
  }
  return *(undefined4 *)(*(int *)((int)param_1 + 0x14) + 0x44);
}

