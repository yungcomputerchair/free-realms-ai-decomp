// addr: 0x0141a290
// name: GameCommand_ReadyForStartOfGame_cloneInto
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandReadyForStartOfGame.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommandReadyForStartOfGame_cloneInto(void * this, void * clone) */

void GameCommand_ReadyForStartOfGame_cloneInto(void *this,void *clone)

{
  void *gameCommand;
  void *in_ECX;
  
                    /* Copies base GameCommand state into a ReadyForStartOfGame clone after
                       dynamic-casting the target to the same command type. */
  gameCommand = (void *)FUN_00d8d382(this,0,&NetworkCommand::RTTI_Type_Descriptor,
                                     &GameCommand_ReadyForStartOfGame::RTTI_Type_Descriptor,0);
  if (gameCommand == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\game_command\\GameCommandReadyForStartOfGame.cpp",
                 0x35);
  }
  GameCommand_clone(in_ECX,gameCommand);
  return;
}

