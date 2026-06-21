// addr: 0x014de900
// name: GameCommand_DiscardCard_clone
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandDiscardCard.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_DiscardCard_clone(void * this, void * targetCommand) */

void __thiscall GameCommand_DiscardCard_clone(void *this,void *targetCommand)

{
  void *gameCommand;
  
                    /* Clones a GameCommand_DiscardCard by dynamic-casting the target and copying
                       several card-related members including a byte at 0x4c. Evidence is RTTI and
                       the 'clone' assert in GameCommandDiscardCard.cpp. */
  gameCommand = (void *)FUN_00d8d382(targetCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                                     &GameCommand_DiscardCard::RTTI_Type_Descriptor,0);
  if (gameCommand == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\game_command\\GameCommandDiscardCard.cpp",0xa7);
  }
  GameCommand_clone(this,gameCommand);
  *(undefined4 *)((int)gameCommand + 0x24) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)((int)gameCommand + 0x28) = *(undefined4 *)((int)this + 0x28);
  *(undefined4 *)((int)gameCommand + 0x2c) = *(undefined4 *)((int)this + 0x2c);
  *(undefined1 *)((int)gameCommand + 0x4c) = *(undefined1 *)((int)this + 0x4c);
  return;
}

