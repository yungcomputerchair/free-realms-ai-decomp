// addr: 0x01474040
// name: DoublePass_restoreStatePartTwo
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool DoublePass_restoreStatePartTwo(void * state) */

bool __fastcall DoublePass_restoreStatePartTwo(void *state)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  void *game;
  bool *pbVar4;
  int *piVar5;
  int *unaff_EBX;
  uint uVar6;
  undefined4 unaff_EDI;
  char *fmt;
  undefined4 local_8;
  int local_4;
  
                    /* Restores the second part of DoublePass state, logging player id and updating
                       per-player state maps. */
  fmt = "DOUBLEPASS::RESTORESTATEPARTTWO";
  game = (void *)StateMachineState_getGame();
  Game_logGeneral(game,fmt,unaff_EDI);
  local_4 = StateMachine_popReturnValueMap();
  if (((local_4 != 0) && (cVar2 = ReturnValueMap_hasBooleanKey(7), cVar2 != '\0')) &&
     (cVar2 = ReturnValueMap_getBoolean(7), cVar2 != '\0')) {
    uVar1 = *(uint *)((int)state + 0x114);
    if (uVar1 < *(uint *)((int)state + 0x110)) {
      FUN_00d83c2d();
    }
    uVar6 = *(uint *)((int)state + 0x110);
    if (*(uint *)((int)state + 0x114) < uVar6) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (state == (void *)0xfffffef4) {
        FUN_00d83c2d();
      }
      if (uVar6 == uVar1) break;
      if (state == (void *)0xfffffef4) {
        FUN_00d83c2d();
      }
      if (*(uint *)((int)state + 0x114) <= uVar6) {
        FUN_00d83c2d();
      }
      local_8 = GamePlayer_getPlayerId();
      pbVar4 = IntToBoolMap_getOrInsert((void *)((int)state + 0xf8),&local_8,unaff_EBX);
      *pbVar4 = false;
      if (*(uint *)((int)state + 0x114) <= uVar6) {
        FUN_00d83c2d();
      }
      uVar6 = uVar6 + 4;
    }
    uVar3 = (**(code **)(*(int *)state + 0x128))();
    local_8 = CONCAT31(local_8._1_3_,uVar3);
    (**(code **)(*(int *)state + 300))();
    StateMachine_destroyReturnValueMap(local_4);
    uVar3 = (**(code **)(*(int *)state + 0x130))(local_8,3);
    return (bool)uVar3;
  }
  *(undefined4 *)((int)state + 0x128) = 3;
  piVar5 = (int *)StateMachineState_getGame();
  (**(code **)(*piVar5 + 0x17c))();
  (**(code **)(*(int *)state + 0x88))();
  return true;
}

