// addr: 0x014d1b50
// name: GuildCommand_SetMOTDResponse_deletingDtor
// subsystem: common/networking/guild_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GuildCommand_SetMOTDResponse_deletingDtor(void * this, char flags_) */

void * __thiscall GuildCommand_SetMOTDResponse_deletingDtor(void *this,char flags_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for GuildCommand_SetMOTDResponse; it performs
                       destructor cleanup and conditionally frees the object. */
  puStack_8 = &LAB_016ac308;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = GuildCommand_SetMOTDResponse::vftable;
  local_4 = 0xffffffff;
  GuildCommand_dtor(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

