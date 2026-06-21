// addr: 0x00cbb310
// name: HouseInstance_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * HouseInstance_getColumnName(int columnIndex_) */

char * HouseInstance_getColumnName(int columnIndex_)

{
                    /* Returns house instance columns such as instance/owner ids, permission/edit
                       mode, max/current fixture and landmark counts, house name, lock/outside/edit
                       flags, icon, furniture score, member-only and flora permissions, and pet
                       autospawn. */
  switch(columnIndex_) {
  case 0:
    return "Instance Guid";
  case 1:
    return "Owner Guid";
  case 2:
    return "Owner Name";
  case 3:
    return "Permission Level";
  case 4:
    return "In Edit Mode";
  case 5:
    return "Max Fixture Count";
  case 6:
    return "Cur Fixture Count";
  case 7:
    return "Max Landmark Count";
  case 8:
    return "Cur Landmark Count";
  case 9:
    return "House Name";
  case 10:
    return "Is Locked";
  case 0xb:
    return "Is Outside";
  case 0xc:
    return "Can Edit";
  case 0xd:
    return "Icon";
  case 0xe:
    return "FurnitureScore";
  case 0xf:
    return "Is Members Only";
  case 0x10:
    return "Is Flora Allowed";
  case 0x11:
    return "Pet Autospawn";
  default:
    return "<error>";
  }
}

