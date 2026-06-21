// addr: 0x01424ff0
// name: GameCommand_DrawCards_cloneInto
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandDrawCards.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_DrawCards_clone(void * this, void * targetCommand) */

void __thiscall GameCommand_DrawCards_cloneInto(void *this,void *targetCommand)

{
  void *gameCommand;
  
                    /* Clones a GameCommand_DrawCards by dynamic-casting the target, copying the
                       0x24 member, and copying the draw-card collection at 0x38. Evidence is RTTI
                       and the 'clone' assert in GameCommandDrawCards.cpp. */
  gameCommand = (void *)FUN_00d8d382(targetCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                                     &GameCommand_DrawCards::RTTI_Type_Descriptor,0);
  if (gameCommand == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\game_command\\GameCommandDrawCards.cpp",0x58);
  }
  GameCommand_clone(this,gameCommand);
  *(undefined4 *)((int)gameCommand + 0x24) = *(undefined4 *)((int)this + 0x24);
  FUN_005f1e5c((int)this + 0x38);
  return;
}

