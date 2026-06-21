// addr: 0x014c4170
// name: LobbyCommand_GameServiceError_ctor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyCommand_GameServiceError_ctor(void * this) */

void * __fastcall LobbyCommand_GameServiceError_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs LobbyCommand_GameServiceError, initializing an SSO string member
                       and an integer/error code after installing the vtable. Evidence is
                       LobbyCommand_GameServiceError::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016aa913;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LobbyCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = LobbyCommand_GameServiceError::vftable;
  *(undefined4 *)((int)this + 0x28) = 0xf;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  ExceptionList = local_c;
  return this;
}

