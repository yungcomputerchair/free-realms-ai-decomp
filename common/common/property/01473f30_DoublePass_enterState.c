// addr: 0x01473f30
// name: DoublePass_enterState
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DoublePass_enterState(void * state) */

void __fastcall DoublePass_enterState(void *state)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  void *game;
  bool *pbVar4;
  uint uVar5;
  int *unaff_EDI;
  char *fmt;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
                    /* Handles entering the DoublePass state, logging the player id and recording
                       the player in an IntToBoolMap. */
  fmt = "DOUBLEPASS::ENTERSTATE";
  game = (void *)StateMachineState_getGame();
  Game_logGeneral(game,fmt,unaff_EDI);
  (**(code **)(*(int *)state + 0x4c))();
  uVar3 = (**(code **)(*(int *)state + 0x128))();
  uStack_4 = CONCAT31(uStack_4._1_3_,uVar3);
  (**(code **)(*(int *)state + 300))();
  uVar1 = *(uint *)((int)state + 0x114);
  if (uVar1 < *(uint *)((int)state + 0x110)) {
    FUN_00d83c2d();
  }
  uVar5 = *(uint *)((int)state + 0x110);
  if (*(uint *)((int)state + 0x114) < uVar5) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (state == (void *)0xfffffef4) {
      FUN_00d83c2d();
    }
    if (uVar5 == uVar1) break;
    if (state == (void *)0xfffffef4) {
      FUN_00d83c2d();
    }
    if (*(uint *)((int)state + 0x114) <= uVar5) {
      FUN_00d83c2d();
    }
    uStack_8 = GamePlayer_getPlayerId();
    pbVar4 = IntToBoolMap_getOrInsert((void *)((int)state + 0xf8),&uStack_8,unaff_EDI);
    *pbVar4 = false;
    if (*(uint *)((int)state + 0x114) <= uVar5) {
      FUN_00d83c2d();
    }
    uVar5 = uVar5 + 4;
  }
  pcVar2 = *(code **)(*(int *)state + 0x130);
  *(undefined4 *)((int)state + 0x128) = 1;
  (*pcVar2)(uStack_4,1);
  return;
}

