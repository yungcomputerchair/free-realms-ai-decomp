// addr: 0x014d1f70
// name: GuildCommand_SetMOTD_deletingDtor
// subsystem: common/networking/guild_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GuildCommand_SetMOTD_deletingDtor(void * this, char flags_) */

void * __thiscall GuildCommand_SetMOTD_deletingDtor(void *this,char flags_)

{
                    /* Scalar deleting destructor for GuildCommand_SetMOTD; calls the real
                       destructor and optionally frees the object memory. */
  GuildCommand_SetMOTD_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

