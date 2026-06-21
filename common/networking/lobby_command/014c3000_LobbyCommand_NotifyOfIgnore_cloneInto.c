// addr: 0x014c3000
// name: LobbyCommand_NotifyOfIgnore_cloneInto
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandNotifyOfIgnore.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_NotifyOfIgnore_cloneInto(void * thisObj, void *
   lobbyCommand) */

void __thiscall LobbyCommand_NotifyOfIgnore_cloneInto(void *this,void *thisObj,void *lobbyCommand)

{
  void *thisObj_00;
  void *unaff_EDI;
  
                    /* Copies a NotifyOfIgnore command into an existing destination. It RTTI-casts
                       the target, copies base LobbyCommand data, then copies a 32-bit field at
                       offset 8 and a byte flag at offset 0xc. */
  thisObj_00 = (void *)FUN_00d8d382(thisObj,0,&NetworkCommand::RTTI_Type_Descriptor,
                                    &LobbyCommand_NotifyOfIgnore::RTTI_Type_Descriptor,0);
  if (thisObj_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\lobby_command\\LobbyCommandNotifyOfIgnore.cpp",
                 0x40);
  }
  LobbyCommand_cloneInto(this,thisObj_00,unaff_EDI);
  *(undefined4 *)((int)thisObj_00 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined1 *)((int)thisObj_00 + 0xc) = *(undefined1 *)((int)this + 0xc);
  return;
}

