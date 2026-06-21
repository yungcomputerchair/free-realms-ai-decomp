// addr: 0x01459810
// name: cwmatchcommandlaunchgame_sub_01459810
// subsystem: common/rules/networking/match_command
// source (binary assert): common/rules/networking/match_command/cwmatchcommandlaunchgame.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void cwmatchcommandlaunchgame_sub_01459810(undefined4 param_1_) */

void cwmatchcommandlaunchgame_sub_01459810(undefined4 param_1_)

{
  void *target;
  void *in_ECX;
  
                    /* Is a class method with behavior inferred from its code shape. Evidence:
                       __FILE__ path
                       ..\\common\\rules\\networking\\match_command\\cwmatchcommandlaunchgame.cpp;
                       strings clone. */
  target = (void *)FUN_00d8d382(param_1_,0,&NetworkCommand::RTTI_Type_Descriptor,
                                &CWMatchCommand_LaunchGame::RTTI_Type_Descriptor,0);
  if (target == (void *)0x0) {
    FUN_012f5a60("clone",
                 "..\\common\\rules\\networking\\match_command\\cwmatchcommandlaunchgame.cpp",0x2f);
  }
  MatchCommand_LaunchGame_cloneInto(in_ECX,target);
  return;
}

