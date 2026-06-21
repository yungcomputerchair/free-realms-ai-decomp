// addr: 0x009a40a0
// name: StoreBundlesList_rebuildFromDataSource
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StoreBundlesList_rebuildFromDataSource(void * this) */

void __fastcall StoreBundlesList_rebuildFromDataSource(void *this)

{
  undefined4 *puVar1;
  void *pvVar2;
  
                    /* Clears a UI/list model, finds the StoreBundles data source by name at
                       this+0xc, iterates its bundle chain at +0x12a8, appends each bundle, and
                       records the count at +0x11c. Exact widget class is unknown. */
  (**(code **)(*(int *)((int)this + -0x220) + 0xc))();
  *(undefined4 *)((int)this + 0x11c) = 0;
  pvVar2 = GuiDataSourceRegistry_findStoreBundles(DAT_01be1090,*(char **)((int)this + 0xc));
  if (pvVar2 != (void *)0x0) {
    for (puVar1 = *(undefined4 **)((int)pvVar2 + 0x12a8); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)puVar1[0x32]) {
      (**(code **)(*(int *)((int)this + -0x220) + 4))(*puVar1);
      *(int *)((int)this + 0x11c) = *(int *)((int)this + 0x11c) + 1;
    }
  }
  return;
}

