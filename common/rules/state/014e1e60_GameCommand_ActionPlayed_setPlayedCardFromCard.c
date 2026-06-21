// addr: 0x014e1e60
// name: GameCommand_ActionPlayed_setPlayedCardFromCard
// subsystem: common/rules/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall GameCommand_ActionPlayed_setPlayedCardFromCard(int param_1,int *param_2)

{
  char cVar1;
  int playerId_;
  void *pvVar2;
  undefined4 uVar3;
  
                    /* Initializes the played-card fields on a GameCommand_ActionPlayed from a Card:
                       for normal cards stores card id/action info, for player cards stores the
                       owning player card id. Evidence is use from action-play command construction
                       and Card/player-card virtual checks. */
  cVar1 = (**(code **)(*param_2 + 0x1e8))();
  if (cVar1 == '\0') {
    uVar3 = PlayElement_getId();
    *(undefined4 *)(param_1 + 0x24) = uVar3;
    uVar3 = FUN_0138a380();
    *(undefined4 *)(param_1 + 0x28) = uVar3;
  }
  else {
    playerId_ = (**(code **)(*param_2 + 0x28))();
    pvVar2 = PlayArea_findPlayerElementById(*(void **)(param_1 + 8),playerId_);
    if (pvVar2 != (void *)0x0) {
      PlayElement_getGame();
      FUN_0139d7a0();
      uVar3 = PlayElement_getId();
      *(undefined4 *)(param_1 + 0x24) = uVar3;
      return;
    }
  }
  return;
}

