// addr: 0x00cca690
// name: PetBehaviorColumn_getName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * PetBehaviorColumn_getName(int param_1)

{
                    /* Maps a small pet behavior table index to ID, Target, or Behavior. */
  if (param_1 == 0) {
    return "ID";
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      return "<error>";
    }
    return "Behavior";
  }
  return "Target";
}

