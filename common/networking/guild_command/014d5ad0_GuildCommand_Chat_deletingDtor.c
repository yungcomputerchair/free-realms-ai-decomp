// addr: 0x014d5ad0
// name: GuildCommand_Chat_deletingDtor
// subsystem: common/networking/guild_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GuildCommand_Chat_deletingDtor(void * this, char flags_) */

void * __thiscall GuildCommand_Chat_deletingDtor(void *this,char flags_)

{
                    /* Scalar deleting destructor for GuildCommand_Chat; it calls
                       GuildCommand_Chat_dtor and frees this when requested. */
  GuildCommand_Chat_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

