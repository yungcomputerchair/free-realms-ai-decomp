// addr: 0x00cf1a20
// name: BaseItemDefinitionDataSource_updateItemViewA
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void BaseItemDefinitionDataSource_updateItemViewA(void * this) */

void __fastcall BaseItemDefinitionDataSource_updateItemViewA(void *this)

{
                    /* Finds a BaseItemDefinitionDataSource by the name/id stored at this->field+600
                       and passes it to helper 00c96710. Exact view/update variant is unknown. */
  GuiDataSourceRegistry_findBaseItemDefinitionDataSource
            (DAT_01be1090,*(char **)(*(int *)((int)this + 0x10) + 600));
  FUN_00c96710();
  return;
}

