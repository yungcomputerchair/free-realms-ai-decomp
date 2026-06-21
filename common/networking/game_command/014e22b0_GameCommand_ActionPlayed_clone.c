// addr: 0x014e22b0
// name: GameCommand_ActionPlayed_clone
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandActionPlayed.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_ActionPlayed_clone(void * this, void * targetCommand) */

void __thiscall GameCommand_ActionPlayed_clone(void *this,void *targetCommand)

{
  void *gameCommand;
  
                    /* Clones a GameCommand_ActionPlayed by dynamic-casting the target and copying a
                       large block of action/card fields from 0x24 through 0x58. Evidence is RTTI
                       and the 'clone' assert in GameCommandActionPlayed.cpp. */
  gameCommand = (void *)FUN_00d8d382(targetCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                                     &GameCommand_ActionPlayed::RTTI_Type_Descriptor,0);
  if (gameCommand == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\game_command\\GameCommandActionPlayed.cpp",0xe7);
  }
  GameCommand_clone(this,gameCommand);
  *(undefined4 *)((int)gameCommand + 0x24) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)((int)gameCommand + 0x28) = *(undefined4 *)((int)this + 0x28);
  *(undefined4 *)((int)gameCommand + 0x2c) = *(undefined4 *)((int)this + 0x2c);
  *(undefined4 *)((int)gameCommand + 0x30) = *(undefined4 *)((int)this + 0x30);
  *(undefined4 *)((int)gameCommand + 0x34) = *(undefined4 *)((int)this + 0x34);
  *(undefined4 *)((int)gameCommand + 0x38) = *(undefined4 *)((int)this + 0x38);
  *(undefined4 *)((int)gameCommand + 0x3c) = *(undefined4 *)((int)this + 0x3c);
  *(undefined4 *)((int)gameCommand + 0x40) = *(undefined4 *)((int)this + 0x40);
  *(undefined4 *)((int)gameCommand + 0x44) = *(undefined4 *)((int)this + 0x44);
  *(undefined4 *)((int)gameCommand + 0x48) = *(undefined4 *)((int)this + 0x48);
  *(undefined4 *)((int)gameCommand + 0x4c) = *(undefined4 *)((int)this + 0x4c);
  *(undefined4 *)((int)gameCommand + 0x50) = *(undefined4 *)((int)this + 0x50);
  *(undefined4 *)((int)gameCommand + 0x54) = *(undefined4 *)((int)this + 0x54);
  *(undefined1 *)((int)gameCommand + 0x58) = *(undefined1 *)((int)this + 0x58);
  return;
}

