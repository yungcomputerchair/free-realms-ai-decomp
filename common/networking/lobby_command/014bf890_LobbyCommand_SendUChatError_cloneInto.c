// addr: 0x014bf890
// name: LobbyCommand_SendUChatError_cloneInto
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandSendUChatError.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_SendUChatError_cloneInto(void * thisObj, void *
   lobbyCommand) */

void __thiscall LobbyCommand_SendUChatError_cloneInto(void *this,void *thisObj,void *lobbyCommand)

{
  void *thisObj_00;
  void *unaff_EDI;
  
                    /* Copies a SendUChatError command into an existing destination. It validates
                       the destination with LobbyCommand_SendUChatError RTTI, copies base
                       LobbyCommand state, and copies the derived field at offset 8. */
  thisObj_00 = (void *)FUN_00d8d382(thisObj,0,&NetworkCommand::RTTI_Type_Descriptor,
                                    &LobbyCommand_SendUChatError::RTTI_Type_Descriptor,0);
  if (thisObj_00 == (void *)0x0) {
    FUN_012f5a60("lobbyCommand",
                 "..\\common\\networking\\lobby_command\\LobbyCommandSendUChatError.cpp",0x3b);
  }
  LobbyCommand_cloneInto(this,thisObj_00,unaff_EDI);
  *(undefined4 *)((int)thisObj_00 + 8) = *(undefined4 *)((int)this + 8);
  return;
}

