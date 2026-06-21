// addr: 0x014d6210
// name: GuildCommand_AskToJoinGuild_dtor
// subsystem: common/networking/guild_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_AskToJoinGuild_dtor(void * this) */

void __fastcall GuildCommand_AskToJoinGuild_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for GuildCommand_AskToJoinGuild; restores the derived vftable and
                       delegates base cleanup to GuildCommand_dtor. */
  puStack_8 = &LAB_016ad1c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = GuildCommand_AskToJoinGuild::vftable;
  local_4 = 0xffffffff;
  GuildCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

