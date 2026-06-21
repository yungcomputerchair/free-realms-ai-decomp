// addr: 0x014d5400
// name: GuildCommand_CreateGuild_deletingDtor
// subsystem: common/networking/guild_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GuildCommand_CreateGuild_deletingDtor(void * this, char flags_) */

void * __thiscall GuildCommand_CreateGuild_deletingDtor(void *this,char flags_)

{
                    /* Scalar deleting destructor for GuildCommand_CreateGuild; calls the real
                       destructor and optionally frees this. */
  GuildCommand_CreateGuild_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

