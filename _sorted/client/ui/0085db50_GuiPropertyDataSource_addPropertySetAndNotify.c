// addr: 0x0085db50
// name: GuiPropertyDataSource_addPropertySetAndNotify
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuiPropertyDataSource_addPropertySetAndNotify(void * this, void *
   propertySet) */

void __thiscall GuiPropertyDataSource_addPropertySetAndNotify(void *this,void *propertySet)

{
  int iVar1;
  
                    /* Adds a property set to the property data source filter if absent, rebuilds
                       shared properties, and invokes vfunc +0x10 to notify observers. Class
                       inferred from PropertySetFilter helpers. */
  iVar1 = FUN_0085c3f0(&propertySet);
  if (iVar1 == 0) {
    FUN_0085cc60(&propertySet);
    GuiPropertyDataSource_PropertySetFilter_rebuildSharedProperties((void *)((int)this + 0x254));
    (**(code **)(*(int *)this + 0x10))();
  }
  return;
}

