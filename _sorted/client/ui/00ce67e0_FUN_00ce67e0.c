// addr: 0x00ce67e0
// name: FUN_00ce67e0
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_00ce67e0(int *param_1)

{
                    /* Runs a local update/destructor helper 00ce66a0 and then dispatches vfunc
                       +0x10, likely notifying or deleting the owning UI object. Class identity is
                       unknown. */
  BaseItemDefinitionCategoriesDataSource_rebuildTree(param_1);
                    /* WARNING: Could not recover jumptable at 0x00ce67f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}

