// addr: 0x009a4110
// name: StoreBundles_handleBundleAction
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool StoreBundles_handleBundleAction(void * this, int action_, void * arg) */

bool __thiscall StoreBundles_handleBundleAction(void *this,int action_,void *arg)

{
  int iVar1;
  void *pvVar2;
  
                    /* Looks up a bundle node from the StoreBundles data source and performs action
                       0 or 1 on it, dispatching to bundle helpers for inspect/select vs
                       argument-based action. Exact action names are unknown. */
  iVar1 = (**(code **)(*(int *)((int)this + 4) + 0x10))(action_);
  if (iVar1 != 0) {
    pvVar2 = GuiDataSourceRegistry_findStoreBundles(DAT_01be1090,*(char **)((int)this + 0x230));
    if (pvVar2 != (void *)0x0) {
      iVar1 = FUN_009987f0(iVar1);
      if (iVar1 != 0) {
        if (action_ == 0) {
          FUN_009969b0(iVar1);
        }
        else if (action_ == 1) {
          FUN_009a0e70(iVar1,arg);
          return true;
        }
        return true;
      }
    }
  }
  return false;
}

