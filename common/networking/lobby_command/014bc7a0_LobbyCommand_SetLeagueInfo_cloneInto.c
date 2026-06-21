// addr: 0x014bc7a0
// name: LobbyCommand_SetLeagueInfo_cloneInto
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandSetLeagueInfo.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_SetLeagueInfo_cloneInto(int param_1, int param_2) */

void __thiscall LobbyCommand_SetLeagueInfo_cloneInto(void *this,int param_1,int param_2)

{
  int iVar1;
  void *thisObj;
  void *unaff_EDI;
  undefined1 auStack_8 [8];
  
                    /* Copies a LobbyCommand_SetLeagueInfo into a target command, including scalar
                       league fields, two vector/list-like containers, several info fields, and a
                       member at 0x3c. Identified by RTTI and the clone assertion in
                       LobbyCommandSetLeagueInfo.cpp. */
  thisObj = (void *)FUN_00d8d382(param_1,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &LobbyCommand_SetLeagueInfo::RTTI_Type_Descriptor,0);
  if (thisObj == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\lobby_command\\LobbyCommandSetLeagueInfo.cpp",0x7a
                );
  }
  LobbyCommand_cloneInto(this,thisObj,unaff_EDI);
  *(undefined4 *)((int)thisObj + 8) = *(undefined4 *)((int)this + 8);
  iVar1 = (int)thisObj + 0x10;
  *(undefined4 *)((int)thisObj + 0xc) = *(undefined4 *)((int)this + 0xc);
  if (iVar1 != (int)this + 0x10) {
    FUN_005152ac(auStack_8,iVar1,**(undefined4 **)((int)thisObj + 0x14),iVar1,
                 *(undefined4 **)((int)thisObj + 0x14));
    FUN_012415a0((int)this + 0x10);
  }
  iVar1 = (int)thisObj + 0x1c;
  if (iVar1 != (int)this + 0x1c) {
    FUN_005152ac(auStack_8,iVar1,**(undefined4 **)((int)thisObj + 0x20),iVar1,
                 *(undefined4 **)((int)thisObj + 0x20));
    FUN_012415a0((int)this + 0x1c);
  }
  *(undefined4 *)((int)thisObj + 0x28) = *(undefined4 *)((int)this + 0x28);
  *(undefined4 *)((int)thisObj + 0x2c) = *(undefined4 *)((int)this + 0x2c);
  *(undefined4 *)((int)thisObj + 0x30) = *(undefined4 *)((int)this + 0x30);
  *(undefined4 *)((int)thisObj + 0x34) = *(undefined4 *)((int)this + 0x34);
  *(undefined4 *)((int)thisObj + 0x38) = *(undefined4 *)((int)this + 0x38);
  FUN_005f1e5c((int)this + 0x3c);
  return;
}

