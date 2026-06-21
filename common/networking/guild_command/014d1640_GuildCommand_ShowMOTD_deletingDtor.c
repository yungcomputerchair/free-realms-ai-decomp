// addr: 0x014d1640
// name: GuildCommand_ShowMOTD_deletingDtor
// subsystem: common/networking/guild_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GuildCommand_ShowMOTD_deletingDtor(void * this, char flags_) */

void * __thiscall GuildCommand_ShowMOTD_deletingDtor(void *this,char flags_)

{
                    /* Scalar deleting destructor for GuildCommand_ShowMOTD; calls
                       GuildCommand_ShowMOTD_dtor and optionally frees this. */
  GuildCommand_ShowMOTD_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

