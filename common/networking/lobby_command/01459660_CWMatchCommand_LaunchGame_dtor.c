// addr: 0x01459660
// name: CWMatchCommand_LaunchGame_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWMatchCommand_LaunchGame_dtor(void * this) */

void __fastcall CWMatchCommand_LaunchGame_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for CWMatchCommand_LaunchGame; it installs the derived vftable
                       then calls the MatchCommand_LaunchGame destructor/base cleanup. Evidence is
                       the CWMatchCommand_LaunchGame::vftable assignment and call to the
                       MatchCommand_LaunchGame cleanup routine. */
  puStack_8 = &LAB_0169c588;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CWMatchCommand_LaunchGame::vftable;
  local_4 = 0xffffffff;
  MatchCommand_LaunchGame_dtor(this);
  ExceptionList = local_c;
  return;
}

