// addr: 0x014db950
// name: GameCommand_OfferDraw_cloneInto
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandOfferDraw.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommandOfferDraw_cloneInto(void * this, void * clone) */

void __thiscall GameCommand_OfferDraw_cloneInto(void *this,void *clone)

{
  void *gameCommand;
  
                    /* Checks that the clone target is GameCommand_OfferDraw and applies the base
                       clone/copy helper with no derived fields. Evidence is the clone assert in
                       GameCommandOfferDraw.cpp. */
  gameCommand = (void *)FUN_00d8d382(clone,0,&NetworkCommand::RTTI_Type_Descriptor,
                                     &GameCommand_OfferDraw::RTTI_Type_Descriptor,0);
  if (gameCommand == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\game_command\\GameCommandOfferDraw.cpp",0x33);
  }
  GameCommand_clone(this,gameCommand);
  return;
}

