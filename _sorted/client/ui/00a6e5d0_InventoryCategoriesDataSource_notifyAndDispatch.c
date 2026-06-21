// addr: 0x00a6e5d0
// name: InventoryCategoriesDataSource_notifyAndDispatch
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void InventoryCategoriesDataSource_notifyAndDispatch(void * this) */

void __fastcall InventoryCategoriesDataSource_notifyAndDispatch(void *this)

{
                    /* Runs the InventoryCategoriesDataSource update helper and then dispatches
                       vfunc +0x10, likely notifying observers. Class inferred from neighboring
                       constructor/vtable. */
  InventoryCategoriesDataSource_rebuildTree(this);
                    /* WARNING: Could not recover jumptable at 0x00a6e5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)this + 0x10))();
  return;
}

