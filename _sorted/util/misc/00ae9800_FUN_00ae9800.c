// addr: 0x00ae9800
// name: FUN_00ae9800
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


float10 __fastcall FUN_00ae9800(int *param_1)

{
  float10 fVar1;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  if ((int *)*param_1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ae980b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar1 = (float10)(**(code **)(*(int *)*param_1 + 0x28))();
    return fVar1;
  }
  return (float10)0.0;
}

