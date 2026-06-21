// addr: 0x014d88f0
// name: GameCommand_SetupGame_clone
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandSetupGame.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_SetupGame_clone(void * this, void * gameCommand) */

void __thiscall GameCommand_SetupGame_clone(void *this,void *gameCommand)

{
  void *this_00;
  void *gameCommand_00;
  void *unaff_EDI;
  undefined1 auStack_8 [8];
  
                    /* Clone routine for GameCommand_SetupGame; it validates the destination, copies
                       base state, multiple scalar setup fields, two containers, and the trailing
                       container at +0x6c. */
  gameCommand_00 =
       (void *)FUN_00d8d382(gameCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                            &GameCommand_SetupGame::RTTI_Type_Descriptor,0);
  if (gameCommand_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\game_command\\GameCommandSetupGame.cpp",0x59);
  }
  GameCommand_clone(this,gameCommand_00);
  GameCommand_setGameID(gameCommand_00,*(int *)((int)this + 0xc));
  *(undefined4 *)((int)gameCommand_00 + 0x24) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)((int)gameCommand_00 + 0x28) = *(undefined4 *)((int)this + 0x28);
  *(undefined4 *)((int)gameCommand_00 + 0x2c) = *(undefined4 *)((int)this + 0x2c);
  FUN_005f1e5c((int)this + 0x30);
  FUN_005f1e5c((int)this + 0x40);
  *(undefined4 *)((int)gameCommand_00 + 0x50) = *(undefined4 *)((int)this + 0x50);
  *(undefined4 *)((int)gameCommand_00 + 0x54) = *(undefined4 *)((int)this + 0x54);
  *(undefined4 *)((int)gameCommand_00 + 0x58) = *(undefined4 *)((int)this + 0x58);
  *(undefined4 *)((int)gameCommand_00 + 0x5c) = *(undefined4 *)((int)this + 0x5c);
  *(undefined4 *)((int)gameCommand_00 + 0x60) = *(undefined4 *)((int)this + 0x60);
  *(undefined4 *)((int)gameCommand_00 + 100) = *(undefined4 *)((int)this + 100);
  this_00 = (void *)((int)gameCommand_00 + 0x6c);
  *(undefined4 *)((int)gameCommand_00 + 0x68) = *(undefined4 *)((int)this + 0x68);
  if (this_00 != (void *)((int)this + 0x6c)) {
    StdRbTree_eraseRange
              (this_00,auStack_8,this_00,(void *)**(undefined4 **)((int)gameCommand_00 + 0x70),
               this_00,*(undefined4 **)((int)gameCommand_00 + 0x70),unaff_EDI);
    StdTree_Node21_assignFromTree(this_00,(void *)((int)this + 0x6c),unaff_EDI);
  }
  *(undefined4 *)((int)gameCommand_00 + 0x78) = *(undefined4 *)((int)this + 0x78);
  *(undefined4 *)((int)gameCommand_00 + 0x7c) = *(undefined4 *)((int)this + 0x7c);
  return;
}

