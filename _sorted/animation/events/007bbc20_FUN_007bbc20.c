// addr: 0x007bbc20
// name: FUN_007bbc20
// subsystem: common/animation/events
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_007bbc20(void *param_1)

{
  int *piVar1;
  int *piVar2;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  if ((*(uint *)((int)param_1 + 8) & 0x10) == 0) {
    *(uint *)((int)param_1 + 8) = *(uint *)((int)param_1 + 8) | 0x10;
    if (*(int *)((int)param_1 + 0x14) == 0) {
      AnimationController_createRuntimeState(param_1);
    }
    for (piVar1 = *(int **)(*(int *)((int)param_1 + 0x14) + 0x20); piVar1 != (int *)0x0;
        piVar1 = (int *)piVar1[2]) {
      piVar2 = (int *)(**(code **)(*piVar1 + 0xc))();
      (**(code **)(*piVar2 + 0x20))();
    }
  }
  return;
}

