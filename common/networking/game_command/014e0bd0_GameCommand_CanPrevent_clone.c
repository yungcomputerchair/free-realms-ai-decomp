// addr: 0x014e0bd0
// name: GameCommand_CanPrevent_clone
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandCanPrevent.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_CanPrevent_clone(void * this, void * gameCommand) */

void __thiscall GameCommand_CanPrevent_clone(void *this,void *gameCommand)

{
  void *gameCommand_00;
  
                    /* Clone routine for GameCommand_CanPrevent; it validates the target, copies
                       common GameCommand state, and copies the preventable-items collection at
                       +0x24. */
  gameCommand_00 =
       (void *)FUN_00d8d382(gameCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                            &GameCommand_CanPrevent::RTTI_Type_Descriptor,0);
  if (gameCommand_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\game_command\\GameCommandCanPrevent.cpp",0x39);
  }
  GameCommand_clone(this,gameCommand_00);
  FUN_005f1e5c((int)this + 0x24);
  return;
}

