// addr: 0x014dd860
// name: GameCommand_FinishCustomChoice_clone
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandFinishCustomChoice.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_FinishCustomChoice_clone(void * this, void * targetCommand)
    */

void __thiscall GameCommand_FinishCustomChoice_clone(void *this,void *targetCommand)

{
  void *gameCommand;
  
                    /* Clones a GameCommand_FinishCustomChoice by dynamic-casting the target and
                       copying fields at 0x24 and 0x28. Evidence is RTTI and the 'clone' assert in
                       GameCommandFinishCustomChoice.cpp. */
  gameCommand = (void *)FUN_00d8d382(targetCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                                     &GameCommand_FinishCustomChoice::RTTI_Type_Descriptor,0);
  if (gameCommand == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\game_command\\GameCommandFinishCustomChoice.cpp",
                 0x46);
  }
  GameCommand_clone(this,gameCommand);
  *(undefined4 *)((int)gameCommand + 0x24) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)((int)gameCommand + 0x28) = *(undefined4 *)((int)this + 0x28);
  return;
}

