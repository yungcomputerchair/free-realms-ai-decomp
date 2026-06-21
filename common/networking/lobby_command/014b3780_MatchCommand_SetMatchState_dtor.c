// addr: 0x014b3780
// name: MatchCommand_SetMatchState_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MatchCommand_SetMatchState_dtor(void * this) */

void __fastcall MatchCommand_SetMatchState_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for MatchCommand_SetMatchState; it restores the class vftable and
                       invokes the MatchCommand base cleanup. Evidence is the
                       MatchCommand_SetMatchState::vftable assignment. */
  puStack_8 = &LAB_016a77b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = MatchCommand_SetMatchState::vftable;
  local_4 = 0xffffffff;
  MatchCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

