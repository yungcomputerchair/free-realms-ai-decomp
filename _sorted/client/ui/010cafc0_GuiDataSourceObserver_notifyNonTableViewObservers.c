// addr: 0x010cafc0
// name: GuiDataSourceObserver_notifyNonTableViewObservers
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuiDataSourceObserver_notifyNonTableViewObservers(void * this) */

void __fastcall GuiDataSourceObserver_notifyNonTableViewObservers(void *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
                    /* Traverses observer entries and calls vfunc +0x18 on observers that are not
                       GuiDsTableView instances. It skips table-view observers based on RTTI cast.
                        */
  puVar1 = *(undefined4 **)((int)this + 0xc);
  puVar2 = (undefined4 *)0x0;
  while (puVar3 = puVar1, puVar3 != (undefined4 *)0x0) {
    puVar2 = puVar3;
    puVar1 = (undefined4 *)puVar3[3];
  }
  while (puVar2 != (undefined4 *)0x0) {
    iVar4 = FUN_00d8d382(*puVar2,0,&GuiDataSourceObserver::RTTI_Type_Descriptor,
                         &GuiDsTableView::RTTI_Type_Descriptor,0);
    if (iVar4 == 0) {
      (**(code **)(*(int *)*puVar2 + 0x18))();
    }
    puVar1 = (undefined4 *)puVar2[4];
    if (puVar1 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)puVar2[2];
      puVar1 = puVar2;
      while ((puVar2 = puVar3, puVar2 != (undefined4 *)0x0 && ((undefined4 *)puVar2[4] == puVar1)))
      {
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
  return;
}

