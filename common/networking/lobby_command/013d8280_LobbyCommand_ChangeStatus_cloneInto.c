// addr: 0x013d8280
// name: LobbyCommand_ChangeStatus_cloneInto
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandChangeStatus.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_ChangeStatus_cloneInto(void * thisObj, void * lobbyCommand)
    */

void __thiscall LobbyCommand_ChangeStatus_cloneInto(void *this,void *thisObj,void *lobbyCommand)

{
  void *thisObj_00;
  void *unaff_EDI;
  
                    /* Copies a ChangeStatus lobby command into an existing destination object. It
                       RTTI-casts the destination to LobbyCommand_ChangeStatus, asserts on clone
                       failure, invokes LobbyCommand_cloneInto, then copies the derived field at
                       offset 8. */
  thisObj_00 = (void *)FUN_00d8d382(thisObj,0,&NetworkCommand::RTTI_Type_Descriptor,
                                    &LobbyCommand_ChangeStatus::RTTI_Type_Descriptor,0);
  if (thisObj_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\lobby_command\\LobbyCommandChangeStatus.cpp",0x3f)
    ;
  }
  LobbyCommand_cloneInto(this,thisObj_00,unaff_EDI);
  *(undefined4 *)((int)thisObj_00 + 8) = *(undefined4 *)((int)this + 8);
  return;
}

