// addr: 0x014d51c0
// name: GuildCommand_CreateGuild_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GuildCommand_CreateGuild_ctor(void * this) */

void * __fastcall GuildCommand_CreateGuild_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CreateGuild command and initializes its guild-name inline string.
                       Vtable identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016acec3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_014d6640(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = GuildCommand_CreateGuild::vftable;
  *(undefined4 *)((int)this + 0x20) = 0xf;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0xc) = 0;
  ExceptionList = local_c;
  return this;
}

