// addr: 0x014c2780
// name: LobbyCommand_RemoveBuddies_cloneInto
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandRemoveBuddies.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_RemoveBuddies_cloneInto(int param_1, int param_2) */

void __thiscall LobbyCommand_RemoveBuddies_cloneInto(void *this,int param_1,int param_2)

{
  void *thisObj;
  void *unaff_EDI;
  
                    /* Copies a LobbyCommand_RemoveBuddies into a target command, copying the member
                       collection/string at offset 8 after the base copy. Identified by RTTI and the
                       clone assertion in LobbyCommandRemoveBuddies.cpp. */
  thisObj = (void *)FUN_00d8d382(param_1,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &LobbyCommand_RemoveBuddies::RTTI_Type_Descriptor,0);
  if (thisObj == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\lobby_command\\LobbyCommandRemoveBuddies.cpp",0x3f
                );
  }
  LobbyCommand_cloneInto(this,thisObj,unaff_EDI);
  FUN_005f1e5c((int)this + 8);
  return;
}

