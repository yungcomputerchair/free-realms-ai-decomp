// addr: 0x01365140
// name: Game_releaseValidActionFilterHandle
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_releaseValidActionFilterHandle(void * validActionFilter) */

void Game_releaseValidActionFilterHandle(void *validActionFilter)

{
                    /* Asserts a validActionFilter pointer, converts it to its handle/id, and
                       releases/destroys that handle wrapper. */
  if (validActionFilter == (void *)0x0) {
    FUN_012f5a60("validActionFilter","..\\common\\common\\game\\Game.cpp",0x1a90);
  }
  validActionFilter = (void *)PlayElement_getId();
  FUN_0042c155(&validActionFilter);
  return;
}

