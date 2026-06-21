// addr: 0x009fd930
// name: CollectionCategoryManager_CollectionCategoryDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CollectionCategoryManager_CollectionCategoryDataSource_ctor(void *
   this, void * owner) */

void * __thiscall
CollectionCategoryManager_CollectionCategoryDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.CollectionCategory data source, installs
                       CollectionCategoryDataSource vtables, and stores the owner. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015aa348;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_CollectionCategory_01b4a8fc);
  *(undefined ***)this = CollectionCategoryManager::CollectionCategoryDataSource::vftable;
  *(undefined ***)((int)this + 0x30) =
       CollectionCategoryManager::CollectionCategoryDataSource::vftable;
  *(undefined ***)((int)this + 0x34) =
       CollectionCategoryManager::CollectionCategoryDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  ExceptionList = local_c;
  return this;
}

