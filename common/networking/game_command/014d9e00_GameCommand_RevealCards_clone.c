// addr: 0x014d9e00
// name: GameCommand_RevealCards_clone
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandRevealCards.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_RevealCards_clone(void * this, void * gameCommand) */

void __thiscall GameCommand_RevealCards_clone(void *this,void *gameCommand)

{
  void *gameCommand_00;
  
                    /* Clone routine for GameCommand_RevealCards; it validates the destination,
                       copies base GameCommand fields, and copies the card list/vector at +0x24. */
  gameCommand_00 =
       (void *)FUN_00d8d382(gameCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                            &GameCommand_RevealCards::RTTI_Type_Descriptor,0);
  if (gameCommand_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\game_command\\GameCommandRevealCards.cpp",0x31);
  }
  GameCommand_clone(this,gameCommand_00);
  FUN_005f1e5c((int)this + 0x24);
  return;
}

