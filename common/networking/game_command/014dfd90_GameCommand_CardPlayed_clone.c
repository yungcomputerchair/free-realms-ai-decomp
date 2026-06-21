// addr: 0x014dfd90
// name: GameCommand_CardPlayed_clone
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandCardPlayed.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_CardPlayed_clone(void * this, void * targetCommand) */

void __thiscall GameCommand_CardPlayed_clone(void *this,void *targetCommand)

{
  void *gameCommand;
  
                    /* Clones a GameCommand_CardPlayed by dynamic-casting the target and copying
                       fields 0x24 through 0x30. Evidence is RTTI for GameCommand_CardPlayed and the
                       'clone' assert in GameCommandCardPlayed.cpp. */
  gameCommand = (void *)FUN_00d8d382(targetCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                                     &GameCommand_CardPlayed::RTTI_Type_Descriptor,0);
  if (gameCommand == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\game_command\\GameCommandCardPlayed.cpp",0x50);
  }
  GameCommand_clone(this,gameCommand);
  *(undefined4 *)((int)gameCommand + 0x24) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)((int)gameCommand + 0x28) = *(undefined4 *)((int)this + 0x28);
  *(undefined4 *)((int)gameCommand + 0x2c) = *(undefined4 *)((int)this + 0x2c);
  *(undefined4 *)((int)gameCommand + 0x30) = *(undefined4 *)((int)this + 0x30);
  return;
}

