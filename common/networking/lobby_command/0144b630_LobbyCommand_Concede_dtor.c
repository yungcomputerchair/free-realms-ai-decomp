// addr: 0x0144b630
// name: LobbyCommand_Concede_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_Concede_dtor(void * this) */

void __fastcall LobbyCommand_Concede_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for LobbyCommand_Concede; it restores the class vftable then runs
                       the LobbyCommand base destructor/helper. Evidence is the
                       LobbyCommand_Concede::vftable assignment. */
  puStack_8 = &LAB_0169aa88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = LobbyCommand_Concede::vftable;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

