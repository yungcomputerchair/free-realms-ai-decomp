// addr: 0x00cb53f0
// name: GuildInfo_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * GuildInfo_getColumnName(int columnIndex_) */

char * GuildInfo_getColumnName(int columnIndex_)

{
                    /* Maps guild info columns to Guild Guid, Name, MOTD, CanCreateGuild?, and
                       CanRenameGuild?. */
  switch(columnIndex_) {
  case 0:
    return "Guild Guid";
  case 1:
    return "Name";
  case 2:
    return "MOTD";
  case 3:
    return "CanCreateGuild?";
  case 4:
    return "CanRenameGuild?";
  default:
    return "<error>";
  }
}

