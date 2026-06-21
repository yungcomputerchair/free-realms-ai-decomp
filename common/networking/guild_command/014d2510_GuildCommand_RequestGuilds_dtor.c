// addr: 0x014d2510
// name: GuildCommand_RequestGuilds_dtor
// subsystem: common/networking/guild_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_RequestGuilds_dtor(void * this) */

void __fastcall GuildCommand_RequestGuilds_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for GuildCommand_RequestGuilds; it restores the derived vftable
                       and runs GuildCommand base cleanup. */
  puStack_8 = &LAB_016ac518;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = GuildCommand_RequestGuilds::vftable;
  local_4 = 0xffffffff;
  GuildCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

