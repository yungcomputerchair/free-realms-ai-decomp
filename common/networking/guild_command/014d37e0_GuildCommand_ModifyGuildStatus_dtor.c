// addr: 0x014d37e0
// name: GuildCommand_ModifyGuildStatus_dtor
// subsystem: common/networking/guild_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_ModifyGuildStatus_dtor(void * this) */

void __fastcall GuildCommand_ModifyGuildStatus_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for GuildCommand_ModifyGuildStatus; restores the derived vftable
                       and delegates to GuildCommand base cleanup. */
  puStack_8 = &LAB_016ac958;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = GuildCommand_ModifyGuildStatus::vftable;
  local_4 = 0xffffffff;
  GuildCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

