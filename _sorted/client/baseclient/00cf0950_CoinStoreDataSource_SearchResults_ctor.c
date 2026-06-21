// addr: 0x00cf0950
// name: CoinStoreDataSource_SearchResults_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CoinStoreDataSource_SearchResults_ctor(void * this, void * owner) */

void * __thiscall CoinStoreDataSource_SearchResults_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a CoinStore SearchResults data source by first constructing
                       CoinStoreItems and then installing SearchResults vtables. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0160fcd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CoinStoreDataSource_CoinStoreItems_ctor(this,owner);
  *(undefined ***)this = CoinStoreDataSource::SearchResults::vftable;
  *(undefined ***)((int)this + 0x30) = CoinStoreDataSource::SearchResults::vftable;
  *(undefined ***)((int)this + 0x34) = CoinStoreDataSource::SearchResults::vftable;
  ExceptionList = local_c;
  return this;
}

