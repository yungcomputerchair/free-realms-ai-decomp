// addr: 0x01464960
// name: StateMachineState_collectZoneResponsesForPlayers
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StateMachineState_collectZoneResponsesForPlayers(void * this) */

void __fastcall StateMachineState_collectZoneResponsesForPlayers(void *this)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  
                    /* Iterates game zone/player collection, switches current player context, and
                       collects response records into this state. */
  pvVar3 = (void *)StateMachineState_getCurrentTurn();
  uVar4 = get_field_8(pvVar3);
  pvVar3 = (void *)StateMachineState_getGame();
  pvVar3 = Game_getZoneCollection(pvVar3);
  puVar1 = *(undefined4 **)((int)pvVar3 + 8);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 4)) {
    FUN_00d83c2d();
  }
  puVar6 = *(undefined4 **)((int)pvVar3 + 4);
  if (*(undefined4 **)((int)pvVar3 + 8) < puVar6) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (pvVar3 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (puVar6 == puVar1) break;
    if (pvVar3 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)pvVar3 + 8) <= puVar6) {
      FUN_00d83c2d();
    }
    uVar2 = *puVar6;
    GamePlayer_getPlayerId();
    piVar5 = (int *)StateMachineState_getCurrentTurn();
    (**(code **)(*piVar5 + 0x48))(uVar2);
    piVar5 = (int *)StateMachineState_getGame();
    (**(code **)(*piVar5 + 0xf4))(puVar1,(int)this + 0x104);
    if (*(undefined4 **)((int)pvVar3 + 8) <= puVar6) {
      FUN_00d83c2d();
    }
    puVar6 = puVar6 + 1;
  }
  piVar5 = (int *)StateMachineState_getCurrentTurn();
  (**(code **)(*piVar5 + 0x48))(uVar4);
  return;
}

