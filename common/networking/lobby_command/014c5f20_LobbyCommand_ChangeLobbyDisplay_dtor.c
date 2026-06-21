// addr: 0x014c5f20
// name: LobbyCommand_ChangeLobbyDisplay_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_ChangeLobbyDisplay_dtor(void * this) */

void __fastcall LobbyCommand_ChangeLobbyDisplay_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for LobbyCommand_ChangeLobbyDisplay; it resets the class vftable
                       and invokes the base destructor. Evidence is
                       LobbyCommand_ChangeLobbyDisplay::vftable in the body. */
  puStack_8 = &LAB_016aada8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = LobbyCommand_ChangeLobbyDisplay::vftable;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

