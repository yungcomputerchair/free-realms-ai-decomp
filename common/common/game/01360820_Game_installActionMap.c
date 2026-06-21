// addr: 0x01360820
// name: Game_installActionMap
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_installActionMap(void * action, void * handler) */

void __thiscall Game_installActionMap(void *this,void *action,void *handler)

{
  int *piVar1;
  int iVar2;
  
                    /* Asserts action and handler, derives an action key, and stores the handler's
                       object handle into a global action-map entry. */
  if (action == (void *)0x0) {
    FUN_012f5a60("action","..\\common\\common\\game\\Game.cpp",0x1962);
  }
  if (handler == (void *)0x0) {
    FUN_012f5a60(&DAT_018778b4,"..\\common\\common\\game\\Game.cpp",0x1963);
  }
  action = (void *)FUN_01321f20();
  piVar1 = IntDefaultMap_getOrInsert((void *)((int)this + 0x2b0),(int *)&action);
  iVar2 = PlayElement_getId();
  *piVar1 = iVar2;
  return;
}

