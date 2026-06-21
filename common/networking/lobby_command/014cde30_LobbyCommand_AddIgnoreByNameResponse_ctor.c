// addr: 0x014cde30
// name: LobbyCommand_AddIgnoreByNameResponse_ctor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyCommand_AddIgnoreByNameResponse_ctor(void * this) */

void * __fastcall LobbyCommand_AddIgnoreByNameResponse_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs LobbyCommand_AddIgnoreByNameResponse, initializing two SSO string
                       members plus response fields. Evidence is
                       LobbyCommand_AddIgnoreByNameResponse::vftable and create callers. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016aba2e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LobbyCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = LobbyCommand_AddIgnoreByNameResponse::vftable;
  *(undefined4 *)((int)this + 0x24) = 0xf;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined1 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x44) = 0xf;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined1 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  ExceptionList = local_c;
  return this;
}

