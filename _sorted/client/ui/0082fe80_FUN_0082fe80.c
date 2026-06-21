// addr: 0x0082fe80
// name: FUN_0082fe80
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_0082fe80(void *param_1,uint param_2)

{
  int iVar1;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  iVar1 = *(int *)((int)param_1 + (param_2 & 0xf) * 4 + 0x3fc);
  if (iVar1 != 0) {
    while (*(uint *)(iVar1 + 0xc) != param_2) {
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        return;
      }
    }
    FUN_008249c0(iVar1);
    UiEditor_updateSelectedControlPropertyList(param_1);
  }
  return;
}

