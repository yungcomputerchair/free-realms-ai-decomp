// addr: 0x014d4800
// name: GuildCommand_GetGuildsByPartialName_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GuildCommand_GetGuildsByPartialName_ctor(void * this) */

void * __fastcall GuildCommand_GetGuildsByPartialName_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs GetGuildsByPartialName command, clearing search/result fields and
                       initializing an inline string. Vtable identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016acc89;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_014d6640(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = GuildCommand_GetGuildsByPartialName::vftable;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x40) = 0xf;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined1 *)((int)this + 0x2c) = 0;
  ExceptionList = local_c;
  return this;
}

