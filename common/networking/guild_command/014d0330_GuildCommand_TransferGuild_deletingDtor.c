// addr: 0x014d0330
// name: GuildCommand_TransferGuild_deletingDtor
// subsystem: common/networking/guild_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GuildCommand_TransferGuild_deletingDtor(void * this, char flags_) */

void * __thiscall GuildCommand_TransferGuild_deletingDtor(void *this,char flags_)

{
                    /* Scalar deleting destructor for GuildCommand_TransferGuild: it calls the real
                       destructor at 014d0170 and frees this when the low flag bit is set. */
  GuildCommand_TransferGuild_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

