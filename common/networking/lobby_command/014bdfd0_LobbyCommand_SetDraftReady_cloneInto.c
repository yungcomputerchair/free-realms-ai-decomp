// addr: 0x014bdfd0
// name: LobbyCommand_SetDraftReady_cloneInto
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandSetDraftReady.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_SetDraftReady_cloneInto(void * thisObj, void * lobbyCommand)
    */

void __thiscall LobbyCommand_SetDraftReady_cloneInto(void *this,void *thisObj,void *lobbyCommand)

{
  void *thisObj_00;
  void *unaff_EDI;
  
                    /* Copies a SetDraftReady command into an existing destination. It checks the
                       target RTTI, copies base LobbyCommand fields, then copies offsets 8, 0xc, and
                       0x10. */
  thisObj_00 = (void *)FUN_00d8d382(thisObj,0,&NetworkCommand::RTTI_Type_Descriptor,
                                    &LobbyCommand_SetDraftReady::RTTI_Type_Descriptor,0);
  if (thisObj_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\lobby_command\\LobbyCommandSetDraftReady.cpp",0x42
                );
  }
  LobbyCommand_cloneInto(this,thisObj_00,unaff_EDI);
  *(undefined4 *)((int)thisObj_00 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)thisObj_00 + 0xc) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)thisObj_00 + 0x10) = *(undefined4 *)((int)this + 0x10);
  return;
}

