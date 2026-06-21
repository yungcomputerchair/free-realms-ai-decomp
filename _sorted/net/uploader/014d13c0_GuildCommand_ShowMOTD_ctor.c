// addr: 0x014d13c0
// name: GuildCommand_ShowMOTD_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GuildCommand_ShowMOTD_ctor(void * this) */

void * __fastcall GuildCommand_ShowMOTD_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs ShowMOTD command, initializing string buffers and numeric fields
                       for guild MOTD display. Vtable identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ac14e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_014d6640(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = GuildCommand_ShowMOTD::vftable;
  *(undefined4 *)((int)this + 0x2c) = 0xf;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x48) = 0xf;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined1 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)((int)this + 0x4c) = 0;
  ExceptionList = local_c;
  return this;
}

