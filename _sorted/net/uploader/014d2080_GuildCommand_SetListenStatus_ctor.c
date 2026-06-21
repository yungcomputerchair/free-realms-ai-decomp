// addr: 0x014d2080
// name: GuildCommand_SetListenStatus_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GuildCommand_SetListenStatus_ctor(void * this) */

void * __fastcall GuildCommand_SetListenStatus_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs SetListenStatus guild command and clears the listen-status byte.
                       Vtable identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ac3f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_014d6640(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = GuildCommand_SetListenStatus::vftable;
  *(undefined1 *)((int)this + 8) = 0;
  ExceptionList = local_c;
  return this;
}

