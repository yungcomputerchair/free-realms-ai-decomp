// addr: 0x014d4d20
// name: GuildCommand_EndGuilds_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GuildCommand_EndGuilds_ctor(void * this) */

void * __fastcall GuildCommand_EndGuilds_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs EndGuilds command via the common guild-command initializer and
                       installs its vtable. Vtable identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016acd98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_014d6640(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = GuildCommand_EndGuilds::vftable;
  ExceptionList = local_c;
  return this;
}

