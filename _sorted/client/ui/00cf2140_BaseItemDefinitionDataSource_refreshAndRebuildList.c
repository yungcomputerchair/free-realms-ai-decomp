// addr: 0x00cf2140
// name: BaseItemDefinitionDataSource_refreshAndRebuildList
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void BaseItemDefinitionDataSource_refreshAndRebuildList(void * this) */

void __fastcall BaseItemDefinitionDataSource_refreshAndRebuildList(void *this)

{
                    /* Finds the BaseItemDefinitionDataSource selected by a stored name/id,
                       clears/reloads its item chain via helper 00c96790, then rebuilds the bound
                       item list. Exact widget class is unknown. */
  GuiDataSourceRegistry_findBaseItemDefinitionDataSource
            (DAT_01be1090,*(char **)(*(int *)((int)this + 0x10) + 600));
  FUN_00c96790();
  BaseItemDefinitionDataSource_rebuildItemList(*(void **)((int)this + 0x10));
  return;
}

