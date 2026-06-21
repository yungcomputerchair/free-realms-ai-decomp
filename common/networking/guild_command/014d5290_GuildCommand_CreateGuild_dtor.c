// addr: 0x014d5290
// name: GuildCommand_CreateGuild_dtor
// subsystem: common/networking/guild_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_CreateGuild_dtor(void * this) */

void __fastcall GuildCommand_CreateGuild_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for GuildCommand_CreateGuild; it releases the guild-name string
                       member when heap backed, then destroys the GuildCommand base. */
  puStack_8 = &LAB_016acef3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = GuildCommand_CreateGuild::vftable;
  local_4 = 0;
  if (0xf < *(uint *)((int)this + 0x20)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0xc));
  }
  *(undefined4 *)((int)this + 0x20) = 0xf;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0xc) = 0;
  local_4 = 0xffffffff;
  GuildCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

