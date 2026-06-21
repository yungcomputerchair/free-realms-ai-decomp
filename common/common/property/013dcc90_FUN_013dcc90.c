// addr: 0x013dcc90
// name: FUN_013dcc90
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_013dcc90(int param_1,undefined4 param_2)

{
  bool bVar1;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  if (*(void **)(param_1 + 0xc) != (void *)0x0) {
    bVar1 = NamedProperty_isNameMutable(*(void **)(param_1 + 0xc));
    if (!bVar1) {
      FUN_013ce330(param_2);
      *(undefined1 *)(param_1 + 9) = 1;
    }
  }
  return;
}

