// addr: 0x0098e0e0
// name: NameValueObserver_notifyValueChanged
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool NameValueObserver_notifyValueChanged(char * observerName, char *
   dataSourceName) */

bool NameValueObserver_notifyValueChanged(char *observerName,char *dataSourceName)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
                    /* Finds/creates a GuiDsValue data source, searches its observers for a
                       NameValueObserver, validates both names, invokes the observer callback, and
                       deletes/releases it. Returns true when an observer was notified. */
  if ((((observerName != (char *)0x0) && (dataSourceName != (char *)0x0)) &&
      (pvVar4 = GuiDataSourceRegistry_getOrCreateDataSource(dataSourceName), pvVar4 != (void *)0x0))
     && (iVar5 = FUN_00d8d382(pvVar4,0,&GuiDataSource::RTTI_Type_Descriptor,
                              &GuiDsValue::RTTI_Type_Descriptor,0), iVar5 != 0)) {
    puVar1 = *(undefined4 **)(iVar5 + 0xc);
    puVar2 = (undefined4 *)0x0;
    while (puVar3 = puVar1, puVar3 != (undefined4 *)0x0) {
      puVar2 = puVar3;
      puVar1 = (undefined4 *)puVar3[3];
    }
    while (puVar2 != (undefined4 *)0x0) {
      piVar6 = (int *)FUN_00d8d382(*puVar2,0,&GuiDataSourceObserver::RTTI_Type_Descriptor,
                                   &NameValueObserver::RTTI_Type_Descriptor,0);
      if (((piVar6 != (int *)0x0) && (iVar7 = FUN_0079e880(observerName), iVar7 == 0)) &&
         (iVar7 = FUN_0079e880(dataSourceName), iVar7 == 0)) {
        (**(code **)(*piVar6 + 0x14))(iVar5);
        (**(code **)(*piVar6 + 4))(1);
        return true;
      }
      puVar1 = (undefined4 *)puVar2[4];
      if (puVar1 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar1 = puVar2;
        while ((puVar2 = puVar3, puVar2 != (undefined4 *)0x0 && ((undefined4 *)puVar2[4] == puVar1))
              ) {
          puVar1 = puVar2;
          puVar3 = (undefined4 *)puVar2[2];
        }
      }
      else {
        puVar2 = puVar1;
        for (puVar1 = (undefined4 *)puVar1[3]; puVar1 != (undefined4 *)0x0;
            puVar1 = (undefined4 *)puVar1[3]) {
          puVar2 = puVar1;
        }
      }
    }
  }
  return false;
}

