// addr: 0x014b59b0
// name: FUN_014b59b0
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void sub_014b59b0(void * this) */

void __thiscall sub_014b59b0(void *this)

{
  void *in_stack_00000004;
  
                    /* Dumps a second command whose visible label is also Bid Placed Match Command,
                       then emits the common match/account command fields. */
  FUN_01241650("Bid Placed Match Command\n",0x19);
  GameCommand_MatchCommand_debugPrint(this,in_stack_00000004);
  return;
}

