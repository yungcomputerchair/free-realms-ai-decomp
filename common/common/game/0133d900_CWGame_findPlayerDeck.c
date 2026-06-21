// addr: 0x0133d900
// name: CWGame_findPlayerDeck
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall CWGame_findPlayerDeck(void *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined1 local_cc [4];
  void *local_c8;
  undefined4 local_b8;
  uint local_b4;
  undefined1 local_b0 [4];
  void *local_ac;
  undefined4 local_9c;
  uint local_98;
  undefined **local_40 [13];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Searches CWGame's player deck collection for a deck matching the requested
                       player, logging each attempted deck-name comparison and returning the
                       matching deck or null. Evidence: strings explicitly name
                       CWGame.findPlayerDeck. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167c007;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffff14;
  ExceptionList = &local_c;
  Game_logGeneral(param_1,"CWGame.findPlayerDeck - %d",param_2);
  piVar7 = *(int **)((int)param_1 + 0x3dc);
  if (*(int **)((int)param_1 + 0x3e0) < piVar7) {
    FUN_00d83c2d(uVar3);
  }
  do {
    piVar1 = *(int **)((int)param_1 + 0x3e0);
    if (piVar1 < *(int **)((int)param_1 + 0x3dc)) {
      FUN_00d83c2d(uVar3);
    }
    if (param_1 == (void *)0xfffffc28) {
      FUN_00d83c2d(uVar3);
    }
    if (piVar7 == piVar1) {
      ExceptionList = local_c;
      return 0;
    }
    if (param_1 == (void *)0xfffffc28) {
      FUN_00d83c2d();
    }
    if (*(int **)((int)param_1 + 0x3e0) <= piVar7) {
      FUN_00d83c2d();
    }
    iVar2 = *piVar7;
    if (iVar2 != 0) {
      FUN_0133cec0(3,1);
      local_4 = 0;
      FUN_01271b90(param_2);
      iVar4 = FUN_01333870(local_cc);
      local_4._0_1_ = 1;
      OffsetAdjustor_plus3C();
      if (*(uint *)(iVar4 + 0x18) < 0x10) {
        iVar4 = iVar4 + 4;
      }
      else {
        iVar4 = *(int *)(iVar4 + 4);
      }
      Game_logGeneral(param_1,"CWGame.findPlayerDeck - Attempting deck match \'%s\' == \'%s\'",iVar4
                     );
      local_4._0_1_ = 0;
      if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
        _free(local_c8);
      }
      local_b4 = 0xf;
      local_b8 = 0;
      local_c8 = (void *)((uint)local_c8 & 0xffffff00);
      iVar4 = FUN_01333870(local_b0);
      local_4._0_1_ = 2;
      iVar5 = OffsetAdjustor_plus3C();
      if (*(uint *)(iVar5 + 0x18) < 0x10) {
        iVar6 = iVar5 + 4;
      }
      else {
        iVar6 = *(int *)(iVar5 + 4);
      }
      iVar4 = FUN_00f942a0(0,*(undefined4 *)(iVar4 + 0x14),iVar6,*(undefined4 *)(iVar5 + 0x14));
      local_4 = (uint)local_4._1_3_ << 8;
      if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
        _free(local_ac);
      }
      local_98 = 0xf;
      local_9c = 0;
      local_ac = (void *)((uint)local_ac & 0xffffff00);
      if (iVar4 == 0) {
        Game_logGeneral(param_1,"CWGame.findPlayerDeck - Found deck for: %d",param_2);
        local_4 = 0xffffffff;
        FUN_0132e820();
        local_4 = 0xffffffff;
        local_40[0] = std::ios_base::vftable;
        FUN_0153a662(local_40);
        ExceptionList = local_c;
        return iVar2;
      }
      local_4 = 0xffffffff;
      FUN_0132e820();
      local_4 = 0xffffffff;
      local_40[0] = std::ios_base::vftable;
      FUN_0153a662(local_40);
    }
    if (*(int **)((int)param_1 + 0x3e0) <= piVar7) {
      FUN_00d83c2d();
    }
    piVar7 = piVar7 + 1;
  } while( true );
}

