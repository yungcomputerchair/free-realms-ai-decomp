// addr: 0x013ce3d0
// name: Game_logDrawDeckCard
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_logDrawDeckCard(void * game, int cardInstanceId_, int archetypeId_)
    */

void __thiscall Game_logDrawDeckCard(void *this,void *game,int cardInstanceId_,int archetypeId_)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
                    /* Logs a draw-deck card instance/archetype pair to the game log. */
  iVar3 = (**(code **)(*(int *)this + 0x48))();
  uVar1 = *(uint *)(iVar3 + 8);
  if (uVar1 < *(uint *)(iVar3 + 4)) {
    FUN_00d83c2d();
  }
  iVar4 = (**(code **)(*(int *)this + 0x48))();
  uVar5 = *(uint *)(iVar4 + 4);
  if (*(uint *)(iVar4 + 8) < uVar5) {
    FUN_00d83c2d();
  }
  while( true ) {
    if ((iVar4 == 0) || (iVar4 != iVar3)) {
      FUN_00d83c2d();
    }
    if (uVar5 == uVar1) break;
    if (iVar4 == 0) {
      FUN_00d83c2d();
    }
    if (*(uint *)(iVar4 + 8) <= uVar5) {
      FUN_00d83c2d();
    }
    uVar2 = *(undefined4 *)(uVar5 + 4);
    if (*(uint *)(iVar4 + 8) <= uVar5) {
      FUN_00d83c2d();
    }
    Game_logGeneral(game,"Draw deck: Instance #: %d Archetype # %d",uVar2);
    if (*(uint *)(iVar4 + 8) <= uVar5) {
      FUN_00d83c2d();
    }
    uVar5 = uVar5 + 8;
  }
  return;
}

