// addr: 0x0146f7e0
// name: PlaySingleCardState_updateHintForMyPlayer
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall PlaySingleCardState_updateHintForMyPlayer(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  void *pvVar4;
  undefined4 *extraout_EAX;
  int *piVar5;
  int *unaff_EDI;
  int local_c;
  undefined1 local_8 [8];
  
                    /* Checks whether hints should be shown for the local player, looks up local
                       player state, and invokes hint-display helpers when appropriate. */
  pvVar4 = (void *)StateMachineState_getGame();
  bVar3 = Game_getFlag_14d(pvVar4);
  if (!bVar3) {
    pvVar4 = (void *)StateMachineState_getGame();
    local_c = Game_getMyPlayerID(pvVar4);
    StdRbTreeInt_find((void *)(param_1 + 0x104),local_8,&local_c,unaff_EDI);
    iVar1 = extraout_EAX[1];
    iVar2 = *(int *)(param_1 + 0x108);
    if (((void *)*extraout_EAX == (void *)0x0) ||
       ((void *)*extraout_EAX != (void *)(param_1 + 0x104))) {
      FUN_00d83c2d();
    }
    if (iVar1 != iVar2) {
      PlaySingleCardState_emitHintDisplayAction();
      return;
    }
    pvVar4 = (void *)StateMachineState_getGame();
    local_c = Game_getMyPlayerID(pvVar4);
    piVar5 = (int *)FUN_0137bb00(local_8,&local_c);
    iVar1 = piVar5[1];
    iVar2 = *(int *)(param_1 + 0xfc);
    if ((*piVar5 == 0) || (*piVar5 != param_1 + 0xf8)) {
      FUN_00d83c2d();
    }
    if (iVar1 != iVar2) {
      PlaySingleCardState_buildHintAction();
    }
  }
  return;
}

