// addr: 0x014c2980
// name: LobbyCommand_RemoveAdjournedGame_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_RemoveAdjournedGame_dtor(void * this) */

void __fastcall LobbyCommand_RemoveAdjournedGame_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for LobbyCommand_RemoveAdjournedGame; it installs the class
                       vftable then chains to the base lobby command destructor. Evidence is the
                       LobbyCommand_RemoveAdjournedGame::vftable reference and final call to
                       FUN_013b2820. */
  puStack_8 = &LAB_016aa3f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = LobbyCommand_RemoveAdjournedGame::vftable;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

