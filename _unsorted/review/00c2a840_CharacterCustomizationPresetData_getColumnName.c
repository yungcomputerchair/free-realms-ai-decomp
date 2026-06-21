// addr: 0x00c2a840
// name: CharacterCustomizationPresetData_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * CharacterCustomizationPresetData_getColumnName(undefined4 param_1)

{
                    /* Returns customization preset columns including race, gender, model,
                       skin/hair/eye/facial hair/face paint/wings/clothing/face type IDs. */
  switch(param_1) {
  case 0:
    return "Id";
  case 1:
    return "Description";
  case 2:
    return "RaceId";
  case 3:
    return "GenderId";
  case 4:
    return "ModelId";
  case 5:
    return "SkinToneId";
  case 6:
    return "HairStyleId";
  case 7:
    return "HairColorId";
  case 8:
    return "EyeColorId";
  case 9:
    return "FacialHairId";
  case 10:
    return "FacePaintId";
  case 0xb:
    return "WingsId";
  case 0xc:
    return "ClothingSetId";
  case 0xd:
    return "FaceTypeId";
  default:
    return "<error>";
  }
}

