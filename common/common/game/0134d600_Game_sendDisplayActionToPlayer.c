// addr: 0x0134d600
// name: Game_sendDisplayActionToPlayer
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_sendDisplayActionToPlayer(void * this, int playerId, void *
   displayAction) */

void __thiscall Game_sendDisplayActionToPlayer(void *this,int playerId,void *displayAction)

{
  bool bVar1;
  char cVar2;
  
                    /* Validates a display action and, if game/player visibility conditions allow,
                       sends it to a player-specific display path; otherwise frees the action. */
  if (*(char *)((int)this + 0x388) == '\0') {
    if (displayAction != (void *)0x0) {
      StdVector_destroyPolymorphicTriples(displayAction);
                    /* WARNING: Subroutine does not return */
      _free(displayAction);
    }
  }
  else {
    bVar1 = NullablePtr_hasValue(displayAction);
    if (!bVar1) {
      FUN_012f5a60("displayAction->isValid()","..\\common\\common\\game\\Game.cpp",0x1262);
    }
    cVar2 = (**(code **)(*(int *)this + 0x90))(playerId,displayAction);
    if (cVar2 != '\0') {
      if ((((*(char *)((int)this + 0x318) != '\0') && (*(char *)((int)this + 0x1d8) == '\0')) &&
          ((playerId == 0 || (playerId == *(int *)((int)this + 0x13c))))) ||
         (((*(char *)((int)this + 0x14d) == '\0' && (*(char *)((int)this + 0x1d8) == '\0')) &&
          ((playerId == 0 || (playerId == *(int *)((int)this + 0x13c))))))) {
        (**(code **)(*(int *)this + 0x154))(displayAction);
        return;
      }
      if (displayAction != (void *)0x0) {
        StdVector_destroyPolymorphicTriples(displayAction);
                    /* WARNING: Subroutine does not return */
        _free(displayAction);
      }
    }
  }
  return;
}

