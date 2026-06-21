// addr: 0x0085dae0
// name: GuiPropertyDataSource_PropertySetFilter_removePropertySet
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool GuiPropertyDataSource_PropertySetFilter_removePropertySet(void *
   propertySet) */

bool __fastcall GuiPropertyDataSource_PropertySetFilter_removePropertySet(void *propertySet)

{
  int iVar1;
  
                    /* Removes a property set from the filter's tree if present, rebuilds shared
                       properties, and returns true on removal. Decompiler lost the this parameter.
                        */
  iVar1 = FUN_0085c3f0(&stack0x00000004);
  if (iVar1 != 0) {
    FUN_0085cad0(iVar1);
    GuiPropertyDataSource_PropertySetFilter_rebuildSharedProperties(propertySet);
    return true;
  }
  return false;
}

