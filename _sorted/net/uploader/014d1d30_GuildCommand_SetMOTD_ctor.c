// addr: 0x014d1d30
// name: GuildCommand_SetMOTD_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GuildCommand_SetMOTD_ctor(void * this) */

void * __fastcall GuildCommand_SetMOTD_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs SetMOTD command, initializing an inline MOTD string and status
                       fields. Vtable identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ac343;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_014d6640(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = GuildCommand_SetMOTD::vftable;
  *(undefined4 *)((int)this + 0x24) = 0xf;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined1 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  ExceptionList = local_c;
  return this;
}

