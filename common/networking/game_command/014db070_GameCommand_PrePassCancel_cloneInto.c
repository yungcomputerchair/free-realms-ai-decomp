// addr: 0x014db070
// name: GameCommand_PrePassCancel_cloneInto
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandPrePassCancel.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommandPrePassCancel_cloneInto(void * this, void * clone) */

void __thiscall GameCommand_PrePassCancel_cloneInto(void *this,void *clone)

{
  void *gameCommand;
  
                    /* Checks that the clone target is GameCommand_PrePassCancel and applies the
                       base clone/copy helper; no additional fields are copied. Evidence is the
                       clone assert in GameCommandPrePassCancel.cpp. */
  gameCommand = (void *)FUN_00d8d382(clone,0,&NetworkCommand::RTTI_Type_Descriptor,
                                     &GameCommand_PrePassCancel::RTTI_Type_Descriptor,0);
  if (gameCommand == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\game_command\\GameCommandPrePassCancel.cpp",0x2d);
  }
  GameCommand_clone(this,gameCommand);
  return;
}

