// addr: 0x00cf2170
// name: BaseItemDefinitionDataSource_markAndRebuildList
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void BaseItemDefinitionDataSource_markAndRebuildList(void * this) */

void __fastcall BaseItemDefinitionDataSource_markAndRebuildList(void *this)

{
                    /* Finds the BaseItemDefinitionDataSource selected by a stored name/id,
                       marks/flags it through helper 00c93340, then rebuilds the bound item list.
                       Exact widget class is unknown. */
  GuiDataSourceRegistry_findBaseItemDefinitionDataSource
            (DAT_01be1090,*(char **)(*(int *)((int)this + 0x10) + 600));
  FUN_00c93340();
  BaseItemDefinitionDataSource_rebuildItemList(*(void **)((int)this + 0x10));
  return;
}

