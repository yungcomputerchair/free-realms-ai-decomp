// addr: 0x014d4de0
// name: GuildCommand_EndGuilds_dtor
// subsystem: common/networking/guild_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_EndGuilds_dtor(void * this) */

void __fastcall GuildCommand_EndGuilds_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for GuildCommand_EndGuilds; it restores the derived vftable and
                       delegates base cleanup to GuildCommand_dtor. */
  puStack_8 = &LAB_016acdc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = GuildCommand_EndGuilds::vftable;
  local_4 = 0xffffffff;
  GuildCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

