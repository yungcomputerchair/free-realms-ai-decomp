// addr: 0x014d6730
// name: GuildCommand_dtor
// subsystem: common/networking/guild_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_dtor(void * this) */

void __fastcall GuildCommand_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Base destructor for GuildCommand; installs the GuildCommand vftable and then
                       delegates NetworkCommand/base cleanup. */
  puStack_8 = &LAB_016ad2e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = GuildCommand::vftable;
  local_4 = 0xffffffff;
  NetworkCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

