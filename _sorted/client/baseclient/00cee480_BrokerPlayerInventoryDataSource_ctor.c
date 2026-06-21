// addr: 0x00cee480
// name: BrokerPlayerInventoryDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * BrokerPlayerInventoryDataSource_ctor(void * this, void * owner) */

void * __thiscall BrokerPlayerInventoryDataSource_ctor(void *this,void *owner)

{
  void *in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the broker player inventory data source by initializing
                       BaseInventoryDataSource with BaseClient.Broker.PlayerInventoryItems,
                       installing broker inventory vtables, and storing owner. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0160f7e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  BaseInventoryDataSource_ctor
            (this,owner,in_stack_00000008,PTR_s_BaseClient_Broker_PlayerInventor_01b7d7a4);
  *(undefined ***)this = BrokerPlayerInventoryDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = BrokerPlayerInventoryDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = BrokerPlayerInventoryDataSource::vftable;
  *(undefined ***)((int)this + 0x254) = BrokerPlayerInventoryDataSource::vftable;
  *(void **)((int)this + 0x2e8) = owner;
  ExceptionList = local_c;
  return this;
}

