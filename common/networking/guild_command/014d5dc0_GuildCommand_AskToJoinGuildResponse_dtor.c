// addr: 0x014d5dc0
// name: GuildCommand_AskToJoinGuildResponse_dtor
// subsystem: common/networking/guild_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_AskToJoinGuildResponse_dtor(void * this) */

void __fastcall GuildCommand_AskToJoinGuildResponse_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for GuildCommand_AskToJoinGuildResponse; restores the class
                       vftable and delegates to GuildCommand base cleanup. */
  puStack_8 = &LAB_016ad0d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = GuildCommand_AskToJoinGuildResponse::vftable;
  local_4 = 0xffffffff;
  GuildCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

