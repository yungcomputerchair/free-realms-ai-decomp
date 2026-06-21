// addr: 0x014ddd50
// name: GameCommand_EndGame_clone
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandEndGame.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_EndGame_clone(void * this, void * targetCommand) */

void __thiscall GameCommand_EndGame_clone(void *this,void *targetCommand)

{
  void *gameCommand;
  
                    /* Clones a GameCommand_EndGame by dynamic-casting the target and copying the
                       byte at offset 0x24. Evidence is RTTI for GameCommand_EndGame and the 'clone'
                       assert in GameCommandEndGame.cpp. */
  gameCommand = (void *)FUN_00d8d382(targetCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                                     &GameCommand_EndGame::RTTI_Type_Descriptor,0);
  if (gameCommand == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\game_command\\GameCommandEndGame.cpp",0x36);
  }
  GameCommand_clone(this,gameCommand);
  *(undefined1 *)((int)gameCommand + 0x24) = *(undefined1 *)((int)this + 0x24);
  return;
}

