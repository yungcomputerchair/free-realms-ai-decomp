// addr: 0x00cca5c0
// name: PetProfileColumn_getName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * PetProfileColumn_getName(undefined4 param_1)

{
                    /* Returns pet profile/list field labels including needs, mood, icon,
                       member-only flag, image/tint values, vanity/tutorial flags, and attachment
                       item group. */
  switch(param_1) {
  case 0:
    return "Name";
  case 1:
    return "Sex";
  case 2:
    return "IconId";
  case 3:
    return "FoodNeed";
  case 4:
    return "PlayNeed";
  case 5:
    return "GroomNeed";
  case 6:
    return "Mood";
  case 7:
    return "ID";
  case 8:
    return "Members Only";
  case 9:
    return "Image Set ID";
  case 10:
    return "Tint Value";
  case 0xb:
    return "Is Vanity Pet";
  case 0xc:
    return "Attachment ItemGroup ID";
  case 0xd:
    return "Is Tutorial Pet";
  default:
    return "<error>";
  }
}

