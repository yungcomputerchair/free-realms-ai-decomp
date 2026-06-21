// addr: 0x00cf0a30
// name: StoreFilterColumn_getName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * StoreFilterColumn_getName(int param_1)

{
                    /* Returns store filter field labels FilterId and OptionList. */
  if (param_1 == 0) {
    return "FilterId";
  }
  if (param_1 != 1) {
    return "<error>";
  }
  return "OptionList";
}

