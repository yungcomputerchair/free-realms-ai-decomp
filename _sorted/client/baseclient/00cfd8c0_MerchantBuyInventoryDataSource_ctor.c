// addr: 0x00cfd8c0
// name: MerchantBuyInventoryDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MerchantBuyInventoryDataSource_ctor(void * this, void * owner) */

void * __thiscall MerchantBuyInventoryDataSource_ctor(void *this,void *owner)

{
  void *in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.MerchantBuyInventoryData inventory data source from
                       BaseInventoryDataSource, installs merchant buy vtables, and stores owner. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01611298;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  BaseInventoryDataSource_ctor
            (this,owner,in_stack_00000008,PTR_s_BaseClient_MerchantBuyInventoryD_01b7f450);
  *(undefined ***)this = MerchantBuyInventoryDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = MerchantBuyInventoryDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = MerchantBuyInventoryDataSource::vftable;
  *(undefined ***)((int)this + 0x254) = MerchantBuyInventoryDataSource::vftable;
  *(void **)((int)this + 0x2e8) = owner;
  ExceptionList = local_c;
  return this;
}

