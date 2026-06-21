// addr: 0x0142fe30
// name: GameCommand_RemovePlayer_cloneInto
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandRemovePlayer.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommandRemovePlayer_cloneInto(void * this, void * clone) */

void __thiscall GameCommand_RemovePlayer_cloneInto(void *this,void *clone)

{
  void *gameCommand;
  
                    /* Copies a RemovePlayer command into an existing clone after RTTI-checking the
                       target, including the command-specific field at offset 0x24. */
  gameCommand = (void *)FUN_00d8d382(clone,0,&NetworkCommand::RTTI_Type_Descriptor,
                                     &GameCommand_RemovePlayer::RTTI_Type_Descriptor,0);
  if (gameCommand == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\game_command\\GameCommandRemovePlayer.cpp",0x34);
  }
  GameCommand_clone(this,gameCommand);
  *(undefined4 *)((int)gameCommand + 0x24) = *(undefined4 *)((int)this + 0x24);
  return;
}

