// addr: 0x00befbc0
// name: FUN_00befbc0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00befbc0(int param_1,int param_2)

{
  void *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Creates and initializes a network/message processing object, optionally
                       allocating a helper and chaining through 00bef* setup functions. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015f1d03;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = Mem_Alloc(0xe0);
  local_4 = 0;
  if (this != (void *)0x0) {
    init_reward_or_item_record(this,DAT_01beaeb0,DAT_01beaeb4,0);
  }
  local_4 = 0xffffffff;
  BrokerMyItemAddedPacket_ctor();
  local_4 = 1;
  if (param_1 != 0) {
    FUN_00bef0b0();
    BrokerMyItemAddedPacket_deserialize();
    if (param_1 + param_2 == param_1 || (param_1 + param_2) - param_1 < 0) {
      FUN_00ceef30();
    }
  }
  ExceptionList = local_c;
  return;
}

