// addr: 0x0084c7d0
// name: GuiDsTableBinding_setDataSource
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuiDsTableBinding_setDataSource(void * this, void * dataSource) */

void __thiscall GuiDsTableBinding_setDataSource(void *this,void *dataSource)

{
  undefined4 uVar1;
  
                    /* Casts the provided GuiDataSource to GuiDsTable, stores it at this+0x24, and
                       refreshes an attached control through vfunc +0x27c if present. Wrapper class
                       is inferred from GuiDsTable binding behavior. */
  uVar1 = 0;
  if (dataSource != (void *)0x0) {
    uVar1 = FUN_00d8d382(dataSource,0,&GuiDataSource::RTTI_Type_Descriptor,
                         &GuiDsTable::RTTI_Type_Descriptor,0);
  }
  *(undefined4 *)((int)this + 0x24) = uVar1;
  if (*(int **)((int)this + 0x30) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x30) + 0x27c))(1,0,0,1,0,0,0);
  }
  return;
}

