// addr: 0x0141a900
// name: GameCommand_StateSpecificMessage_cloneInto
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandStateSpecificMessage.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommandStateSpecificMessage_cloneInto(void * this, void * clone) */

void __thiscall GameCommand_StateSpecificMessage_cloneInto(void *this,void *clone)

{
  void *gameCommand;
  
                    /* Copies a StateSpecificMessage command into an existing clone, including base
                       GameCommand fields, two pointer-like fields at 0x30/0x34, and scalar fields
                       at 0x24-0x2c. */
  gameCommand = (void *)FUN_00d8d382(clone,0,&NetworkCommand::RTTI_Type_Descriptor,
                                     &GameCommand_StateSpecificMessage::RTTI_Type_Descriptor,0);
  if (gameCommand == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\game_command\\GameCommandStateSpecificMessage.cpp"
                 ,0x70);
  }
  GameCommand_clone(this,gameCommand);
  FUN_0141a630(*(undefined4 *)((int)this + 0x30));
  FUN_0141a6e0(*(undefined4 *)((int)this + 0x34));
  *(undefined4 *)((int)gameCommand + 0x24) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)((int)gameCommand + 0x28) = *(undefined4 *)((int)this + 0x28);
  *(undefined4 *)((int)gameCommand + 0x2c) = *(undefined4 *)((int)this + 0x2c);
  return;
}

