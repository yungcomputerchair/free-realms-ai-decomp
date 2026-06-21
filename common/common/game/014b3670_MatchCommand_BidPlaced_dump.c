// addr: 0x014b3670
// name: MatchCommand_BidPlaced_dump
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MatchCommand_BidPlaced_dump(void * this) */

void __thiscall MatchCommand_BidPlaced_dump(void *this)

{
  void *in_stack_00000004;
  
                    /* Dumps a Bid Placed match command and then the common match/account command
                       fields. */
  FUN_01241650("Bid Placed Match Command\n",0x19);
  GameCommand_MatchCommand_debugPrint(this,in_stack_00000004);
  return;
}

