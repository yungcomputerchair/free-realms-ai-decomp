// addr: 0x014bf630
// name: LobbyCommand_SendUChatError_ctor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyCommand_SendUChatError_ctor(void * this) */

void * __fastcall LobbyCommand_SendUChatError_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs LobbyCommand_SendUChatError by invoking LobbyCommand_ctor,
                       installing its vtable, and clearing an error/status field. Evidence is
                       LobbyCommand_SendUChatError::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a9a88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LobbyCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = LobbyCommand_SendUChatError::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  ExceptionList = local_c;
  return this;
}

