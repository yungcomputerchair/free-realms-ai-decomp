// addr: 0x014bf6f0
// name: LobbyCommand_SendUChatError_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_SendUChatError_dtor(void * this) */

void __fastcall LobbyCommand_SendUChatError_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for LobbyCommand_SendUChatError; it restores the class vftable
                       before invoking the base destructor. */
  puStack_8 = &LAB_016a9ab8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = LobbyCommand_SendUChatError::vftable;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

