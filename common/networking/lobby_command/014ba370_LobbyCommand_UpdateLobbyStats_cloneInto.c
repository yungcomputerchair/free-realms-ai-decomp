// addr: 0x014ba370
// name: LobbyCommand_UpdateLobbyStats_cloneInto
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandUpdateLobbyStats.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_UpdateLobbyStats_cloneInto(int param_1, int param_2) */

void __thiscall LobbyCommand_UpdateLobbyStats_cloneInto(void *this,int param_1,int param_2)

{
  int iVar1;
  void *thisObj;
  void *unaff_EBP;
  undefined1 auStack_8 [8];
  
                    /* Copies a LobbyCommand_UpdateLobbyStats into a target command, including
                       several vector/list-like stat containers and a scalar at 0x2c. The RTTI cast
                       and clone assertion in LobbyCommandUpdateLobbyStats.cpp identify this as the
                       cloneInto implementation. */
  thisObj = (void *)FUN_00d8d382(param_1,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &LobbyCommand_UpdateLobbyStats::RTTI_Type_Descriptor,0);
  if (thisObj == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\lobby_command\\LobbyCommandUpdateLobbyStats.cpp",
                 0x47);
  }
  LobbyCommand_cloneInto(this,thisObj,unaff_EBP);
  iVar1 = (int)thisObj + 8;
  if (iVar1 != (int)this + 8) {
    FUN_005152ac(auStack_8,iVar1,**(undefined4 **)((int)thisObj + 0xc),iVar1,
                 *(undefined4 **)((int)thisObj + 0xc));
    FUN_012415a0((int)this + 8);
  }
  iVar1 = (int)thisObj + 0x14;
  if (iVar1 != (int)this + 0x14) {
    FUN_005152ac(auStack_8,iVar1,**(undefined4 **)((int)thisObj + 0x18),iVar1,
                 *(undefined4 **)((int)thisObj + 0x18));
    FUN_012415a0((int)this + 0x14);
  }
  iVar1 = (int)thisObj + 0x20;
  if (iVar1 != (int)this + 0x20) {
    FUN_005152ac(auStack_8,iVar1,**(undefined4 **)((int)thisObj + 0x24),iVar1,
                 *(undefined4 **)((int)thisObj + 0x24));
    FUN_012415a0((int)this + 0x20);
  }
  iVar1 = (int)thisObj + 0x30;
  *(undefined4 *)((int)thisObj + 0x2c) = *(undefined4 *)((int)this + 0x2c);
  if (iVar1 != (int)this + 0x30) {
    FUN_005152ac(auStack_8,iVar1,**(undefined4 **)((int)thisObj + 0x34),iVar1,
                 *(undefined4 **)((int)thisObj + 0x34));
    FUN_012415a0((int)this + 0x30);
  }
  return;
}

