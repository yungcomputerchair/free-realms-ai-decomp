// addr: 0x014d4aa0
// name: GuildCommand_GetGuildsByPartialName_deletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GuildCommand_GetGuildsByPartialName_deletingDtor(void * this, int
   flags) */

void * __thiscall GuildCommand_GetGuildsByPartialName_deletingDtor(void *this,int flags)

{
                    /* Scalar deleting destructor for GuildCommand_GetGuildsByPartialName. It
                       delegates cleanup to FUN_014d48e0 and frees this when requested. */
  GuildCommand_GetGuildsByPartialName_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

