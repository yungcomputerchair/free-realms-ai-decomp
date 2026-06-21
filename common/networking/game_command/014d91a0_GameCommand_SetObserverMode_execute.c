// addr: 0x014d91a0
// name: GameCommand_SetObserverMode_execute
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandSetObserverMode.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GameCommand_SetObserverMode_execute(void * this) */

int __fastcall GameCommand_SetObserverMode_execute(void *this)

{
  undefined4 extraout_EAX;
  
                    /* Executes SetObserverMode: optionally switches the current player/observer
                       context, applies observer-mode state, updates UI/game state, and returns
                       success. */
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mGame","..\\common\\networking\\game_command\\GameCommandSetObserverMode.cpp",0x77
                );
  }
  GameCommand_execute(this);
  if (*(char *)((int)this + 0x24) != '\0') {
    (**(code **)(**(int **)((int)this + 8) + 0x1c4))(*(undefined4 *)((int)this + 4));
    PlayArea_findPlayerElementById(*(void **)((int)this + 8),*(int *)((int)this + 4));
    GamePlayer_setAccountId(*(undefined4 *)((int)this + 0x28));
  }
  Game_setObserverMode(*(void **)((int)this + 8),*(char *)((int)this + 0x24));
  Game_setObserverModeState(*(void **)((int)this + 8),2);
  return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
}

