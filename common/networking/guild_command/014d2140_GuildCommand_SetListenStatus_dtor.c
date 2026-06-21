// addr: 0x014d2140
// name: GuildCommand_SetListenStatus_dtor
// subsystem: common/networking/guild_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_SetListenStatus_dtor(void * this) */

void __fastcall GuildCommand_SetListenStatus_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for GuildCommand_SetListenStatus; it installs the class vftable
                       and delegates base destruction to GuildCommand_dtor. */
  puStack_8 = &LAB_016ac428;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = GuildCommand_SetListenStatus::vftable;
  local_4 = 0xffffffff;
  GuildCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

