// addr: 0x014be920
// name: LobbyCommandSetDraft_doCommand
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandSetDraft.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: int LobbyCommandSetDraft_doCommand(void * this) */

int __fastcall LobbyCommandSetDraft_doCommand(void *this)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int *piVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  void *pvVar9;
  void *this_00;
  void *pvVar10;
  void *pvVar11;
  int iVar12;
  undefined4 *puVar13;
  void *this_01;
  int extraout_EAX;
  uint uVar14;
  undefined1 *puVar15;
  void *pvStack_d10;
  void *local_d0c;
  void *local_d08;
  undefined1 auStack_d04 [4];
  int iStack_d00;
  int iStack_cfc;
  void *pvStack_cf8;
  void *pvStack_cf4;
  void *local_cf0;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_cec [4];
  void *local_ce8;
  int iStack_ce4;
  undefined4 uStack_ce0;
  undefined4 local_cd8;
  uint local_cd4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_cd0 [4];
  void *pvStack_ccc;
  undefined4 uStack_cbc;
  uint uStack_cb8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_cb4 [4];
  void *pvStack_cb0;
  undefined4 uStack_ca0;
  uint uStack_c9c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_c98 [4];
  void *local_c94;
  undefined4 local_c84;
  uint local_c80;
  undefined1 local_c7c [4];
  void *local_c78;
  undefined4 local_c68;
  uint local_c64;
  undefined1 local_c60 [52];
  char local_c2c [100];
  char local_bc8 [1000];
  char local_7e0 [1000];
  char acStack_3f8 [1000];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Handles draft state changes for tournaments: updates limited/tournament
                       collections, emits direction/status/chat messages, tracks the current draft
                       round, and may enqueue a SelectTournamentDeck command. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a9985;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&pvStack_d10;
  piVar4 = (int *)(DAT_01b839d8 ^ (uint)&stack0xfffff2e0);
  ExceptionList = &local_c;
  local_d0c = this;
  if (*(char *)((int)this + 0x28) != '\0') {
    _sprintf(local_c2c,"t%d",*(undefined4 *)((int)this + 8));
    pcVar5 = local_c2c;
    local_c80 = 0xf;
    local_c84 = 0;
    local_c94 = (void *)((uint)local_c94 & 0xffffff00);
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_c98,local_c2c,(int)pcVar5 - (int)(local_c2c + 1));
    local_4 = 0;
    pcVar6 = (char *)TournamentDeck_getFileExtensionSuffix();
    local_cd4 = 0xf;
    local_cd8 = 0;
    local_ce8 = (void *)((uint)local_ce8 & 0xffffff00);
    pcVar5 = pcVar6;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_cec,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
    local_4._0_1_ = 1;
    _sprintf(local_bc8,"data\\decks\\tournament\\%s%s",local_c2c);
    uVar7 = PathConfig_getDefaultBasePath(local_bc8);
    FUN_01249400(local_c7c,uVar7);
    local_4._0_1_ = 2;
    puVar15 = local_c7c;
    FUN_012aab80(puVar15);
    iVar8 = DeckDB_getDeckByName(puVar15);
    if (iVar8 != 0) {
      LobbyCommand_SelectTournamentDeck_ctor();
      local_4._0_1_ = 3;
      LobbyCommand_SelectTournamentDeck_setDeck(local_c60,iVar8,piVar4);
      LobbyCommand_SelectTournamentDeck_setTournamentId(local_c60,*(int *)((int)this + 8));
      LobbyCommand_SelectTournamentDeck_setGroupId(local_c60,*(int *)((int)this + 0x14));
      puVar15 = local_c60;
      pvVar9 = NetworkService_getSingleton();
      NetworkService_queueCommand(pvVar9,puVar15);
      local_4._0_1_ = 2;
      LobbyCommand_SelectTournamentDeck_dtor(local_c60);
    }
    uVar7 = 0;
    DisplayActionManager_ensureSingleton();
    iVar8 = FUN_012d4730(uVar7);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (0xf < local_c64) {
                    /* WARNING: Subroutine does not return */
      _free(local_c78);
    }
    local_c64 = 0xf;
    local_c68 = 0;
    local_c78 = (void *)((uint)local_c78 & 0xffffff00);
    local_4 = (uint)local_4._1_3_ << 8;
    if (0xf < local_cd4) {
                    /* WARNING: Subroutine does not return */
      _free(local_ce8);
    }
    local_cd4 = 0xf;
    local_cd8 = 0;
    local_ce8 = (void *)((uint)local_ce8 & 0xffffff00);
    local_4 = 0xffffffff;
    if (0xf < local_c80) {
                    /* WARNING: Subroutine does not return */
      _free(local_c94);
    }
    goto LAB_014bf293;
  }
  uVar7 = *(undefined4 *)((int)this + 0x14);
  FUN_012cfde0(uVar7);
  local_d08 = (void *)FUN_012cc6b0(uVar7);
  CollectionDB_initSingleton();
  local_cf0 = this_00;
  if (this_00 == (void *)0x0) {
    FUN_012f5a60(&DAT_01900a34,"..\\common\\networking\\lobby_command\\LobbyCommandSetDraft.cpp",
                 0x74);
  }
  __snprintf(local_7e0,1000,"limitedCollection-%d",*(undefined4 *)((int)this + 8));
  pcVar5 = local_7e0;
  uStack_cb8 = 0xf;
  uStack_cbc = 0;
  pvStack_ccc = (void *)((uint)pvStack_ccc & 0xffffff00);
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (abStack_cd0,local_7e0,(int)pcVar5 - (int)(local_7e0 + 1));
  local_4 = 4;
  pvVar9 = CollectionDB_getCollection(this_00,abStack_cd0);
  pvStack_cf4 = pvVar9;
  if (pvVar9 == (void *)0x0) {
    pvStack_cf8 = Mem_Alloc(0x90);
    local_4._0_1_ = 5;
    if (pvStack_cf8 == (void *)0x0) {
      pvVar9 = (void *)0x0;
    }
    else {
      pvVar9 = (void *)CollectionData_ctor();
    }
    local_4 = CONCAT31(local_4._1_3_,4);
    pvStack_cf4 = pvVar9;
    CollectionData_setName(pvVar9,abStack_cd0,piVar4);
    CardCollection_setCollectionType(pvVar9,4);
    CollectionDB_setCollection(this_00,pvVar9);
  }
  _sprintf(acStack_3f8,"Tournament ID# %d",*(undefined4 *)((int)this + 8));
  pcVar5 = acStack_3f8;
  uStack_c9c = 0xf;
  uStack_ca0 = 0;
  pvStack_cb0 = (void *)((uint)pvStack_cb0 & 0xffffff00);
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (abStack_cb4,acStack_3f8,(int)pcVar5 - (int)(acStack_3f8 + 1));
  local_4 = CONCAT31(local_4._1_3_,6);
  CollectionData_setDisplayName(pvVar9,abStack_cb4);
  CollectionData_clearChildCollections();
  pvStack_cf8 = *(void **)((int)this + 0x20);
  if (pvStack_cf8 < *(uint *)((int)this + 0x1c)) {
    FUN_00d83c2d();
  }
  uVar14 = *(uint *)((int)this + 0x1c);
  if (*(uint *)((int)this + 0x20) < uVar14) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (this == (void *)0xffffffe8) {
      FUN_00d83c2d();
    }
    if ((void *)uVar14 == pvStack_cf8) break;
    if (this == (void *)0xffffffe8) {
      FUN_00d83c2d();
    }
    if (*(uint *)((int)this + 0x20) <= uVar14) {
      FUN_00d83c2d();
    }
    pvVar11 = *(void **)(uVar14 + 4);
    pvVar10 = PropertyContainer_findChild(pvVar9);
    if (pvVar10 == (void *)0x0) {
      pvStack_d10 = Mem_Alloc(0x30);
      local_4._0_1_ = 7;
      if (pvStack_d10 == (void *)0x0) {
        pvVar10 = (void *)0x0;
      }
      else {
        pvVar10 = (void *)CollectionItem_ctor();
      }
      local_4 = CONCAT31(local_4._1_3_,6);
      CollectionItem_setItemId(pvVar10,(int)pvVar11);
      PropertyContainer_insertChildIfPresent(pvVar11,pvVar10);
    }
    CollectionData_insertUniqueItemRecord(uVar14);
    if (*(uint *)((int)local_d0c + 0x20) <= uVar14) {
      FUN_00d83c2d();
    }
    uVar14 = uVar14 + 0x10;
    this = local_d0c;
  }
  pvStack_d10 = Mem_Alloc(0x14);
  local_4._0_1_ = 8;
  if (pvStack_d10 == (void *)0x0) {
    pvVar11 = (void *)0x0;
  }
  else {
    pvVar11 = (void *)FUN_012f9eb0();
  }
  local_4._0_1_ = 6;
  FUN_012f8c70(0x52);
  DisplayActionBuilder_addIntArg(pvVar11,*(int *)((int)this + 0xc));
  iVar8 = *(int *)((int)this + 0xc);
  if (((iVar8 == 1) || (iVar8 == 3)) || (iVar8 == 0)) {
    pcVar5 = "clockwise";
  }
  else {
    pcVar5 = "counterClockwise";
  }
  DisplayActionBuilder_addCStringArg(pvVar11,pcVar5);
  DisplayActionManager_ensureSingleton();
  FUN_012d3550(pvVar11);
  uVar7 = *(undefined4 *)((int)this + 0x10);
  DisplayActionManager_ensureSingleton();
  FUN_012d4730(uVar7);
  pvStack_d10 = Mem_Alloc(0x14);
  local_4._0_1_ = 9;
  if (pvStack_d10 == (void *)0x0) {
    pvVar11 = (void *)0x0;
  }
  else {
    pvVar11 = (void *)FUN_012f9eb0();
  }
  local_4._0_1_ = 6;
  FUN_012f8c70(0x36);
  DisplayActionBuilder_addCStringArg(pvVar11,local_7e0);
  DisplayActionManager_ensureSingleton();
  iVar8 = FUN_012d3550(pvVar11);
  if (local_d08 != (void *)0x0) {
    iVar8 = DraftState_getCurrentRound(local_d08);
    if ((iVar8 == 0) && (*(int *)((int)local_d0c + 0xc) == 0)) {
      bVar2 = true;
      FUN_012fa910();
      pvVar9 = local_d08;
      local_4 = CONCAT31(local_4._1_3_,10);
      (**(code **)(*(int *)((int)local_d08 + 4) + 4))(0x1002,auStack_d04);
      FUN_01300d70(0);
      if (((iStack_d00 == 2) ||
          (FUN_012f5a60("mTypeID == kIntegerTypeID",
                        "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                        ,0x129), iStack_d00 == 2)) && (iStack_cfc != 0)) {
        bVar2 = false;
      }
      local_4._0_1_ = 6;
      FUN_01300cd0();
      if (!bVar2) goto LAB_014befb7;
      pvStack_d10 = Mem_Alloc(0x14);
      local_4._0_1_ = 0xb;
      if (pvStack_d10 == (void *)0x0) {
        pvVar11 = (void *)0x0;
      }
      else {
        pvVar11 = (void *)FUN_012f9eb0();
      }
      local_4._0_1_ = 6;
      FUN_012f8c70(2);
      iVar8 = FUN_01301f30();
      DisplayActionBuilder_addIntArg(pvVar11,iVar8);
      DisplayActionBuilder_addCStringArg
                (pvVar11,"Press ready when you are finished viewing your draft pack contents.");
      DisplayActionManager_ensureSingleton();
      FUN_012d3550(pvVar11);
      pvVar11 = local_d0c;
    }
    else {
LAB_014befb7:
      pvVar9 = local_d08;
      pvVar11 = local_d0c;
      iVar8 = *(int *)((int)local_d0c + 0xc);
      iVar12 = DraftState_getCurrentRound(local_d08);
      if ((iVar12 != iVar8) && (iVar8 != 5)) {
        StdVectorOwner44_cleanupReturn(pvVar9,local_cec,piVar4);
        local_4._0_1_ = 0xc;
        uVar3 = (undefined1)local_4;
        local_4._0_1_ = 0xc;
        if (local_ce8 == (void *)0x0) {
          iVar8 = 0;
        }
        else {
          iVar8 = iStack_ce4 - (int)local_ce8 >> 2;
        }
        if (iVar8 < *(int *)((int)pvVar11 + 0xc)) {
          if ((local_ce8 == (void *)0x0) || (iStack_ce4 - (int)local_ce8 >> 2 == 0)) {
            local_4._0_1_ = uVar3;
            pvStack_d10 = Mem_Alloc(0x14);
            local_4._0_1_ = 0xf;
            if (pvStack_d10 == (void *)0x0) {
              pvVar10 = (void *)0x0;
            }
            else {
              pvVar10 = (void *)FUN_012f9eb0();
            }
            local_4._0_1_ = 0xc;
            FUN_012f8c70(2);
            iVar8 = FUN_01301f30();
            DisplayActionBuilder_addIntArg(pvVar10,iVar8);
            _sprintf(local_bc8,"Begin drafting round %d.",*(undefined4 *)((int)pvVar11 + 0xc));
            DisplayActionBuilder_addCStringArg(pvVar10,local_bc8);
            DisplayActionManager_ensureSingleton();
            FUN_012d3550(pvVar10);
          }
        }
        else {
          puVar13 = StdVector_atElementPtr4(local_cec,*(int *)((int)pvVar11 + 0xc) + -1);
          ArchetypeDB_getInstance();
          uVar14 = Archetype_getField3c(this_01);
          uVar7 = *puVar13;
          ArchetypeDB_getInstance();
          iVar8 = ArchetypeDB_getArchetype(uVar7,uVar14);
          if (iVar8 != 0) {
            FUN_012fa910();
            local_4._0_1_ = 0xd;
            (**(code **)(*(int *)(iVar8 + 4) + 4))(1,auStack_d04);
            if (iStack_d00 == 3) {
              pvStack_d10 = Mem_Alloc(0x14);
              local_4._0_1_ = 0xe;
              if (pvStack_d10 == (void *)0x0) {
                pvVar10 = (void *)0x0;
              }
              else {
                pvVar10 = (void *)FUN_012f9eb0();
              }
              local_4._0_1_ = 0xd;
              FUN_012f8c70(2);
              iVar8 = FUN_01301f30();
              DisplayActionBuilder_addIntArg(pvVar10,iVar8);
              FUN_0123c310();
              _sprintf(local_bc8,"Begin drafting round %d: %s\nPlease select a card to draft.",
                       *(undefined4 *)((int)pvVar11 + 0xc));
              DisplayActionBuilder_addCStringArg(pvVar10,local_bc8);
              DisplayActionManager_ensureSingleton();
              FUN_012d3550(pvVar10);
            }
            local_4._0_1_ = 0xc;
            FUN_01300cd0();
          }
        }
        local_4._0_1_ = 6;
        if (local_ce8 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(local_ce8);
        }
        local_ce8 = (void *)0x0;
        iStack_ce4 = 0;
        uStack_ce0 = 0;
      }
    }
    DraftState_setCurrentRound(pvVar9,*(int *)((int)pvVar11 + 0xc));
    iVar8 = extraout_EAX;
    pvVar9 = pvStack_cf4;
    this = local_d0c;
  }
  if (*(int *)((int)this + 0xc) == 4) {
    DisplayActionManager_ensureSingleton();
    iVar8 = FUN_012d08e0();
    if ((iVar8 != 0) && (pvVar9 != (void *)0x0)) {
      uVar7 = FUN_013a3480();
      pvVar11 = (void *)CollectionDB_getCollectionById(uVar7);
      iVar8 = 0;
      if (pvVar11 != (void *)0x0) {
        CollectionData_mergeUnlockedItems(pvVar11,pvVar9);
        CollectionDB_insertCollection(local_cf0,pvVar11);
        iVar8 = ReturnFalse_stub();
      }
    }
  }
  local_4 = CONCAT31(local_4._1_3_,4);
  if (0xf < uStack_c9c) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_cb0);
  }
  uStack_c9c = 0xf;
  uStack_ca0 = 0;
  pvStack_cb0 = (void *)((uint)pvStack_cb0 & 0xffffff00);
  local_4 = 0xffffffff;
  if (0xf < uStack_cb8) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_ccc);
  }
LAB_014bf293:
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)iVar8 >> 8),1);
}

