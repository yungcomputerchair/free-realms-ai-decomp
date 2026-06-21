// addr: 0x014db4a0
// name: GameCommand_PrePass_cloneInto
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandPrePass.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommandPrePass_cloneInto(void * this, void * clone) */

void __thiscall GameCommand_PrePass_cloneInto(void *this,void *clone)

{
  void *gameCommand;
  
                    /* Verifies the clone target is GameCommand_PrePass and runs the base clone/copy
                       helper; the class has no derived fields copied here. Evidence is the clone
                       assert in GameCommandPrePass.cpp. */
  gameCommand = (void *)FUN_00d8d382(clone,0,&NetworkCommand::RTTI_Type_Descriptor,
                                     &GameCommand_PrePass::RTTI_Type_Descriptor,0);
  if (gameCommand == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\game_command\\GameCommandPrePass.cpp",0x2b);
  }
  GameCommand_clone(this,gameCommand);
  return;
}

