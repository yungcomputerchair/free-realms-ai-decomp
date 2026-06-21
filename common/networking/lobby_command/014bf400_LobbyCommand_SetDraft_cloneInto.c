// addr: 0x014bf400
// name: LobbyCommand_SetDraft_cloneInto
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandSetDraft.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_SetDraft_cloneInto(int param_1, int param_2) */

void __thiscall LobbyCommand_SetDraft_cloneInto(void *this,int param_1,int param_2)

{
  void *thisObj;
  void *unaff_EDI;
  
                    /* Copies a LobbyCommand_SetDraft into an existing target command, including
                       draft state scalars, a collection at 0x18, and a boolean flag at 0x28.
                       Identified by RTTI and the 'clone' assert in LobbyCommandSetDraft.cpp. */
  thisObj = (void *)FUN_00d8d382(param_1,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &LobbyCommand_SetDraft::RTTI_Type_Descriptor,0);
  if (thisObj == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\lobby_command\\LobbyCommandSetDraft.cpp",0x112);
  }
  LobbyCommand_cloneInto(this,thisObj,unaff_EDI);
  *(undefined4 *)((int)thisObj + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)thisObj + 0xc) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)thisObj + 0x10) = *(undefined4 *)((int)this + 0x10);
  CollectionElementVector_copyAssign((int)this + 0x18);
  *(undefined4 *)((int)thisObj + 0x14) = *(undefined4 *)((int)this + 0x14);
  *(undefined1 *)((int)thisObj + 0x28) = *(undefined1 *)((int)this + 0x28);
  return;
}

