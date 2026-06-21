// addr: 0x00cf2390
// name: CoinStoreDataSource_TransactionHistory_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CoinStoreDataSource_TransactionHistory_ctor(void * this, void * owner)
    */

void * __thiscall CoinStoreDataSource_TransactionHistory_ctor(void *this,void *owner)

{
  undefined4 in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the CoinStore TransactionHistory data source, stores owner,
                       initializes paging/status fields, and sets an enabled flag. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0160feb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,owner);
  *(undefined ***)this = CoinStoreDataSource::TransactionHistory::vftable;
  *(undefined ***)((int)this + 0x30) = CoinStoreDataSource::TransactionHistory::vftable;
  *(undefined ***)((int)this + 0x34) = CoinStoreDataSource::TransactionHistory::vftable;
  *(undefined4 *)((int)this + 0x254) = in_stack_00000008;
  *(undefined4 *)((int)this + 600) = 2;
  *(undefined4 *)((int)this + 0x25c) = 0;
  *(undefined1 *)((int)this + 0x260) = 1;
  ExceptionList = local_c;
  return this;
}

