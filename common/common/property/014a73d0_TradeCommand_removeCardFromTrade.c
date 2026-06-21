// addr: 0x014a73d0
// name: TradeCommand_removeCardFromTrade
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: bool TradeCommand_removeCardFromTrade(void * cmd) */

bool __fastcall TradeCommand_removeCardFromTrade(void *cmd)

{
  char cVar1;
  uint uVar2;
  void *map;
  void *this;
  int *piVar3;
  void *pvVar4;
  undefined4 *****pppppuVar5;
  char *pcVar6;
  int iVar7;
  int key_;
  int key__00;
  void *pvVar8;
  undefined4 uVar9;
  undefined1 local_470 [4];
  void *local_46c;
  undefined1 auStack_468 [28];
  undefined1 auStack_44c [28];
  undefined1 local_430 [4];
  undefined4 ****appppuStack_42c [4];
  undefined4 uStack_41c;
  uint uStack_418;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_414 [4];
  void *local_410;
  int local_400;
  uint local_3fc;
  char local_3f8 [1000];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Handles removing a card/item from a trade, looking up accounts, formatting
                       participant messages, and building display actions. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a522e;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)local_470;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xfffffb80;
  ExceptionList = &local_c;
  DisplayActionManager_ensureSingleton();
  LobbyAccount_ensureSingleton();
  local_46c = Mem_Alloc(0x14);
  pvVar8 = (void *)0x0;
  local_4 = 0;
  if (local_46c != (void *)0x0) {
    pvVar8 = (void *)FUN_012f9eb0(uVar2);
  }
  local_4 = 0xffffffff;
  FUN_012f8c70(0x25);
  DisplayActionBuilder_addIntArg(pvVar8,*(int *)((int)cmd + 8));
  DisplayActionBuilder_addIntArg(pvVar8,*(int *)((int)cmd + 4));
  FUN_012fa3e0((int)cmd + 0xc);
  DisplayActionBuilder_addIntArg(pvVar8,*(int *)((int)cmd + 0x1c));
  FUN_012d3550(pvVar8);
  pvVar8 = LobbyServiceAccountMap_findValue(map,key_);
  ArchetypeDB_getInstance();
  uVar2 = Archetype_getField3c(this);
  uVar9 = *(undefined4 *)((int)cmd + 0x10);
  ArchetypeDB_getInstance();
  piVar3 = (int *)ArchetypeDB_getArchetype(uVar9,uVar2);
  local_3fc = 0xf;
  local_400 = 0;
  local_410 = (void *)((uint)local_410 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_414,"",0);
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  if (piVar3 == (int *)0x0) goto LAB_014a7753;
  local_3f8[0] = '\0';
  (**(code **)(*piVar3 + 0xcc))(local_430,0,0);
  local_4._0_1_ = 2;
  if (*(int *)((int)cmd + 0x20) == 0) {
    if (*(int *)((int)cmd + 0x1c) == *(int *)((int)cmd + 4)) {
      iVar7 = FUN_012d08f0();
      if (*(int *)((int)cmd + 4) == iVar7) {
        pppppuVar5 = (undefined4 *****)appppuStack_42c[0];
        if (uStack_418 < 0x10) {
          pppppuVar5 = appppuStack_42c;
        }
        _sprintf(local_3f8,"You remove your %s from the trade.",pppppuVar5);
      }
      else if (pvVar8 != (void *)0x0) {
        Lobby_getPossessivePronoun(auStack_44c);
        local_4._0_1_ = 5;
        iVar7 = FUN_013a6540(auStack_468);
        local_4._0_1_ = 6;
        if (*(uint *)(iVar7 + 0x18) < 0x10) {
          iVar7 = iVar7 + 4;
        }
        else {
          iVar7 = *(int *)(iVar7 + 4);
        }
        _sprintf(local_3f8,"%s removes %s %s from the trade.",iVar7);
        local_4._0_1_ = 5;
        FUN_0041f1d7();
        goto LAB_014a76f6;
      }
    }
    else {
      pvVar4 = LobbyServiceAccountMap_findValue(map,key__00);
      iVar7 = FUN_012d08f0();
      if ((*(int *)((int)cmd + 4) == iVar7) && (pvVar4 != (void *)0x0)) {
        iVar7 = FUN_013a6540(auStack_468);
        local_4._0_1_ = 3;
        if (*(uint *)(iVar7 + 0x18) < 0x10) {
          iVar7 = iVar7 + 4;
        }
        else {
          iVar7 = *(int *)(iVar7 + 4);
        }
        pcVar6 = "You remove %s\'s %s from the trade.";
      }
      else {
        if (pvVar8 == (void *)0x0) goto LAB_014a76fb;
        iVar7 = FUN_013a6540(auStack_468);
        local_4._0_1_ = 4;
        if (*(uint *)(iVar7 + 0x18) < 0x10) {
          iVar7 = iVar7 + 4;
          pcVar6 = "%s removes your %s from the trade.";
        }
        else {
          iVar7 = *(int *)(iVar7 + 4);
          pcVar6 = "%s removes your %s from the trade.";
        }
      }
      _sprintf(local_3f8,pcVar6,iVar7);
LAB_014a76f6:
      local_4._0_1_ = 2;
      FUN_0041f1d7();
    }
  }
  else {
    pppppuVar5 = (undefined4 *****)appppuStack_42c[0];
    if (uStack_418 < 0x10) {
      pppppuVar5 = appppuStack_42c;
    }
    _sprintf(local_3f8,"%s is removed from the trade because an error occurred.",pppppuVar5);
  }
LAB_014a76fb:
  pcVar6 = local_3f8;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_414,local_3f8,(int)pcVar6 - (int)(local_3f8 + 1));
  local_4._0_1_ = 1;
  if (0xf < uStack_418) {
                    /* WARNING: Subroutine does not return */
    _free(appppuStack_42c[0]);
  }
  uStack_418 = 0xf;
  uStack_41c = 0;
  appppuStack_42c[0] = (undefined4 ****)((uint)appppuStack_42c[0] & 0xffffff00);
LAB_014a7753:
  local_4._0_1_ = 1;
  if (local_400 != 0) {
    local_46c = Mem_Alloc(0x14);
    local_4._0_1_ = 7;
    if (local_46c == (void *)0x0) {
      pvVar8 = (void *)0x0;
    }
    else {
      pvVar8 = (void *)FUN_012f9eb0();
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_012f8c70(2);
    FUN_012d0920();
    iVar7 = FUN_01301f30();
    DisplayActionBuilder_addIntArg(pvVar8,iVar7);
    DisplayActionBuilder_addStringArg(pvVar8,local_414);
    FUN_012d3550(pvVar8);
  }
  local_4 = 0xffffffff;
  if (0xf < local_3fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_410);
  }
  ExceptionList = local_c;
  return true;
}

