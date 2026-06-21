// addr: 0x00cf6ed0
// name: TradeInventoryDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * TradeInventoryDataSource_ctor(void * this, void * owner, void * arg3,
   void * tradeContext) */

void * __thiscall
TradeInventoryDataSource_ctor(void *this,void *owner,void *arg3,void *tradeContext)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the TradeInventoryDataSource using the BaseClient.Trade.Inventory
                       data-source name, installs its vtables, stores owner/trade context, clears
                       state, and publishes the singleton/global pointer. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01610628;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00cb1bb0(PTR_s_BaseClient_Trade_Inventory_01b7e818,arg3);
  *(undefined ***)this = TradeInventoryDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = TradeInventoryDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = TradeInventoryDataSource::vftable;
  *(undefined ***)((int)this + 0x254) = TradeInventoryDataSource::vftable;
  *(void **)((int)this + 0x2dc) = owner;
  *(void **)((int)this + 0x2e0) = tradeContext;
  *(undefined4 *)((int)this + 0x2e4) = 0;
  *(undefined1 **)((int)this + 0x2d8) = &LAB_00cf6b70;
  DAT_01bf2070 = this;
  ExceptionList = local_c;
  return this;
}

