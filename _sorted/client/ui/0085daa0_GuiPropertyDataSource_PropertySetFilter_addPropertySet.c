// addr: 0x0085daa0
// name: GuiPropertyDataSource_PropertySetFilter_addPropertySet
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool GuiPropertyDataSource_PropertySetFilter_addPropertySet(void *
   propertySet) */

bool __fastcall GuiPropertyDataSource_PropertySetFilter_addPropertySet(void *propertySet)

{
  int iVar1;
  
                    /* Adds a property set to the filter's tree if absent, rebuilds shared
                       properties, and returns true on insertion. Decompiler lost the this
                       parameter. */
  iVar1 = FUN_0085c3f0(&stack0x00000004);
  if (iVar1 == 0) {
    FUN_0085cc60(&stack0x00000004);
    GuiPropertyDataSource_PropertySetFilter_rebuildSharedProperties(propertySet);
    return true;
  }
  return false;
}

