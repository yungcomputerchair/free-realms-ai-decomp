// addr: 0x014b5590
// name: MatchCommand_InitiateChallenge_dump
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MatchCommand_InitiateChallenge_dump(void * this) */

void __thiscall MatchCommand_InitiateChallenge_dump(void *this)

{
  void *in_stack_00000004;
  
                    /* Dumps an Initiate Challenge match command and then the common match/account
                       command fields. */
  FUN_01241650("Initiate Challenge Match Command\n",0x21);
  GameCommand_MatchCommand_debugPrint(this,in_stack_00000004);
  return;
}

