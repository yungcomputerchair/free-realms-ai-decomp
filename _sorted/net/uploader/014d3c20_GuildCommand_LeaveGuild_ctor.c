// addr: 0x014d3c20
// name: GuildCommand_LeaveGuild_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GuildCommand_LeaveGuild_ctor(void * this) */

void * __fastcall GuildCommand_LeaveGuild_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs LeaveGuild command and clears one field. Vtable identifies the
                       class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016aca18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_014d6640(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = GuildCommand_LeaveGuild::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  ExceptionList = local_c;
  return this;
}

