// addr: 0x014b4d50
// name: MatchCommand_LaunchGame_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MatchCommand_LaunchGame_dtor(void * this) */

void __fastcall MatchCommand_LaunchGame_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for MatchCommand_LaunchGame; it restores the class vftable and
                       invokes MatchCommand base cleanup. Evidence is the
                       MatchCommand_LaunchGame::vftable assignment and callers from
                       CWMatchCommand_LaunchGame destructors. */
  puStack_8 = &LAB_016a7c38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = MatchCommand_LaunchGame::vftable;
  local_4 = 0xffffffff;
  MatchCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

