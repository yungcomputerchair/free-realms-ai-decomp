// addr: 0x014da3f0
// name: GameCommand_Reshuffle_cloneInto
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandReshuffle.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommandReshuffle_cloneInto(void * this, void * clone) */

void __thiscall GameCommand_Reshuffle_cloneInto(void *this,void *clone)

{
  void *gameCommand;
  
                    /* Checks that the clone target is GameCommand_Reshuffle and runs the base
                       clone/copy helper; there are no derived fields to copy. Evidence is the clone
                       assert in GameCommandReshuffle.cpp. */
  gameCommand = (void *)FUN_00d8d382(clone,0,&NetworkCommand::RTTI_Type_Descriptor,
                                     &GameCommand_Reshuffle::RTTI_Type_Descriptor,0);
  if (gameCommand == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\game_command\\GameCommandReshuffle.cpp",0x2d);
  }
  GameCommand_clone(this,gameCommand);
  return;
}

