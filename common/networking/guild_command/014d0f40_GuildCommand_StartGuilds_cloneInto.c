// addr: 0x014d0f40
// name: GuildCommand_StartGuilds_cloneInto
// subsystem: common/networking/guild_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_StartGuilds_cloneInto(void * this, void * dest) */

void __thiscall GuildCommand_StartGuilds_cloneInto(void *this,void *dest)

{
  int iVar1;
  void *unaff_EDI;
  
                    /* Copies a GuildCommand_StartGuilds into an already allocated destination
                       command, including the shared GuildCommand state and one 32-bit field at
                       offset 8. */
  GuildCommand_cloneInto(this,dest,unaff_EDI);
  iVar1 = FUN_00d8d382(dest,0,&NetworkCommand::RTTI_Type_Descriptor,
                       &GuildCommand_StartGuilds::RTTI_Type_Descriptor,0);
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)((int)this + 8);
  return;
}

