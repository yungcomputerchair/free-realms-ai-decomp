// addr: 0x00cee410
// name: BrokerConfigColumn_getName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * BrokerConfigColumn_getName(undefined4 param_1)

{
                    /* Maps broker configuration fields to Broker Guid, Max Items, Auto Markup Mod,
                       Listing Fee Mod, and Listing Duration. */
  switch(param_1) {
  case 0:
    return "Broker Guid";
  case 1:
    return "Max Items";
  case 2:
    return "Auto Markup Mod";
  case 3:
    return "Listing Fee Mod";
  case 4:
    return "Listing Duration";
  default:
    return "<error>";
  }
}

