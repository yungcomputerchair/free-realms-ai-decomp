// addr: 0x00cf22e0
// name: CoinStoreDataSource_ActiveFilters_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CoinStoreDataSource_ActiveFilters_ctor(void * this, void * owner) */

void * __thiscall CoinStoreDataSource_ActiveFilters_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the CoinStore ActiveFilters data source, installs vtables,
                       initializes against the CoinStoreItems table, and clears active filter state.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0160fe86;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,owner);
  local_4 = 0;
  *(undefined ***)this = CoinStoreDataSource::ActiveFilters::vftable;
  *(undefined ***)((int)this + 0x30) = CoinStoreDataSource::ActiveFilters::vftable;
  *(undefined ***)((int)this + 0x34) = CoinStoreDataSource::ActiveFilters::vftable;
  FUN_00725ee0(PTR_s_BaseClient_CoinStore_CoinStoreIt_01b7d9c8);
  *(undefined4 *)((int)this + 0x368) = 0;
  ExceptionList = local_c;
  return this;
}

