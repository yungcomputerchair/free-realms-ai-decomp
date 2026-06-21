// addr: 0x014c79e0
// name: LobbyCommand_ChangeBulkStatus_cloneInto
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandChangeBulkStatus.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_ChangeBulkStatus_cloneInto(int param_1, int param_2) */

void __thiscall LobbyCommand_ChangeBulkStatus_cloneInto(void *this,int param_1,int param_2)

{
  void *thisObj;
  void *unaff_EDI;
  
                    /* Copies a LobbyCommand_ChangeBulkStatus into a target command, copying the
                       member at offset 8 and a status collection/object at 0x18. Evidence is the
                       RTTI cast and clone assertion in LobbyCommandChangeBulkStatus.cpp. */
  thisObj = (void *)FUN_00d8d382(param_1,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &LobbyCommand_ChangeBulkStatus::RTTI_Type_Descriptor,0);
  if (thisObj == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\lobby_command\\LobbyCommandChangeBulkStatus.cpp",
                 0x4a);
  }
  LobbyCommand_cloneInto(this,thisObj,unaff_EDI);
  FUN_005f1e5c((int)this + 8);
  StdVectorInt_assignFromVector((void *)((int)thisObj + 0x18),(int)this + 0x18,(int)unaff_EDI);
  return;
}

