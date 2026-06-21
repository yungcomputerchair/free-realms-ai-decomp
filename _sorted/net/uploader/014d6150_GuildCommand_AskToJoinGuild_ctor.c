// addr: 0x014d6150
// name: GuildCommand_AskToJoinGuild_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GuildCommand_AskToJoinGuild_ctor(void * this) */

void * __fastcall GuildCommand_AskToJoinGuild_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a GuildCommand_AskToJoinGuild command object: runs the common
                       command base constructor, installs the GuildCommand_AskToJoinGuild vtable,
                       and initializes command-specific fields/containers to empty defaults. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ad198;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_014d6640(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = GuildCommand_AskToJoinGuild::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  ExceptionList = local_c;
  return this;
}

