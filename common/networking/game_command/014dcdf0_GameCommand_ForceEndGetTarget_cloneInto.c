// addr: 0x014dcdf0
// name: GameCommand_ForceEndGetTarget_cloneInto
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandForceEndGetTarget.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_ForceEndGetTarget_clone(void * this, void * targetCommand) */

void __thiscall GameCommand_ForceEndGetTarget_cloneInto(void *this,void *targetCommand)

{
  void *gameCommand;
  
                    /* Clones a GameCommand_ForceEndGetTarget by dynamic-casting the target and
                       copying the field at offset 0x24. Evidence is the RTTI type
                       GameCommand_ForceEndGetTarget plus the assert string 'clone' in
                       GameCommandForceEndGetTarget.cpp. */
  gameCommand = (void *)FUN_00d8d382(targetCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                                     &GameCommand_ForceEndGetTarget::RTTI_Type_Descriptor,0);
  if (gameCommand == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\game_command\\GameCommandForceEndGetTarget.cpp",
                 0x3f);
  }
  GameCommand_clone(this,gameCommand);
  *(undefined4 *)((int)gameCommand + 0x24) = *(undefined4 *)((int)this + 0x24);
  return;
}

