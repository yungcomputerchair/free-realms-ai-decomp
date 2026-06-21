// addr: 0x0085da20
// name: GuiPropertyDataSource_PropertySetFilter_setPrimaryPropertySet
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool GuiPropertyDataSource_PropertySetFilter_setPrimaryPropertySet(void *
   this, void * propertySet) */

bool __thiscall
GuiPropertyDataSource_PropertySetFilter_setPrimaryPropertySet(void *this,void *propertySet)

{
  int iVar1;
  
                    /* Clears the current primary property set, optionally inserts a new one into
                       the filter set if not already present, then rebuilds shared properties.
                       Returns whether the set changed. */
  iVar1 = *(int *)((int)this + 0x1c);
  if (iVar1 != 0) {
    FUN_0085bf70(*(undefined4 *)(iVar1 + 8));
    FUN_0085bf70(*(undefined4 *)(iVar1 + 0xc));
    (**(code **)(*(int *)((int)this + 0x18) + 0xc))(iVar1);
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  if (propertySet != (void *)0x0) {
    if (*(int *)((int)this + 0x20) == 1) {
      iVar1 = FUN_0085c3f0(&propertySet);
      if (iVar1 != 0) {
        return false;
      }
    }
    FUN_0085cc60(&propertySet);
  }
  GuiPropertyDataSource_PropertySetFilter_rebuildSharedProperties(this);
  return true;
}

