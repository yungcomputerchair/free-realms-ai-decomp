// addr: 0x013b2be0
// name: LobbyCommandJoin_doCommand
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandJoin.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int LobbyCommandJoin_doCommand(void * this) */

int __fastcall LobbyCommandJoin_doCommand(void *this)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  void *this_00;
  int iVar4;
  void *map;
  void *lobbyPtr;
  void *pvVar5;
  int iVar6;
  int extraout_EAX;
  int extraout_EDX;
  void *this_01;
  undefined8 uVar7;
  undefined1 auStack_18 [8];
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Processes a single join command by validating account/property-set data,
                       sending presence/property updates, joining or looking up the group, and
                       emitting join result opcode 5. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01687a3e;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffc4;
  ExceptionList = &local_c;
  DisplayActionManager_ensureSingleton();
  FUN_012d08e0(uVar3);
  iVar4 = FUN_013a3480();
  FUN_012cfde0();
  LobbyAccount_ensureSingleton();
  uVar7 = FUN_012cc6b0(*(undefined4 *)((int)this + 8));
  iVar6 = (int)((ulonglong)uVar7 >> 0x20);
  lobbyPtr = (void *)uVar7;
  if (*(int *)((int)this + 0x50) != 0) {
    if (*(int *)((int)this + 0x78) == 0) {
      FUN_012f5a60("mPropertySet","..\\common\\networking\\lobby_command\\LobbyCommandJoin.cpp",0x5f
                  );
    }
    pvVar5 = (void *)FUN_012df9f0(*(undefined4 *)((int)this + 4));
    if (pvVar5 == (void *)0x0) {
      FUN_012f5a60("account","..\\common\\networking\\lobby_command\\LobbyCommandJoin.cpp",0x62);
    }
    PropertySet_logProperties(*(void **)((int)this + 0x78));
    FUN_013a7570((void *)((int)this + 0x3c));
    AccountInfo_setProperty3eValue(pvVar5,*(int *)((int)this + 0x58));
    Account_setFullPropertySet(pvVar5,*(void **)((int)this + 0x78));
    Account_setLobbyAttributeString(pvVar5,(void *)((int)this + 0x5c));
    pvVar5 = Mem_Alloc(0x14);
    this_01 = (void *)0x0;
    uStack_4 = 0;
    if (pvVar5 != (void *)0x0) {
      this_01 = (void *)FUN_012f9eb0();
    }
    uStack_4 = 0xffffffff;
    FUN_012f8c70(0x10);
    DisplayActionBuilder_addIntArg(this_01,*(int *)((int)this + 4));
    DisplayActionBuilder_addStringArg(this_01,(void *)((int)this + 0x3c));
    FUN_012fa0c0(*(undefined4 *)((int)this + 0x78));
    FUN_012d3550(this_01);
    iVar6 = extraout_EDX;
  }
  iVar1 = *(int *)((int)this + 4);
  if (lobbyPtr == (void *)0x0) {
    if (iVar1 == iVar4) {
      iVar6 = FUN_012f5dc0("Join: couldn\'t get group: %d accountID: %d",
                           *(undefined4 *)((int)this + 8),iVar1);
    }
    else {
      WAErrorLog_write("Join: couldn\'t get group: %d accountID: %d");
      iVar6 = extraout_EAX;
    }
  }
  else {
    if (iVar1 == iVar4) {
      ClientApplication_setLobby(this_00,lobbyPtr);
    }
    else {
      pvVar5 = LobbyServiceAccountMap_findValue(map,iVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_012fa910();
        uStack_4 = 1;
        uVar2 = *(undefined4 *)((int)this + 8);
        FUN_01300680(2);
        uStack_10 = uVar2;
        FUN_013a3570(0xfbe,auStack_18);
        uStack_4 = 0xffffffff;
        FUN_01300cd0();
      }
    }
    pvVar5 = Mem_Alloc(0x14);
    uStack_4 = 2;
    if (pvVar5 == (void *)0x0) {
      pvVar5 = (void *)0x0;
    }
    else {
      pvVar5 = (void *)FUN_012f9eb0();
    }
    uStack_4 = 0xffffffff;
    FUN_012f8c70(5);
    DisplayActionBuilder_addIntArg(pvVar5,*(int *)((int)this + 8));
    DisplayActionBuilder_addIntArg(pvVar5,*(int *)((int)this + 4));
    if (*(int *)((int)this + 0xc) == 0) {
      *(undefined4 *)((int)this + 0xc) = 1;
    }
    DisplayActionBuilder_addIntArg(pvVar5,*(int *)((int)this + 0xc));
    FUN_012d3550(pvVar5);
    Lobby_setAccountRole(lobbyPtr,*(void **)((int)this + 4),*(int *)((int)this + 0xc));
    iVar6 = FUN_01301f50();
    if (iVar6 == 1) {
      iVar6 = FUN_012cf2f0(*(undefined4 *)((int)this + 4));
    }
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)iVar6 >> 8),1);
}

