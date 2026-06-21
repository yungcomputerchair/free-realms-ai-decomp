// addr: 0x014dbe20
// name: GameCommand_OfferAdjournment_cloneInto
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandOfferAdjournment.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommandOfferAdjournment_cloneInto(void * this, void * clone) */

void __thiscall GameCommand_OfferAdjournment_cloneInto(void *this,void *clone)

{
  void *gameCommand;
  
                    /* Copies OfferAdjournment derived state into a checked clone target, copying
                       the dword at +0x24 after the base clone/copy helper. Evidence is the clone
                       assert in GameCommandOfferAdjournment.cpp. */
  gameCommand = (void *)FUN_00d8d382(clone,0,&NetworkCommand::RTTI_Type_Descriptor,
                                     &GameCommand_OfferAdjournment::RTTI_Type_Descriptor,0);
  if (gameCommand == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\game_command\\GameCommandOfferAdjournment.cpp",
                 0x40);
  }
  GameCommand_clone(this,gameCommand);
  *(undefined4 *)((int)gameCommand + 0x24) = *(undefined4 *)((int)this + 0x24);
  return;
}

