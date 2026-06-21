// addr: 0x00cefe40
// name: BrokerManager_registerBrokerDataSources
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void BrokerManager_registerBrokerDataSources(void * this) */

void __thiscall BrokerManager_registerBrokerDataSources(void *this)

{
  void *pvVar1;
  void *in_stack_00000004;
  undefined4 in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Creates broker GUI tables for BaseClient.Broker, BaseClient.Broker.MyItems,
                       and BaseClient.Broker.SearchItems, including broker item and player inventory
                       datasources. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0160fb21;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_Broker_01b7d7a0);
  *(undefined ***)this = BrokerDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = BrokerDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = BrokerDataSource::vftable;
  *(void **)((int)this + 0x254) = in_stack_00000004;
  *(undefined4 *)((int)this + 600) = in_stack_00000008;
  *(undefined4 *)((int)this + 0x268) = 0;
  *(undefined4 *)((int)this + 0x26c) = 0;
  *(undefined4 *)((int)this + 0x270) = 0;
  *(undefined4 *)((int)this + 0x260) = DAT_01bf1bd0;
  *(undefined4 *)((int)this + 0x264) = DAT_01bf1bd4;
  *(undefined4 *)((int)this + 0x280) = 0;
  *(undefined4 *)((int)this + 0x284) = 0;
  *(undefined4 *)((int)this + 0x288) = 0;
  *(undefined4 *)((int)this + 0x278) = DAT_01bf1bd0;
  *(undefined4 *)((int)this + 0x27c) = DAT_01bf1bd4;
  *(undefined4 *)((int)this + 0x290) = 0;
  *(undefined4 *)((int)this + 0x294) = 0;
  local_4._1_3_ = 0;
  *(undefined4 *)((int)this + 0x298) = 0;
  local_4._0_1_ = 3;
  *(undefined ***)((int)this + 0x29c) = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)this + 0x2a0) = &DAT_01bf1b8a;
  *(undefined4 *)((int)this + 0x2a8) = 0;
  *(undefined4 *)((int)this + 0x2a4) = 0;
  FUN_00402ce0(&DAT_0175b400);
  local_4._0_1_ = 4;
  pvVar1 = Mem_Alloc(0x308);
  local_4._0_1_ = 5;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = BrokerItemDataSource_ctor(pvVar1,in_stack_00000004);
  }
  local_4._0_1_ = 4;
  FUN_00cee700(pvVar1);
  pvVar1 = Mem_Alloc(0x308);
  local_4._0_1_ = 6;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = BrokerItemDataSource_ctor(pvVar1,in_stack_00000004);
  }
  local_4._0_1_ = 4;
  FUN_00cee700(pvVar1);
  pvVar1 = Mem_Alloc(0x2ec);
  local_4._0_1_ = 7;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = BrokerPlayerInventoryDataSource_ctor(pvVar1,in_stack_00000004);
  }
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_00cee770(pvVar1);
  ExceptionList = local_c;
  return;
}

