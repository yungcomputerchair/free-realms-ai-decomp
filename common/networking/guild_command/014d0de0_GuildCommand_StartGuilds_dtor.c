// addr: 0x014d0de0
// name: GuildCommand_StartGuilds_dtor
// subsystem: common/networking/guild_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_StartGuilds_dtor(void * this) */

void __fastcall GuildCommand_StartGuilds_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for GuildCommand_StartGuilds; it installs the
                       GuildCommand_StartGuilds vftable and delegates base cleanup to
                       GuildCommand_dtor. */
  puStack_8 = &LAB_016ac018;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = GuildCommand_StartGuilds::vftable;
  local_4 = 0xffffffff;
  GuildCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

