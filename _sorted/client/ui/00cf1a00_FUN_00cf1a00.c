// addr: 0x00cf1a00
// name: FUN_00cf1a00
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_00cf1a00(int param_1)

{
  void *pvVar1;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  pvVar1 = GuiDataSourceRegistry_findBaseItemDefinitionDataSource
                     (DAT_01be1090,*(char **)(*(int *)(param_1 + 0x10) + 600));
  return *(undefined4 *)((int)pvVar1 + 0x52b0);
}

