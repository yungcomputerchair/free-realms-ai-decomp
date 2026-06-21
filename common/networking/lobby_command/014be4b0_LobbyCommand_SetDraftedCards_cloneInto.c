// addr: 0x014be4b0
// name: LobbyCommand_SetDraftedCards_cloneInto
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandSetDraftedCards.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_SetDraftedCards_cloneInto(int param_1, int param_2) */

void __thiscall LobbyCommand_SetDraftedCards_cloneInto(void *this,int param_1,int param_2)

{
  void *thisObj;
  int iVar1;
  void *unaff_EDI;
  undefined1 auStack_8 [8];
  
                    /* Copies a LobbyCommand_SetDraftedCards into an existing target command,
                       including a scalar at 8 and a drafted-cards container at 0xc. The RTTI cast
                       and 'clone' assert in LobbyCommandSetDraftedCards.cpp identify the cloneInto
                       method. */
  thisObj = (void *)FUN_00d8d382(param_1,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &LobbyCommand_SetDraftedCards::RTTI_Type_Descriptor,0);
  if (thisObj == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\lobby_command\\LobbyCommandSetDraftedCards.cpp",
                 0x4c);
  }
  LobbyCommand_cloneInto(this,thisObj,unaff_EDI);
  *(undefined4 *)((int)thisObj + 8) = *(undefined4 *)((int)this + 8);
  iVar1 = (int)thisObj + 0xc;
  if (iVar1 != (int)this + 0xc) {
    FUN_005152ac(auStack_8,iVar1,**(undefined4 **)((int)thisObj + 0x10),iVar1,
                 *(undefined4 **)((int)thisObj + 0x10));
    FUN_012415a0((int)this + 0xc);
  }
  return;
}

