// addr: 0x01429670
// name: GameCommand_OutOfSync_cloneInto
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandOutOfSync.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommandOutOfSync_cloneInto(void * this, void * clone) */

void __thiscall GameCommand_OutOfSync_cloneInto(void *this,void *clone)

{
  void *gameCommand;
  
                    /* Copies base GameCommand state into an OutOfSync clone after dynamic-casting
                       the target to GameCommand_OutOfSync. */
  gameCommand = (void *)FUN_00d8d382(clone,0,&NetworkCommand::RTTI_Type_Descriptor,
                                     &GameCommand_OutOfSync::RTTI_Type_Descriptor,0);
  if (gameCommand == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\game_command\\GameCommandOutOfSync.cpp",0x24);
  }
  GameCommand_clone(this,gameCommand);
  return;
}

