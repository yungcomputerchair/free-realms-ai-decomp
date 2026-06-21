// addr: 0x014b50c0
// name: MatchCommand_LaunchGame_dump
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MatchCommand_LaunchGame_dump(void * this) */

void __thiscall MatchCommand_LaunchGame_dump(void *this)

{
  void *in_stack_00000004;
  
                    /* Dumps a Launch Game match command and then the common match/account command
                       fields. */
  FUN_01241650("Launch Game Match Command\n",0x1a);
  GameCommand_MatchCommand_debugPrint(this,in_stack_00000004);
  return;
}

