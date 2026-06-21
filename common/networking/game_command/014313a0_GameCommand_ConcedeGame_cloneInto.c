// addr: 0x014313a0
// name: GameCommand_ConcedeGame_cloneInto
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandConcedeGame.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommandConcedeGame_cloneInto(void * this, void * clone) */

void __thiscall GameCommand_ConcedeGame_cloneInto(void *this,void *clone)

{
  void *gameCommand;
  
                    /* Copies ConcedeGame command state into a checked clone target; it RTTI-checks
                       GameCommand_ConcedeGame, calls the base copy helper, and copies the byte at
                       +0x24. Evidence is the clone assert in GameCommandConcedeGame.cpp. */
  gameCommand = (void *)FUN_00d8d382(clone,0,&NetworkCommand::RTTI_Type_Descriptor,
                                     &GameCommand_ConcedeGame::RTTI_Type_Descriptor,0);
  if (gameCommand == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\game_command\\GameCommandConcedeGame.cpp",0x36);
  }
  GameCommand_clone(this,gameCommand);
  *(undefined1 *)((int)gameCommand + 0x24) = *(undefined1 *)((int)this + 0x24);
  return;
}

