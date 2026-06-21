// addr: 0x01467140
// name: PlaySingleCardState_updateHints
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall PlaySingleCardState_updateHints(int param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 local_4;
  
                    /* Updates card-play hints for PlaySingleCardState, logging the number of hinted
                       cards and player id while checking game flags/current player state. Evidence:
                       strings name PlaySingleCardState::updateHints. */
  StateMachineState_getGame();
  iVar3 = Game_getVector_24();
  puVar1 = *(undefined4 **)(iVar3 + 8);
  if (puVar1 < *(undefined4 **)(iVar3 + 4)) {
    FUN_00d83c2d();
  }
  puVar8 = *(undefined4 **)(iVar3 + 4);
  if (*(undefined4 **)(iVar3 + 8) < puVar8) {
    FUN_00d83c2d();
  }
  do {
    if (iVar3 == 0) {
      FUN_00d83c2d();
    }
    if (puVar8 == puVar1) {
      return;
    }
    if (iVar3 == 0) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)(iVar3 + 8) <= puVar8) {
      FUN_00d83c2d();
    }
    local_4 = *puVar8;
    uVar4 = GamePlayer_getPlayerId();
    pcVar9 = "PlaySingleCardState::updateHints pID: %d";
    pvVar5 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar5,pcVar9,uVar4);
    pvVar5 = (void *)StateMachineState_getGame();
    bVar2 = Game_getFlag_14d(pvVar5);
    if (bVar2) {
LAB_014671f7:
      if ((*(int *)(param_1 + 0xfc) != 0) &&
         (*(int *)(param_1 + 0x100) - *(int *)(param_1 + 0xfc) >> 2 != 0)) {
        FUN_01336350(&local_4);
      }
      if (*(int *)(param_1 + 0xfc) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x100) - *(int *)(param_1 + 0xfc) >> 2;
      }
      pcVar9 = "PlaySingleCardState::updateHints hinting: %d cards";
      pvVar5 = (void *)StateMachineState_getGame();
      Game_logGeneral(pvVar5,pcVar9,iVar6);
    }
    else {
      pvVar5 = (void *)StateMachineState_getGame();
      iVar6 = Game_getMyPlayerID(pvVar5);
      iVar7 = GamePlayer_getPlayerId();
      if (iVar7 == iVar6) goto LAB_014671f7;
    }
    if (*(undefined4 **)(iVar3 + 8) <= puVar8) {
      FUN_00d83c2d();
    }
    puVar8 = puVar8 + 1;
  } while( true );
}

