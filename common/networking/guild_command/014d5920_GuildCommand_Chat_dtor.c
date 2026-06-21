// addr: 0x014d5920
// name: GuildCommand_Chat_dtor
// subsystem: common/networking/guild_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_Chat_dtor(void * this) */

void __fastcall GuildCommand_Chat_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for GuildCommand_Chat; it frees three std::string-style members
                       and then invokes GuildCommand base destruction. */
  puStack_8 = &LAB_016ad019;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = GuildCommand_Chat::vftable;
  local_4 = 2;
  if (0xf < *(uint *)((int)this + 0x68)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x54));
  }
  *(undefined4 *)((int)this + 0x68) = 0xf;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined1 *)((int)this + 0x54) = 0;
  local_4 = 1;
  if (0xf < *(uint *)((int)this + 0x4c)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x38));
  }
  *(undefined4 *)((int)this + 0x4c) = 0xf;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined1 *)((int)this + 0x38) = 0;
  local_4 = 0;
  if (0xf < *(uint *)((int)this + 0x30)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x1c));
  }
  *(undefined4 *)((int)this + 0x30) = 0xf;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x1c) = 0;
  local_4 = 0xffffffff;
  GuildCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

