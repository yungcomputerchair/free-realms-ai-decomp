// addr: 0x015103f0
// name: StateMachineState_filterResponsesForCurrentPlayer
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StateMachineState_filterResponsesForCurrentPlayer(void * this) */

void __fastcall StateMachineState_filterResponsesForCurrentPlayer(void *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *this_00;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  
                    /* Notifies current player response state then removes vector entries whose
                       player id does not match the current player. */
  this_00 = (void *)StateMachineState_getCurrentTurn();
  get_field_8(this_00);
  piVar3 = (int *)StateMachineState_getGame();
  iVar5 = *piVar3;
  iVar9 = (int)this + 0x104;
  uVar4 = GamePlayer_getPlayerId(iVar9);
  (**(code **)(iVar5 + 0xf4))(uVar4);
  puVar8 = *(undefined4 **)((int)this + 0x108);
  if (*(undefined4 **)((int)this + 0x10c) < puVar8) {
    FUN_00d83c2d();
  }
  while( true ) {
    puVar1 = *(undefined4 **)((int)this + 0x10c);
    if (puVar1 < *(undefined4 **)((int)this + 0x108)) {
      FUN_00d83c2d();
    }
    if (iVar9 == 0) {
      FUN_00d83c2d();
    }
    if (puVar8 == puVar1) break;
    if (iVar9 == 0) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)this + 0x10c) <= puVar8) {
      FUN_00d83c2d();
    }
    iVar5 = (**(code **)(*(int *)*puVar8 + 0x28))();
    iVar6 = GamePlayer_getPlayerId();
    if (iVar5 == iVar6) {
      if (*(undefined4 **)((int)this + 0x10c) <= puVar8) {
        FUN_00d83c2d();
      }
      puVar8 = puVar8 + 3;
    }
    else {
      puVar1 = *(undefined4 **)((int)this + 0x10c);
      puVar7 = puVar8;
      puVar2 = puVar8;
      while (puVar2 = puVar2 + 3, puVar2 != puVar1) {
        *puVar7 = *puVar2;
        puVar7[1] = puVar2[1];
        puVar7[2] = puVar2[2];
        puVar7 = puVar7 + 3;
      }
      *(int *)((int)this + 0x10c) = *(int *)((int)this + 0x10c) + -0xc;
    }
  }
  return;
}

