// addr: 0x00c2b6c0
// name: CharacterCustomizationItemData_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * CharacterCustomizationItemData_getColumnName(undefined4 param_1)

{
                    /* Maps customization item columns including model/item
                       group/gender/head/hair/tint/skin/face/facial hair/racial customization
                       fields. */
  switch(param_1) {
  case 0:
    return "Id";
  case 1:
    return "Description";
  case 2:
    return "ModelId";
  case 3:
    return "ItemGroupId";
  case 4:
    return "Gender";
  case 5:
    return "HeadId";
  case 6:
    return "HairId";
  case 7:
    return "HairTintId";
  case 8:
    return "EyeTintId";
  case 9:
    return "SkinToneId";
  case 10:
    return "FaceId";
  case 0xb:
    return "FacialHairId";
  case 0xc:
    return "RacialCustomizationId";
  default:
    return "<error>";
  }
}

