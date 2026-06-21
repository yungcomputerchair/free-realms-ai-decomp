// addr: 0x014b3f00
// name: MatchCommand_SetBulkMatchState_dump
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MatchCommand_SetBulkMatchState_dump(void * this) */

void __thiscall MatchCommand_SetBulkMatchState_dump(void *this)

{
  void *in_stack_00000004;
  
                    /* Dumps a Set Bulk Match State command and then the common match/account
                       command fields. */
  FUN_01241650("Set Bulk Match State Match Command\n",0x23);
  GameCommand_MatchCommand_debugPrint(this,in_stack_00000004);
  return;
}

