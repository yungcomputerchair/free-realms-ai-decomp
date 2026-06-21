// addr: 0x009a3520
// name: StoreBundles_selectBundleById
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool StoreBundles_selectBundleById(void * this, int bundleId_, char *
   dataSourceName) */

bool __thiscall StoreBundles_selectBundleById(void *this,int bundleId_,char *dataSourceName)

{
  int iVar1;
  int *piVar2;
  
                    /* Verifies a bundle id exists in a hash table, finds the StoreBundles data
                       source, updates its selected bundle id when changed, marks it dirty, notifies
                       it, and refreshes an attached UI object. Class inferred from StoreBundles
                       lookup. */
  iVar1 = *(int *)(*(int *)(*(int *)((int)this + 0x9c) + 0x1cc) + 0x34 + (bundleId_ & 0x1fU) * 4);
  while( true ) {
    if (iVar1 == 0) {
      return false;
    }
    if (*(int *)(iVar1 + 0x14) == bundleId_) break;
    iVar1 = *(int *)(iVar1 + 0x18);
  }
  piVar2 = GuiDataSourceRegistry_findStoreBundles(DAT_01be1090,dataSourceName);
  if (piVar2 == (int *)0x0) {
    return false;
  }
  if (piVar2[0x4b5] != bundleId_) {
    piVar2[0x4b5] = bundleId_;
    *(undefined1 *)(piVar2 + 0x4a6) = 1;
    (**(code **)(*piVar2 + 0x10))();
  }
  (**(code **)(**(int **)((int)this + 0x30) + 0x10))();
  return true;
}

