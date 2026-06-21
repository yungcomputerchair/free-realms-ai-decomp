// addr: 0x014d7320
// name: GameCommand_ValueList_cloneInto
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandValueList.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_ValueList_clone(void * this, void * gameCommand) */

void __thiscall GameCommand_ValueList_cloneInto(void *this,void *gameCommand)

{
  void *gameCommand_00;
  
                    /* Clone routine for GameCommand_ValueList; it checks the destination type,
                       copies common GameCommand fields, then copies the value-list payload at
                       +0x24. */
  gameCommand_00 =
       (void *)FUN_00d8d382(gameCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                            &GameCommand_ValueList::RTTI_Type_Descriptor,0);
  if (gameCommand_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\game_command\\GameCommandValueList.cpp",0x39);
  }
  GameCommand_clone(this,gameCommand_00);
  StdVector28_assign((int)this + 0x24);
  return;
}

