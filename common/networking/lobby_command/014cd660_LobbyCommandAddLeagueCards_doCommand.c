// addr: 0x014cd660
// name: LobbyCommandAddLeagueCards_doCommand
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandAddLeagueCards.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: int LobbyCommandAddLeagueCards_doCommand(void * this) */

int __fastcall LobbyCommandAddLeagueCards_doCommand(void *this)

{
  uint uVar1;
  void *this_00;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  void *pvVar5;
  void *local_58;
  void *pvStack_54;
  uint uStack_50;
  void *pvStack_4c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_48 [4];
  void *pvStack_44;
  undefined4 uStack_34;
  uint uStack_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [4];
  void *local_28;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* Adds card entries to an existing leagueCollection, creating missing
                       CollectionItem objects, then emits opcode 0x59 for the league/card update. */
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_016ab8e6;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_58;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffff98;
  ExceptionList = &local_c;
  local_58 = this;
  CollectionDB_initSingleton();
  if (this_00 == (void *)0x0) {
    FUN_012f5a60(&DAT_01900a34,
                 "..\\common\\networking\\lobby_command\\LobbyCommandAddLeagueCards.cpp",0x2f,uVar1)
    ;
  }
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_2c,"leagueCollection",0x10);
  iStack_4 = 0;
  pvStack_54 = CollectionDB_getCollection(this_00,local_2c);
  if (pvStack_54 == (void *)0x0) {
    iStack_4 = 0xffffffff;
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
    iVar2 = 0;
  }
  else {
    uStack_50 = *(uint *)((int)this + 0x14);
    if (uStack_50 < *(uint *)((int)this + 0x10)) {
      FUN_00d83c2d();
    }
    uVar1 = *(uint *)((int)this + 0x10);
    if (*(uint *)((int)this + 0x14) < uVar1) {
      FUN_00d83c2d();
    }
    while( true ) {
      pvVar5 = (void *)((int)this + 0xc);
      if (pvVar5 == (void *)0x0) {
        FUN_00d83c2d();
      }
      if (uVar1 == uStack_50) break;
      if (pvVar5 == (void *)0x0) {
        FUN_00d83c2d();
      }
      if (*(uint *)((int)this + 0x14) <= uVar1) {
        FUN_00d83c2d();
      }
      pvVar5 = *(void **)(uVar1 + 4);
      pvVar3 = PropertyContainer_findChild(pvStack_54);
      if (pvVar3 == (void *)0x0) {
        pvStack_4c = Mem_Alloc(0x30);
        iStack_4._0_1_ = 1;
        if (pvStack_4c == (void *)0x0) {
          pvVar3 = (void *)0x0;
        }
        else {
          pvVar3 = (void *)CollectionItem_ctor();
        }
        iStack_4 = (uint)iStack_4._1_3_ << 8;
        CollectionItem_setItemId(pvVar3,(int)pvVar5);
        PropertyContainer_insertChildIfPresent(pvVar5,pvVar3);
      }
      CollectionData_insertUniqueItemRecord(uVar1);
      if (*(uint *)((int)local_58 + 0x14) <= uVar1) {
        FUN_00d83c2d();
      }
      uVar1 = uVar1 + 0x10;
      this = local_58;
    }
    pvStack_4c = Mem_Alloc(0x14);
    iStack_4._0_1_ = 2;
    if (pvStack_4c == (void *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = (void *)FUN_012f9eb0();
    }
    iStack_4._0_1_ = 0;
    FUN_012f8c70(0x59);
    DisplayActionBuilder_addIntArg(pvVar3,*(int *)((int)local_58 + 8));
    uStack_30 = 0xf;
    uStack_34 = 0;
    pvStack_44 = (void *)((uint)pvStack_44 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_48,"League",6);
    iStack_4._0_1_ = 3;
    DisplayActionBuilder_addStringArg(pvVar3,abStack_48);
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    if (0xf < uStack_30) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_44);
    }
    uStack_30 = 0xf;
    uStack_34 = 0;
    pvStack_44 = (void *)((uint)pvStack_44 & 0xffffff00);
    PacketWriter_writeInstanceVector(pvVar5);
    DisplayActionManager_ensureSingleton();
    uVar4 = FUN_012d3550(pvVar3);
    iStack_4 = 0xffffffff;
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
    iVar2 = CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  ExceptionList = local_c;
  return iVar2;
}

