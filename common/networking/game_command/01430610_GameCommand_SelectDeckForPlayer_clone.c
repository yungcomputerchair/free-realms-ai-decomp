// addr: 0x01430610
// name: GameCommand_SelectDeckForPlayer_clone
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandSelectDeckForPlayer.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_SelectDeckForPlayer_clone(void * this, void * gameCommand) */

void __thiscall GameCommand_SelectDeckForPlayer_clone(void *this,void *gameCommand)

{
  void *gameCommand_00;
  undefined4 uVar1;
  
                    /* Clones a GameCommand_SelectDeckForPlayer into the supplied
                       NetworkCommand-derived target, copying base GameCommand state, the string at
                       +0x24, and cloning the object at +0x40. */
  gameCommand_00 =
       (void *)FUN_00d8d382(gameCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                            &GameCommand_SelectDeckForPlayer::RTTI_Type_Descriptor,0);
  if (gameCommand_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\game_command\\GameCommandSelectDeckForPlayer.cpp",
                 0x38);
  }
  GameCommand_clone(this,gameCommand_00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)gameCommand_00 + 0x24),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0x24),0,0xffffffff);
  uVar1 = (**(code **)(**(int **)((int)this + 0x40) + 0x74))();
  *(undefined4 *)((int)gameCommand_00 + 0x40) = uVar1;
  return;
}

