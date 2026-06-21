// addr: 0x00cf3b20
// name: HotbarSlotColumn_getName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * HotbarSlotColumn_getName(undefined4 param_1)

{
                    /* Returns hotbar/action-slot labels including Is Empty, Icon ID, Name, Is
                       Enabled, refresh timers, Quantity, Is Targeting, and Icon Tint Value. */
  switch(param_1) {
  case 0:
    return "Is Empty";
  case 1:
    return "Icon ID";
  case 2:
    return "Name";
  case 3:
    return "Is Enabled";
  case 4:
    return "Refresh Time Left";
  case 5:
    return "Total Refresh Time";
  case 6:
    return "Quantity";
  case 7:
    return "Is Targeting";
  case 8:
    return "Icon Tint Value";
  default:
    return "<error>";
  }
}

