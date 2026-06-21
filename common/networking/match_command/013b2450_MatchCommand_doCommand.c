// addr: 0x013b2450
// name: MatchCommand_doCommand
// subsystem: common/networking/match_command
// source (binary assert): common/networking/match_command/MatchCommand.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int MatchCommand_doCommand(void * this) */

int __cdecl MatchCommand_doCommand(void *this)

{
  uint uVar1;
  
                    /* Base MatchCommand doCommand/assert stub; it asserts false in MatchCommand.cpp
                       line 0x20 and returns 0, matching a virtual command execution method that
                       derived commands override. */
  uVar1 = FUN_012f5a60("false","..\\common\\networking\\match_command\\MatchCommand.cpp",0x20);
  return uVar1 & 0xffffff00;
}

