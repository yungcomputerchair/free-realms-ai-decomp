// addr: 0x014d3ab0
// name: GuildCommand_ModifyGuildStatus_deletingDtor
// subsystem: common/networking/guild_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GuildCommand_ModifyGuildStatus_deletingDtor(void * this, char flags_)
    */

void * __thiscall GuildCommand_ModifyGuildStatus_deletingDtor(void *this,char flags_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for GuildCommand_ModifyGuildStatus; it runs
                       destructor cleanup and conditionally frees this. */
  puStack_8 = &LAB_016ac9e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = GuildCommand_ModifyGuildStatus::vftable;
  local_4 = 0xffffffff;
  GuildCommand_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

