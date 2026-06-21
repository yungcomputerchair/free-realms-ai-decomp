// addr: 0x00cca7b0
// name: PetTrickSlotColumn_getName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * PetTrickSlotColumn_getName(undefined4 param_1)

{
                    /* Maps a slotted pet trick/ability entry to ID, Slot, Icon, Name, or SkillLevel
                       labels. */
  switch(param_1) {
  case 0:
    return "ID";
  case 1:
    return "Slot";
  case 2:
    return "Icon";
  case 3:
    return "Name";
  case 4:
    return "SkillLevel";
  default:
    return "<error>";
  }
}

