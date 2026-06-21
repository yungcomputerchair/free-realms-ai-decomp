// addr: 0x013dccc0
// name: FUN_013dccc0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_013dccc0(int param_1,undefined4 param_2)

{
  bool bVar1;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  if (*(int *)(param_1 + 0xc) == 0) {
    bVar1 = NamedProperty_isNameMutable((void *)0x0);
    if (!bVar1) {
      FUN_013ce2a0(param_2);
      *(undefined1 *)(param_1 + 9) = 1;
    }
  }
  return;
}

