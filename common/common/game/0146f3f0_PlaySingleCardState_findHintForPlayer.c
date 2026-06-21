// addr: 0x0146f3f0
// name: PlaySingleCardState_findHintForPlayer
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall PlaySingleCardState_findHintForPlayer(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *extraout_EAX;
  int *extraout_EAX_00;
  int *piVar5;
  int *unaff_EDI;
  undefined4 local_28;
  int local_24;
  int *local_1c;
  undefined1 local_18 [8];
  undefined1 local_10 [12];
  
                    /* Looks up hint/property information for the current player's card/play state
                       using the current game object, player id, and property tree lookup. Exact
                       returned value is unknown. */
  StateMachineState_getGame();
  iVar4 = Game_getVector_24();
  piVar1 = *(int **)(iVar4 + 8);
  local_24 = iVar4;
  if (piVar1 < *(int **)(iVar4 + 4)) {
    FUN_00d83c2d();
  }
  piVar5 = *(int **)(iVar4 + 4);
  if (*(int **)(iVar4 + 8) < piVar5) {
    FUN_00d83c2d();
  }
  do {
    local_1c = piVar5;
    if (iVar4 == 0) {
      FUN_00d83c2d();
    }
    if (piVar5 == piVar1) {
      return 1;
    }
    if (iVar4 == 0) {
      FUN_00d83c2d();
    }
    if (*(int **)(iVar4 + 8) <= piVar5) {
      FUN_00d83c2d();
    }
    if (*piVar5 != 0) {
      local_28 = GamePlayer_getPlayerId();
      PropertyTree21_lowerBound((void *)(param_1 + 0xf8),local_18,&local_28,unaff_EDI);
      iVar2 = extraout_EAX[1];
      iVar3 = *(int *)(param_1 + 0xfc);
      if (((void *)*extraout_EAX == (void *)0x0) ||
         ((void *)*extraout_EAX != (void *)(param_1 + 0xf8))) {
        FUN_00d83c2d();
      }
      piVar5 = local_1c;
      iVar4 = local_24;
      if (iVar2 != iVar3) {
        local_28 = GamePlayer_getPlayerId();
        StdRbTreeInt_find_alt((void *)(param_1 + 0x104),local_10,&local_28,unaff_EDI);
        iVar2 = extraout_EAX_00[1];
        iVar3 = *(int *)(param_1 + 0x108);
        if (((void *)*extraout_EAX_00 == (void *)0x0) ||
           ((void *)*extraout_EAX_00 != (void *)(param_1 + 0x104))) {
          FUN_00d83c2d();
        }
        piVar5 = local_1c;
        iVar4 = local_24;
        if (iVar2 == iVar3) {
          return 0;
        }
      }
    }
    if (*(int **)(iVar4 + 8) <= piVar5) {
      FUN_00d83c2d();
    }
    piVar5 = piVar5 + 1;
  } while( true );
}

