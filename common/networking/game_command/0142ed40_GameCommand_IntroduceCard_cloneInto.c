// addr: 0x0142ed40
// name: GameCommand_IntroduceCard_cloneInto
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandIntroduceCard.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommandIntroduceCard_cloneInto(void * this, void * clone) */

void __thiscall GameCommand_IntroduceCard_cloneInto(void *this,void *clone)

{
  void *gameCommand;
  
                    /* Copies an IntroduceCard command into an existing clone, including base
                       GameCommand fields and scalar fields at 0x24, 0x28, and 0x2c. */
  gameCommand = (void *)FUN_00d8d382(clone,0,&NetworkCommand::RTTI_Type_Descriptor,
                                     &GameCommand_IntroduceCard::RTTI_Type_Descriptor,0);
  if (gameCommand == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\game_command\\GameCommandIntroduceCard.cpp",0x43);
  }
  GameCommand_clone(this,gameCommand);
  *(undefined4 *)((int)gameCommand + 0x24) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)((int)gameCommand + 0x28) = *(undefined4 *)((int)this + 0x28);
  *(undefined4 *)((int)gameCommand + 0x2c) = *(undefined4 *)((int)this + 0x2c);
  return;
}

