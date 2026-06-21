// addr: 0x014da6a0
// name: GameCommand_ReplaceCard_cloneInto
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandReplaceCard.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommandReplaceCard_cloneInto(void * this, void * clone) */

void __thiscall GameCommand_ReplaceCard_cloneInto(void *this,void *clone)

{
  void *gameCommand;
  
                    /* Copies ReplaceCard derived fields into a checked clone target after the base
                       clone/copy helper, copying dwords at +0x24, +0x28, +0x2c, and +0x30. Evidence
                       is the clone assert in GameCommandReplaceCard.cpp. */
  gameCommand = (void *)FUN_00d8d382(clone,0,&NetworkCommand::RTTI_Type_Descriptor,
                                     &GameCommand_ReplaceCard::RTTI_Type_Descriptor,0);
  if (gameCommand == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\game_command\\GameCommandReplaceCard.cpp",0x6e);
  }
  GameCommand_clone(this,gameCommand);
  *(undefined4 *)((int)gameCommand + 0x24) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)((int)gameCommand + 0x28) = *(undefined4 *)((int)this + 0x28);
  *(undefined4 *)((int)gameCommand + 0x2c) = *(undefined4 *)((int)this + 0x2c);
  *(undefined4 *)((int)gameCommand + 0x30) = *(undefined4 *)((int)this + 0x30);
  return;
}

