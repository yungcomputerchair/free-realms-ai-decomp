// addr: 0x00a73d60
// name: StatDefinitionsDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * StatDefinitionsDataSource_ctor(void * this, void * owner) */

void * __fastcall StatDefinitionsDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.StatDefinitions data source by running GuiDsTable
                       construction and installing StatDefinitionsDataSource vtables. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015ba6f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_StatDefinitions_01b5085c);
  *(undefined ***)this = StatDefinitionsDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = StatDefinitionsDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = StatDefinitionsDataSource::vftable;
  ExceptionList = local_c;
  return this;
}

