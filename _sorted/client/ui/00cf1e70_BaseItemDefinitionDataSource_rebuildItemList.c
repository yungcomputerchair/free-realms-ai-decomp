// addr: 0x00cf1e70
// name: BaseItemDefinitionDataSource_rebuildItemList
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void BaseItemDefinitionDataSource_rebuildItemList(void * this) */

void __fastcall BaseItemDefinitionDataSource_rebuildItemList(void *this)

{
  undefined4 *puVar1;
  void *pvVar2;
  
                    /* Clears an attached list model, finds a BaseItemDefinitionDataSource by
                       name/id, iterates its item chain at +0x52c0 adding each item to the list,
                       stores the count, and notifies via vfunc +0x10. Exact widget class is
                       unknown. */
  (**(code **)(*(int *)((int)this + 0x34) + 0xc))();
  *(undefined4 *)((int)this + 0x368) = 0;
  pvVar2 = GuiDataSourceRegistry_findBaseItemDefinitionDataSource
                     (DAT_01be1090,*(char **)((int)this + 600));
  if (pvVar2 != (void *)0x0) {
    for (puVar1 = *(undefined4 **)((int)pvVar2 + 0x52c0); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)puVar1[0x32]) {
      (**(code **)(*(int *)((int)this + 0x34) + 4))(*puVar1);
      *(int *)((int)this + 0x368) = *(int *)((int)this + 0x368) + 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00cf1ed7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)this + 0x10))();
  return;
}

