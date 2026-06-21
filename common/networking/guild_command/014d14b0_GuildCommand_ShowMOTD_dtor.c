// addr: 0x014d14b0
// name: GuildCommand_ShowMOTD_dtor
// subsystem: common/networking/guild_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_ShowMOTD_dtor(void * this) */

void __fastcall GuildCommand_ShowMOTD_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for GuildCommand_ShowMOTD; it releases two inline
                       std::string-style fields before running GuildCommand base cleanup. */
  puStack_8 = &LAB_016ac18e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = GuildCommand_ShowMOTD::vftable;
  local_4 = 1;
  if (0xf < *(uint *)((int)this + 0x48)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x34));
  }
  *(undefined4 *)((int)this + 0x48) = 0xf;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined1 *)((int)this + 0x34) = 0;
  local_4 = 0;
  if (0xf < *(uint *)((int)this + 0x2c)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x18));
  }
  *(undefined4 *)((int)this + 0x2c) = 0xf;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  local_4 = 0xffffffff;
  GuildCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

