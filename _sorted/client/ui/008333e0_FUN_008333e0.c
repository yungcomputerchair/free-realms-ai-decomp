// addr: 0x008333e0
// name: FUN_008333e0
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_008333e0(void *param_1)

{
  int *piVar1;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  piVar1 = *(int **)((int)param_1 + 0x3f0);
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    while (piVar1 != (int *)0x0) {
      FUN_008249c0(piVar1);
      piVar1 = *(int **)((int)param_1 + 0x3f0);
    }
    UiEditor_updateSelectedControlPropertyList(param_1);
    return;
  }
  return;
}

