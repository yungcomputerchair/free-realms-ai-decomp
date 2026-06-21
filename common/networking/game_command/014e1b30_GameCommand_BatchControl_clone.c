// addr: 0x014e1b30
// name: GameCommand_BatchControl_clone
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandBatchControl.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_BatchControl_clone(void * this, void * targetCommand) */

void __thiscall GameCommand_BatchControl_clone(void *this,void *targetCommand)

{
  void *gameCommand;
  
                    /* Clones a GameCommand_BatchControl by dynamic-casting the target and copying
                       the 0x24 member. Evidence is RTTI and the 'clone' assert in
                       GameCommandBatchControl.cpp. */
  gameCommand = (void *)FUN_00d8d382(targetCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                                     &GameCommand_BatchControl::RTTI_Type_Descriptor,0);
  if (gameCommand == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\game_command\\GameCommandBatchControl.cpp",0x33);
  }
  GameCommand_clone(this,gameCommand);
  *(undefined4 *)((int)gameCommand + 0x24) = *(undefined4 *)((int)this + 0x24);
  return;
}

