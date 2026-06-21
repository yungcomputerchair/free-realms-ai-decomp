// addr: 0x00cca6f0
// name: PetTrickColumn_getName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * PetTrickColumn_getName(undefined4 param_1)

{
                    /* Returns labels for pet trick/ability fields including ID, Icon, Name,
                       SkillLevel, IsBusy, Known, and TooltipString. */
  switch(param_1) {
  case 0:
    return "ID";
  case 1:
    return "Icon";
  case 2:
    return "Name";
  case 3:
    return "SkillLevel";
  case 4:
    return "IsBusy";
  case 5:
    return "Known";
  case 6:
    return "TooltipString";
  default:
    return "<error>";
  }
}

