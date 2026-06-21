// addr: 0x01459c60
// name: cwgamecommandsetupgame_sub_01459c60
// subsystem: common/rules/networking/game_command
// source (binary assert): common/rules/networking/game_command/cwgamecommandsetupgame.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void cwgamecommandsetupgame_sub_01459c60(undefined4 param_1_) */

void cwgamecommandsetupgame_sub_01459c60(undefined4 param_1_)

{
  void *gameCommand;
  void *in_ECX;
  
                    /* Is a class method with behavior inferred from its code shape. Evidence:
                       __FILE__ path
                       ..\\common\\rules\\networking\\game_command\\cwgamecommandsetupgame.cpp;
                       strings clone. */
  gameCommand = (void *)FUN_00d8d382(param_1_,0,&NetworkCommand::RTTI_Type_Descriptor,
                                     &CWGameCommand_SetupGame::RTTI_Type_Descriptor,0);
  if (gameCommand == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\rules\\networking\\game_command\\cwgamecommandsetupgame.cpp",
                 0x2c);
  }
  GameCommand_SetupGame_clone(in_ECX,gameCommand);
  return;
}

