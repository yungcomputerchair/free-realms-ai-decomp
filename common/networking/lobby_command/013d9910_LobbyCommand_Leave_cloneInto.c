// addr: 0x013d9910
// name: LobbyCommand_Leave_cloneInto
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandLeave.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_Leave_cloneInto(int param_1, int param_2) */

void __thiscall LobbyCommand_Leave_cloneInto(void *this,int param_1,int param_2)

{
  void *thisObj;
  void *unaff_EDI;
  
                    /* Copies a LobbyCommand_Leave into an existing target command after
                       RTTI-casting param_2 from NetworkCommand to LobbyCommand_Leave. The function
                       asserts with 'clone' in LobbyCommandLeave.cpp if the cast fails and copies
                       the base command fields. */
  thisObj = (void *)FUN_00d8d382(param_1,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &LobbyCommand_Leave::RTTI_Type_Descriptor,0);
  if (thisObj == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\lobby_command\\LobbyCommandLeave.cpp",0x65);
  }
  LobbyCommand_cloneInto(this,thisObj,unaff_EDI);
  *(undefined4 *)((int)thisObj + 8) = *(undefined4 *)((int)this + 8);
  FUN_005f1e5c((int)this + 0x10);
  return;
}

