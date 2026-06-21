// addr: 0x014bc0a0
// name: LobbyCommand_SetTournament_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_SetTournament_dtor(void * this) */

void __fastcall LobbyCommand_SetTournament_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for LobbyCommand_SetTournament; it restores the class vftable and
                       delegates to the base lobby command destructor. */
  puStack_8 = &LAB_016a9188;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = LobbyCommand_SetTournament::vftable;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

