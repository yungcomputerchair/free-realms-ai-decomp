// addr: 0x013b3fc0
// name: LobbyCommand_SendText_ctor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyCommand_SendText_ctor(void * this) */

void * __fastcall LobbyCommand_SendText_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs LobbyCommand_SendText by invoking LobbyCommand_ctor, installing
                       LobbyCommand_SendText::vftable, and zero/SSO-initializing text-related
                       members. Evidence is the vtable assignment. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01687d53;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LobbyCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = LobbyCommand_SendText::vftable;
  *(undefined4 *)((int)this + 0x2c) = 0xf;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  ExceptionList = local_c;
  return this;
}

