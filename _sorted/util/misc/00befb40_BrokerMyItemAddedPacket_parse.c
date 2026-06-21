// addr: 0x00befb40
// name: BrokerMyItemAddedPacket_parse
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 BrokerMyItemAddedPacket_parse(int param_1,int param_2,int param_3,char param_4)

{
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  char local_4;
  undefined1 local_3;
  
                    /* Parses a BrokerMyItemAddedPacket from a bounded byte buffer using the packet
                       constructor and deserialize method; returns success if no stream error and
                       bytes are acceptable. */
  if ((param_1 != 0) && (param_2 != 0)) {
    local_14 = param_2;
    local_c = param_2;
    local_8 = param_2 + param_3;
    local_10 = param_3;
    local_4 = '\0';
    local_3 = 0;
    FUN_00bef0b0(&local_14);
    BrokerMyItemAddedPacket_deserialize(&local_14);
    if ((local_4 == '\0') && ((param_4 != '\0' || (local_8 == local_c || local_8 - local_c < 0)))) {
      return 1;
    }
  }
  return 0;
}

