// addr: 0x0085db20
// name: GuiPropertyDataSource_removeSharedPropertyAndNotify
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuiPropertyDataSource_removeSharedPropertyAndNotify(void * this, void *
   sharedProperty) */

void __thiscall GuiPropertyDataSource_removeSharedPropertyAndNotify(void *this,void *sharedProperty)

{
  bool bVar1;
  
                    /* Removes a shared property/filter entry via FUN_0085da20 and invokes vfunc
                       +0x10 to notify observers when removal succeeds. Class inferred from
                       neighboring SharedProperty list helpers. */
  bVar1 = GuiPropertyDataSource_PropertySetFilter_setPrimaryPropertySet
                    ((void *)((int)this + 0x254),sharedProperty);
  if (bVar1) {
    (**(code **)(*(int *)this + 0x10))();
  }
  return;
}

