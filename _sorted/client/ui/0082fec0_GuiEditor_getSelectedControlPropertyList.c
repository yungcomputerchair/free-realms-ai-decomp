// addr: 0x0082fec0
// name: GuiEditor_getSelectedControlPropertyList
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * GuiEditor_getSelectedControlPropertyList(void) */

void * GuiEditor_getSelectedControlPropertyList(void)

{
  char cVar1;
  int iVar2;
  int local_4;
  
                    /* Looks up the global data source named App.UI.SelectedControl.PropertyList,
                       casts it to GuiPropertyDataSource, and returns its property-list member at
                       +0x254. Returns null if lookup or cast fails. */
  local_4 = 0;
  cVar1 = FUN_008195a0("App.UI.SelectedControl.PropertyList",&local_4);
  if ((((cVar1 != '\0') && (local_4 != 0)) &&
      (iVar2 = FUN_00d8d382(local_4,0,&GuiDataSource::RTTI_Type_Descriptor,
                            &GuiPropertyDataSource::RTTI_Type_Descriptor,0), iVar2 != 0)) &&
     ((void *)(iVar2 + 0x254) != (void *)0x0)) {
    return (void *)(iVar2 + 0x254);
  }
  return (void *)0x0;
}

