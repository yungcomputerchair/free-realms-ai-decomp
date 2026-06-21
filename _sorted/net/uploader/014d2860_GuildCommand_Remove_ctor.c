// addr: 0x014d2860
// name: GuildCommand_Remove_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GuildCommand_Remove_ctor(void * this) */

void * __fastcall GuildCommand_Remove_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs Remove guild command and clears one id/status field. Vtable
                       identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ac5d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_014d6640(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = GuildCommand_Remove::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  ExceptionList = local_c;
  return this;
}

