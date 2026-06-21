// addr: 0x010caf20
// name: GuiDataSource_notifyTableViewsAndRegister
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuiDataSource_notifyTableViewsAndRegister(void * this) */

void __fastcall GuiDataSource_notifyTableViewsAndRegister(void *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
                    /* Traverses data-source observers, calls the update callback on observers that
                       are GuiDsTableView instances, then registers/updates the data source in the
                       global registry. Used after table data changes. */
  puVar1 = *(undefined4 **)((int)this + 0xc);
  puVar2 = (undefined4 *)0x0;
  while (puVar3 = puVar1, puVar3 != (undefined4 *)0x0) {
    puVar2 = puVar3;
    puVar1 = (undefined4 *)puVar3[3];
  }
  while (puVar2 != (undefined4 *)0x0) {
    iVar4 = FUN_00d8d382(*puVar2,0,&GuiDataSourceObserver::RTTI_Type_Descriptor,
                         &GuiDsTableView::RTTI_Type_Descriptor,0);
    if (iVar4 != 0) {
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
  FUN_0081f480(this);
  return;
}

