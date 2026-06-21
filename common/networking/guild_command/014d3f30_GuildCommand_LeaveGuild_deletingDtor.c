// addr: 0x014d3f30
// name: GuildCommand_LeaveGuild_deletingDtor
// subsystem: common/networking/guild_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GuildCommand_LeaveGuild_deletingDtor(void * this, char flags_) */

void * __thiscall GuildCommand_LeaveGuild_deletingDtor(void *this,char flags_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for GuildCommand_LeaveGuild; runs destructor
                       cleanup and frees this if requested. */
  puStack_8 = &LAB_016acad8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = GuildCommand_LeaveGuild::vftable;
  local_4 = 0xffffffff;
  GuildCommand_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

