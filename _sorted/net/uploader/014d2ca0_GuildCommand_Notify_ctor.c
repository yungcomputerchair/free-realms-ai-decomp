// addr: 0x014d2ca0
// name: GuildCommand_Notify_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GuildCommand_Notify_ctor(void * this) */

void * __fastcall GuildCommand_Notify_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs Notify guild command and clears notification id/type fields and a
                       byte flag. Vtable identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ac6f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_014d6640(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = GuildCommand_Notify::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  ExceptionList = local_c;
  return this;
}

