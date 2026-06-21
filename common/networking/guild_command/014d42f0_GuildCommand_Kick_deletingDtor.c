// addr: 0x014d42f0
// name: GuildCommand_Kick_deletingDtor
// subsystem: common/networking/guild_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GuildCommand_Kick_deletingDtor(void * this, char flags_) */

void * __thiscall GuildCommand_Kick_deletingDtor(void *this,char flags_)

{
                    /* Scalar deleting destructor for GuildCommand_Kick; it calls the real
                       destructor and optionally frees this. */
  GuildCommand_Kick_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

