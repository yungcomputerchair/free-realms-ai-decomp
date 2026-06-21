// addr: 0x013b2aa0
// name: LobbyCommand_cloneInto
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommand.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_cloneInto(void * thisObj, void * lobbyCommand) */

void __thiscall LobbyCommand_cloneInto(void *this,void *thisObj,void *lobbyCommand)

{
  void *this_00;
  
                    /* Copies the LobbyCommand base fields into an already-created destination
                       command. It RTTI-casts the destination to LobbyCommand, asserts lobbyCommand
                       on failure, calls the NetworkCommand clone/copy helper, then copies the field
                       at offset 4. */
  this_00 = (void *)FUN_00d8d382(thisObj,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &LobbyCommand::RTTI_Type_Descriptor,0);
  if (this_00 == (void *)0x0) {
    FUN_012f5a60("lobbyCommand","..\\common\\networking\\lobby_command\\LobbyCommand.cpp",0x24);
  }
  NetworkCommand_cloneBaseFields(this_00);
  *(undefined4 *)((int)this_00 + 4) = *(undefined4 *)((int)this + 4);
  return;
}

