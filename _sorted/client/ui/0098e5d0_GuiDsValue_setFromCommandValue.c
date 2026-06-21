// addr: 0x0098e5d0
// name: GuiDsValue_setFromCommandValue
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool GuiDsValue_setFromCommandValue(char * dataSourceName, void * valueArg) */

bool GuiDsValue_setFromCommandValue(char *dataSourceName,void *valueArg)

{
  void *pvVar1;
  int iVar2;
  
                    /* Finds/creates a GuiDsValue data source by name and writes a value extracted
                       from valueArg into it. Returns true if the value data source exists. */
  if (dataSourceName != (char *)0x0) {
    pvVar1 = GuiDataSourceRegistry_getOrCreateDataSource(dataSourceName);
    if (pvVar1 != (void *)0x0) {
      iVar2 = FUN_00d8d382(pvVar1,0,&GuiDataSource::RTTI_Type_Descriptor,
                           &GuiDsValue::RTTI_Type_Descriptor,0);
      if (iVar2 != 0) {
        FUN_00821b30(*(undefined4 *)((int)valueArg + 4),0);
        return true;
      }
    }
  }
  return false;
}

