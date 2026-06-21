// addr: 0x013539e0
// name: Game_addObserver
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_addObserver(void * game, void * player) */

void __thiscall Game_addObserver(void *this,void *game,void *player)

{
  int *piVar1;
  void *pvVar2;
  int *piVar3;
  
                    /* Adds a player as an observer unless already present, logging when an observer
                       is skipped. */
  piVar1 = *(int **)((int)this + 0x4c);
  if (piVar1 < *(int **)((int)this + 0x48)) {
    FUN_00d83c2d();
  }
  piVar3 = *(int **)((int)this + 0x48);
  if (*(int **)((int)this + 0x4c) < piVar3) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (this == (void *)0xffffffbc) {
      FUN_00d83c2d();
    }
    if (piVar3 == piVar1) {
      (**(code **)(*(int *)this + 0x1c8))(game);
      return;
    }
    if (this == (void *)0xffffffbc) {
      FUN_00d83c2d();
    }
    if (*(int **)((int)this + 0x4c) <= piVar3) {
      FUN_00d83c2d();
    }
    if ((*piVar3 != 0) && (pvVar2 = (void *)GamePlayer_getPlayerId(), game == pvVar2)) break;
    if (*(int **)((int)this + 0x4c) <= piVar3) {
      FUN_00d83c2d();
    }
    piVar3 = piVar3 + 1;
  }
  Game_logGeneral(this,"Skipping adding Observer: %d",game);
  return;
}

