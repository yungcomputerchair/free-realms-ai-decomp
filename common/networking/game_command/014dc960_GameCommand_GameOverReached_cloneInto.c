// addr: 0x014dc960
// name: GameCommand_GameOverReached_cloneInto
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandGameOverReached.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommandGameOverReached_cloneInto(void * this, void * clone) */

void __thiscall GameCommand_GameOverReached_cloneInto(void *this,void *clone)

{
  void *gameCommand;
  
                    /* Checks that the clone target is GameCommand_GameOverReached and applies the
                       base clone/copy helper; no derived fields are copied. Evidence is the clone
                       assert in GameCommandGameOverReached.cpp. */
  gameCommand = (void *)FUN_00d8d382(clone,0,&NetworkCommand::RTTI_Type_Descriptor,
                                     &GameCommand_GameOverReached::RTTI_Type_Descriptor,0);
  if (gameCommand == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\game_command\\GameCommandGameOverReached.cpp",0x2a
                );
  }
  GameCommand_clone(this,gameCommand);
  return;
}

