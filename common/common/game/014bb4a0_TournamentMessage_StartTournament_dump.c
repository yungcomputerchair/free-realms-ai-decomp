// addr: 0x014bb4a0
// name: TournamentMessage_StartTournament_dump
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TournamentMessage_StartTournament_dump(void * this) */

void __thiscall TournamentMessage_StartTournament_dump(void *this)

{
  void *in_stack_00000004;
  
                    /* Dumps a Start Tournament message and then the account-scoped command fields.
                        */
  FUN_01241650("Start Tournament Message\n",0x19);
  AccountCommand_dump(this,in_stack_00000004);
  return;
}

