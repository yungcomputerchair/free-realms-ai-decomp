// addr: 0x014d2920
// name: GuildCommand_Remove_dtor
// subsystem: common/networking/guild_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_Remove_dtor(void * this) */

void __fastcall GuildCommand_Remove_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for GuildCommand_Remove; it installs the class vftable and
                       delegates to GuildCommand base destruction. */
  puStack_8 = &LAB_016ac608;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = GuildCommand_Remove::vftable;
  local_4 = 0xffffffff;
  GuildCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

