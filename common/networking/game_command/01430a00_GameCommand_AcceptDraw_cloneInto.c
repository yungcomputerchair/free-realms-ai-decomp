// addr: 0x01430a00
// name: GameCommand_AcceptDraw_cloneInto
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandAcceptDraw.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommandAcceptDraw_cloneInto(void * this, void * clone) */

void __thiscall GameCommand_AcceptDraw_cloneInto(void *this,void *clone)

{
  void *gameCommand;
  
                    /* Copies an AcceptDraw command into an existing clone after RTTI-checking the
                       target, including the byte field at offset 0x24. */
  gameCommand = (void *)FUN_00d8d382(clone,0,&NetworkCommand::RTTI_Type_Descriptor,
                                     &GameCommand_AcceptDraw::RTTI_Type_Descriptor,0);
  if (gameCommand == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\game_command\\GameCommandAcceptDraw.cpp",0x36);
  }
  GameCommand_clone(this,gameCommand);
  *(undefined1 *)((int)gameCommand + 0x24) = *(undefined1 *)((int)this + 0x24);
  return;
}

