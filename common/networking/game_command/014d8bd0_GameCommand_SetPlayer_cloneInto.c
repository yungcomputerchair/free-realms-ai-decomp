// addr: 0x014d8bd0
// name: GameCommand_SetPlayer_cloneInto
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandSetPlayer.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommandSetPlayer_cloneInto(void * this, void * clone) */

void __thiscall GameCommand_SetPlayer_cloneInto(void *this,void *clone)

{
  void *gameCommand;
  
                    /* Validates that the clone target is a GameCommand_SetPlayer and applies the
                       base command clone/copy helper; no derived fields are copied here. Evidence
                       is the clone assert and GameCommandSetPlayer.cpp path. */
  gameCommand = (void *)FUN_00d8d382(clone,0,&NetworkCommand::RTTI_Type_Descriptor,
                                     &GameCommand_SetPlayer::RTTI_Type_Descriptor,0);
  if (gameCommand == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\game_command\\GameCommandSetPlayer.cpp",0x23);
  }
  GameCommand_clone(this,gameCommand);
  return;
}

