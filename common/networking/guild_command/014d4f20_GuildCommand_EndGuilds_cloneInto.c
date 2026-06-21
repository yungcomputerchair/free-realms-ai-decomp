// addr: 0x014d4f20
// name: GuildCommand_EndGuilds_cloneInto
// subsystem: common/networking/guild_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_EndGuilds_cloneInto(void * dest) */

void __thiscall GuildCommand_EndGuilds_cloneInto(void *this,void *dest)

{
  void *unaff_ESI;
  
                    /* Initializes/copies the base GuildCommand state for a GuildCommand_EndGuilds
                       destination; no additional fields are copied here. */
  GuildCommand_cloneInto(this,dest,unaff_ESI);
  FUN_00d8d382(dest,0,&NetworkCommand::RTTI_Type_Descriptor,
               &GuildCommand_EndGuilds::RTTI_Type_Descriptor,0);
  return;
}

