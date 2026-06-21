// addr: 0x00cf11f0
// name: CoinStoreDataSource_PlayerSell_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CoinStoreDataSource_PlayerSell_ctor(void * this, void * owner) */

void * __thiscall CoinStoreDataSource_PlayerSell_ctor(void *this,void *owner)

{
  void *in_stack_00000008;
  void *in_stack_0000000c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the CoinStore PlayerSell inventory data source from
                       BaseInventoryDataSource and installs PlayerSell vtables. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0160fd38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  BaseInventoryDataSource_ctor(this,in_stack_00000008,in_stack_0000000c,owner);
  *(undefined ***)this = CoinStoreDataSource::PlayerSell::vftable;
  *(undefined ***)((int)this + 0x30) = CoinStoreDataSource::PlayerSell::vftable;
  *(undefined ***)((int)this + 0x34) = CoinStoreDataSource::PlayerSell::vftable;
  *(undefined ***)((int)this + 0x254) = CoinStoreDataSource::PlayerSell::vftable;
  ExceptionList = local_c;
  return this;
}

