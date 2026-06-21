// addr: 0x014dc360
// name: GameCommand_LostPlayer_cloneInto
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandLostPlayer.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommandLostPlayer_cloneInto(void * this, void * clone) */

void __thiscall GameCommand_LostPlayer_cloneInto(void *this,void *clone)

{
  void *gameCommand;
  
                    /* Copies LostPlayer state into a checked clone target, assigning the source
                       field at +0x24 into the clone's early field before base clone/copy
                       processing. Evidence is the clone assert in GameCommandLostPlayer.cpp. */
  gameCommand = (void *)FUN_00d8d382(clone,0,&NetworkCommand::RTTI_Type_Descriptor,
                                     &GameCommand_LostPlayer::RTTI_Type_Descriptor,0);
  if (gameCommand == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\game_command\\GameCommandLostPlayer.cpp",0x32);
  }
  *(undefined4 *)((int)gameCommand + 4) = *(undefined4 *)((int)this + 0x24);
  GameCommand_clone(this,gameCommand);
  return;
}

