// addr: 0x01430ee0
// name: GameCommand_AcceptAdjournment_cloneInto
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandAcceptAdjournment.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommandAcceptAdjournment_cloneInto(void * this, void * clone) */

void __thiscall GameCommand_AcceptAdjournment_cloneInto(void *this,void *clone)

{
  void *gameCommand;
  
                    /* Copies an AcceptAdjournment command into an existing clone after verifying
                       the target dynamic-casts to GameCommand_AcceptAdjournment; it copies the byte
                       field at +0x24. Evidence is the clone assert and
                       GameCommandAcceptAdjournment.cpp path. */
  gameCommand = (void *)FUN_00d8d382(clone,0,&NetworkCommand::RTTI_Type_Descriptor,
                                     &GameCommand_AcceptAdjournment::RTTI_Type_Descriptor,0);
  if (gameCommand == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\game_command\\GameCommandAcceptAdjournment.cpp",
                 0x37);
  }
  GameCommand_clone(this,gameCommand);
  *(undefined1 *)((int)gameCommand + 0x24) = *(undefined1 *)((int)this + 0x24);
  return;
}

