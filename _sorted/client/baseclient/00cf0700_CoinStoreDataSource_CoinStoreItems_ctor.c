// addr: 0x00cf0700
// name: CoinStoreDataSource_CoinStoreItems_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CoinStoreDataSource_CoinStoreItems_ctor(void * this, void * owner) */

void * __thiscall CoinStoreDataSource_CoinStoreItems_ctor(void *this,void *owner)

{
  void *in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the CoinStoreItems item-definition data source by running the
                       BaseItemDefinitionDataSource initializer and installing CoinStoreItems
                       vtables. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0160fc48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  BaseItemDefinitionDataSource_ctor(this,owner,in_stack_00000008);
  *(undefined ***)this = CoinStoreDataSource::CoinStoreItems::vftable;
  *(undefined ***)((int)this + 0x30) = CoinStoreDataSource::CoinStoreItems::vftable;
  *(undefined ***)((int)this + 0x34) = CoinStoreDataSource::CoinStoreItems::vftable;
  ExceptionList = local_c;
  return this;
}

