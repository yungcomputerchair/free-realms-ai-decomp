// addr: 0x01138410
// name: FUN_01138410
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_01138410(int *param_1,float *param_2)

{
  float *pfVar1;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  pfVar1 = (float *)(**(code **)(*param_1 + 0x18))();
  if (DAT_01838430 <
      (*pfVar1 - *param_2) * (*pfVar1 - *param_2) +
      (pfVar1[2] - param_2[2]) * (pfVar1[2] - param_2[2]) +
      (pfVar1[1] - param_2[1]) * (pfVar1[1] - param_2[1])) {
    FUN_01152bb0(param_2);
    FUN_01137e70();
  }
  return;
}

