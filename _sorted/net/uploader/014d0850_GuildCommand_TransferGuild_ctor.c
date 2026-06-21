// addr: 0x014d0850
// name: GuildCommand_TransferGuild_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GuildCommand_TransferGuild_ctor(void * this) */

void * __fastcall GuildCommand_TransferGuild_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs TransferGuild command via the common guild-command base and clears
                       id/flag fields. Vtable identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016abf03;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_014d6640(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = GuildCommand_TransferGuild::vftable;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  ExceptionList = local_c;
  return this;
}

