// addr: 0x00c4e6b0
// name: ActivityDefinition_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * ActivityDefinition_getColumnName(int columnIndex_) */

char * ActivityDefinition_getColumnName(int columnIndex_)

{
                    /* Returns activity definition column names including NameId, DescriptionId,
                       image/system ids, requestor, members, player limits, and member
                       auto-accept/ready flags. */
  switch(columnIndex_) {
  case 0:
    return "Id";
  case 1:
    return "NameId";
  case 2:
    return "DescriptionId";
  case 3:
    return "ImageSetId";
  case 4:
    return "SystemHashkey";
  case 5:
    return "SystemDefinitionId";
  case 6:
    return "Requestor";
  case 7:
    return "Members";
  case 8:
    return "MembersOnly";
  case 9:
    return "MinPlayers";
  case 10:
    return "MaxPlayers";
  case 0xb:
    return "AllowedToModifyMembersList";
  case 0xc:
    return "MembersAutoAccept";
  case 0xd:
    return "MembersInstantlyReady";
  case 0xe:
    return "DataBlobBufferSize";
  default:
    return "<error>";
  }
}

