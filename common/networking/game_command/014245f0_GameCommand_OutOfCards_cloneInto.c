// addr: 0x014245f0
// name: GameCommand_OutOfCards_cloneInto
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandOutOfCards.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommandOutOfCards_cloneInto(void * this, void * clone) */

void __thiscall GameCommand_OutOfCards_cloneInto(void *this,void *clone)

{
  void *gameCommand;
  
                    /* Copies base GameCommand state into an OutOfCards clone after verifying the
                       clone object has the expected command RTTI. */
  gameCommand = (void *)FUN_00d8d382(clone,0,&NetworkCommand::RTTI_Type_Descriptor,
                                     &GameCommand_OutOfCards::RTTI_Type_Descriptor,0);
  if (gameCommand == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\game_command\\GameCommandOutOfCards.cpp",0x3f);
  }
  GameCommand_clone(this,gameCommand);
  return;
}

