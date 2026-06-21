// addr: 0x00c2a0d0
// name: CharacterSelectData_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * CharacterSelectData_getColumnName(undefined4 param_1)

{
                    /* Maps character selection/account columns such as
                       membership/max/admin/headshot plus character
                       guid/name/model/head/hair/customization/tint fields. */
  switch(param_1) {
  case 0:
    return "IsMember";
  case 1:
    return "MaxCharacters";
  case 2:
    return "IsAdminAccount";
  case 3:
    return "HeadshotUrl";
  case 4:
    return "CharacterGuid";
  case 5:
    return "CharacterName";
  case 6:
    return "CharacterModelId";
  case 7:
    return "CharacterHead";
  case 8:
    return "CharacterHair";
  case 9:
    return "CharacterModelCustomization";
  case 10:
    return "CharacterFacePaint";
  case 0xb:
    return "CharacterSkinTone";
  case 0xc:
    return "CharacterEyeTintId";
  case 0xd:
    return "CharacterHairTintId";
  default:
    return "<error>";
  }
}

