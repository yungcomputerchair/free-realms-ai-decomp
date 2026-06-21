// addr: 0x014de180
// name: GameCommand_EndObserverMode_clone
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandEndObserverMode.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_EndObserverMode_clone(void * this, void * targetCommand) */

void __thiscall GameCommand_EndObserverMode_clone(void *this,void *targetCommand)

{
  void *gameCommand;
  
                    /* Clones a GameCommand_EndObserverMode by dynamic-casting the target and
                       copying the 0x24 member. Evidence is RTTI and the 'clone' assert in
                       GameCommandEndObserverMode.cpp. */
  gameCommand = (void *)FUN_00d8d382(targetCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                                     &GameCommand_EndObserverMode::RTTI_Type_Descriptor,0);
  if (gameCommand == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\game_command\\GameCommandEndObserverMode.cpp",0x30
                );
  }
  GameCommand_clone(this,gameCommand);
  *(undefined4 *)((int)gameCommand + 0x24) = *(undefined4 *)((int)this + 0x24);
  return;
}

