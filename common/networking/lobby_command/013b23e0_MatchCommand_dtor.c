// addr: 0x013b23e0
// name: MatchCommand_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MatchCommand_dtor(void * this) */

void __fastcall MatchCommand_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys a MatchCommand by installing MatchCommand::vftable and invoking the
                       LobbyCommand base destructor. Evidence is the MatchCommand::vftable
                       assignment and call to the LobbyCommand destructor helper. */
  puStack_8 = &LAB_01687878;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = MatchCommand::vftable;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

