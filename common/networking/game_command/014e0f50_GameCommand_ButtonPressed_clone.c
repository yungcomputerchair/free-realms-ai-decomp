// addr: 0x014e0f50
// name: GameCommand_ButtonPressed_clone
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandButtonPressed.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_ButtonPressed_clone(void * this, void * targetCommand) */

void __thiscall GameCommand_ButtonPressed_clone(void *this,void *targetCommand)

{
  void *gameCommand;
  
                    /* Clones a GameCommand_ButtonPressed by dynamic-casting the target and copying
                       fields at 0x24, 0x28, and 0x2c. Evidence is RTTI and the 'clone' assert in
                       GameCommandButtonPressed.cpp. */
  gameCommand = (void *)FUN_00d8d382(targetCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                                     &GameCommand_ButtonPressed::RTTI_Type_Descriptor,0);
  if (gameCommand == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\game_command\\GameCommandButtonPressed.cpp",0x32);
  }
  GameCommand_clone(this,gameCommand);
  *(undefined4 *)((int)gameCommand + 0x24) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)((int)gameCommand + 0x28) = *(undefined4 *)((int)this + 0x28);
  *(undefined4 *)((int)gameCommand + 0x2c) = *(undefined4 *)((int)this + 0x2c);
  return;
}

