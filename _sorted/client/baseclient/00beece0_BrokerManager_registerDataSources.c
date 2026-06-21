// addr: 0x00beece0
// name: BrokerManager_registerDataSources
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void BrokerManager_registerDataSources(void * this) */

void __thiscall BrokerManager_registerDataSources(void *this)

{
  void *this_00;
  undefined4 extraout_EAX;
  undefined4 uVar1;
  undefined4 in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Delegates broker datasource creation to the Broker GUI datasource setup
                       helper after invoking nearby broker-manager initialization helpers. Called
                       during ClientPcData deserialization. */
  puStack_8 = &LAB_015f1af6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = in_stack_00000004;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  local_4 = 0;
  this_00 = Mem_Alloc(0x2b0);
  local_4._0_1_ = 1;
  if (this_00 == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    BrokerManager_registerBrokerDataSources(this_00);
    uVar1 = extraout_EAX;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00beea30(uVar1);
  ExceptionList = local_c;
  return;
}

