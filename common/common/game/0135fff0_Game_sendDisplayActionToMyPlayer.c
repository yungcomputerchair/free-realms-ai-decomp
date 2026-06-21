// addr: 0x0135fff0
// name: Game_sendDisplayActionToMyPlayer
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void Game_sendDisplayActionToMyPlayer(void * this, void * displayAction) */

void __thiscall Game_sendDisplayActionToMyPlayer(void *this,void *displayAction)

{
  bool bVar1;
  char cVar2;
  
                    /* Increments a global display-action counter, validates a display action,
                       submits it for this game's local player when allowed, otherwise frees it. */
  _DAT_01cbdbc4 = _DAT_01cbdbc4 + 1;
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
      FUN_012f5a60("displayAction->isValid()","..\\common\\common\\game\\Game.cpp",0x124e);
    }
    cVar2 = (**(code **)(*(int *)this + 0x90))(*(undefined4 *)((int)this + 0x13c),displayAction);
    if (cVar2 != '\0') {
      if (*(char *)((int)this + 0x1d8) == '\0') {
        FUN_012d2f40(&stack0xfffffffc);
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

