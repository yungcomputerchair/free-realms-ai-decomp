// addr: 0x014d32c0
// name: GuildCommand_Notify_deletingDtor
// subsystem: common/networking/guild_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GuildCommand_Notify_deletingDtor(void * this, char flags_) */

void * __thiscall GuildCommand_Notify_deletingDtor(void *this,char flags_)

{
                    /* Scalar deleting destructor for GuildCommand_Notify; calls
                       GuildCommand_Notify_dtor and optionally frees this. */
  GuildCommand_Notify_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

