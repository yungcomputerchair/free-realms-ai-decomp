// addr: 0x00bee910
// name: BrokerMyItemAddedPacket_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall BrokerMyItemAddedPacket_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a BrokerMyItemAddedPacket by calling the base packet
                       constructor/helper with opcode/type 9 and then setting
                       BrokerMyItemAddedPacket::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015f1998;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bee5f0(9);
  *param_1 = BrokerMyItemAddedPacket::vftable;
  ExceptionList = local_c;
  return param_1;
}

