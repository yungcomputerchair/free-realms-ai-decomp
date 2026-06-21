// addr: 0x00ce7380
// name: ItemFilterDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ItemFilterDataSource_ctor(void * this, void * owner) */

void * __thiscall ItemFilterDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.ItemFilters data source, stores owner, installs
                       vtables, and populates filter items via its refresh helper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0160ee28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_ItemFilters_01b7c0b8);
  local_4 = 0;
  *(void **)((int)this + 0x254) = owner;
  *(undefined ***)this = ItemFilterDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = ItemFilterDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = ItemFilterDataSource::vftable;
  inventoryDataSource_refreshVisibleItems(this);
  ExceptionList = local_c;
  return this;
}

