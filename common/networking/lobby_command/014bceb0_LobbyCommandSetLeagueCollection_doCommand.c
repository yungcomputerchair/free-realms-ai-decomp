// addr: 0x014bceb0
// name: LobbyCommandSetLeagueCollection_doCommand
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandSetLeagueCollection.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: int LobbyCommandSetLeagueCollection_doCommand(void * this) */

int __fastcall LobbyCommandSetLeagueCollection_doCommand(void *this)

{
  char cVar1;
  void *pvVar2;
  void *this_00;
  void *this_01;
  char *pcVar3;
  void *pvVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  void *local_448;
  void *pvStack_444;
  undefined1 auStack_440 [8];
  undefined1 uStack_438;
  void *pvStack_434;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_430 [4];
  void *local_42c;
  undefined4 local_41c;
  uint local_418;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_414 [4];
  void *pvStack_410;
  undefined4 uStack_400;
  uint uStack_3fc;
  char acStack_3f8 [1000];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* Creates or retrieves the leagueCollection, labels it with 'League ID# %d',
                       inserts/updates CollectionItem entries from this command, and notifies the
                       lobby UI if a group is available. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016a93dd;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_448;
  pvVar2 = (void *)(DAT_01b839d8 ^ (uint)&stack0xfffffba8);
  ExceptionList = &local_c;
  local_448 = this;
  CollectionDB_initSingleton();
  if (this_00 == (void *)0x0) {
    FUN_012f5a60(&DAT_01900a34,
                 "..\\common\\networking\\lobby_command\\LobbyCommandSetLeagueCollection.cpp",0x37);
  }
  local_418 = 0xf;
  local_41c = 0;
  local_42c = (void *)((uint)local_42c & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_430,"leagueCollection",0x10);
  uStack_4 = 0;
  this_01 = CollectionDB_getCollection(this_00,local_430);
  if (this_01 == (void *)0x0) {
    pvStack_444 = Mem_Alloc(0x90);
    uStack_4._0_1_ = 1;
    if (pvStack_444 == (void *)0x0) {
      this_01 = (void *)0x0;
    }
    else {
      this_01 = (void *)CollectionData_ctor();
    }
    uStack_4 = (uint)uStack_4._1_3_ << 8;
    CollectionData_setName(this_01,local_430,pvVar2);
    CardCollection_setCollectionType(this_01,4);
  }
  _sprintf(acStack_3f8,"League ID# %d",*(undefined4 *)((int)this + 8));
  pcVar3 = acStack_3f8;
  uStack_3fc = 0xf;
  uStack_400 = 0;
  pvStack_410 = (void *)((uint)pvStack_410 & 0xffffff00);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (abStack_414,acStack_3f8,(int)pcVar3 - (int)(acStack_3f8 + 1));
  uStack_4 = CONCAT31(uStack_4._1_3_,2);
  CollectionData_setDisplayName(this_01,abStack_414);
  CollectionData_clearChildCollections();
  CollectionDB_setCollection(this_00,this_01);
  pvStack_444 = *(void **)((int)this + 0x18);
  if (pvStack_444 < *(uint *)((int)this + 0x14)) {
    FUN_00d83c2d();
  }
  uVar7 = *(uint *)((int)this + 0x14);
  if (*(uint *)((int)this + 0x18) < uVar7) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (this == (void *)0xfffffff0) {
      FUN_00d83c2d();
    }
    if ((void *)uVar7 == pvStack_444) break;
    if (this == (void *)0xfffffff0) {
      FUN_00d83c2d();
    }
    if (*(uint *)((int)this + 0x18) <= uVar7) {
      FUN_00d83c2d();
    }
    pvVar2 = *(void **)(uVar7 + 4);
    pvVar4 = PropertyContainer_findChild(this_01);
    if (pvVar4 == (void *)0x0) {
      pvStack_434 = Mem_Alloc(0x30);
      uStack_4._0_1_ = 3;
      if (pvStack_434 == (void *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = (void *)CollectionItem_ctor();
      }
      uStack_4 = CONCAT31(uStack_4._1_3_,2);
      CollectionItem_setItemId(pvVar4,(int)pvVar2);
      PropertyContainer_insertChildIfPresent(pvVar2,pvVar4);
    }
    CollectionData_insertUniqueItemRecord(uVar7);
    if (*(uint *)((int)local_448 + 0x18) <= uVar7) {
      FUN_00d83c2d();
    }
    uVar7 = uVar7 + 0x10;
    this = local_448;
  }
  uVar6 = *(undefined4 *)((int)this + 0xc);
  FUN_012cfde0(uVar6);
  piVar5 = (int *)FUN_012cc6b0(uVar6);
  uVar6 = 0;
  if (piVar5 != (int *)0x0) {
    FUN_012fa910();
    uStack_4._0_1_ = 4;
    FUN_01300680(1);
    uStack_438 = 1;
    (**(code **)(*piVar5 + 0x44))(0x1034,auStack_440);
    uStack_4 = CONCAT31(uStack_4._1_3_,2);
    uVar6 = FUN_01300cd0();
  }
  uStack_4 = uStack_4 & 0xffffff00;
  if (0xf < uStack_3fc) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_410);
  }
  uStack_3fc = 0xf;
  uStack_400 = 0;
  pvStack_410 = (void *)((uint)pvStack_410 & 0xffffff00);
  uStack_4 = 0xffffffff;
  if (0xf < local_418) {
                    /* WARNING: Subroutine does not return */
    _free(local_42c);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar6 >> 8),1);
}

