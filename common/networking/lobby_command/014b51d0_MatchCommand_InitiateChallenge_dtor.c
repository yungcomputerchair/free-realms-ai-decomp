// addr: 0x014b51d0
// name: MatchCommand_InitiateChallenge_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MatchCommand_InitiateChallenge_dtor(void * this) */

void __fastcall MatchCommand_InitiateChallenge_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for MatchCommand_InitiateChallenge; it restores the class vftable
                       then calls MatchCommand base cleanup. Evidence is the
                       MatchCommand_InitiateChallenge::vftable assignment. */
  puStack_8 = &LAB_016a7d68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = MatchCommand_InitiateChallenge::vftable;
  local_4 = 0xffffffff;
  MatchCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

