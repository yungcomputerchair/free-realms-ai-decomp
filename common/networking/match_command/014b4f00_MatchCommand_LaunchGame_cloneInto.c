// addr: 0x014b4f00
// name: MatchCommand_LaunchGame_cloneInto
// subsystem: common/networking/match_command
// source (binary assert): common/networking/match_command/MatchCommandLaunchGame.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MatchCommand_LaunchGame_cloneInto(void * this, void * target) */

void __thiscall MatchCommand_LaunchGame_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Copies a LaunchGame match command into an RTTI-checked target. This class has
                       no visible fields beyond the MatchCommand base state. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &MatchCommand_LaunchGame::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\match_command\\MatchCommandLaunchGame.cpp",0x2f);
  }
  MatchCommand_cloneInto(this,target_00);
  return;
}

