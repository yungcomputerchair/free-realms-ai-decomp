// addr: 0x014d97d0
// name: GameCommand_SendSerializedGame_cloneInto
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandSendSerializedGame.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommandSendSerializedGame_cloneInto(void * this, void * clone) */

void __thiscall GameCommand_SendSerializedGame_cloneInto(void *this,void *clone)

{
  void *gameCommand;
  
                    /* Copies SendSerializedGame state into a checked clone target after the base
                       copy, transferring the compressed buffer pointer and serialized-data field at
                       +0x24/+0x28. Evidence is the clone assert in
                       GameCommandSendSerializedGame.cpp. */
  gameCommand = (void *)FUN_00d8d382(clone,0,&NetworkCommand::RTTI_Type_Descriptor,
                                     &GameCommand_SendSerializedGame::RTTI_Type_Descriptor,0);
  if (gameCommand == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\game_command\\GameCommandSendSerializedGame.cpp",
                 0x56);
  }
  GameCommand_clone(this,gameCommand);
  *(undefined4 *)((int)gameCommand + 0x24) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)((int)gameCommand + 0x28) = *(undefined4 *)((int)this + 0x28);
  return;
}

