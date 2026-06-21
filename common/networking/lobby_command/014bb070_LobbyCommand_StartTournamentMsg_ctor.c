// addr: 0x014bb070
// name: LobbyCommand_StartTournamentMsg_ctor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyCommand_StartTournamentMsg_ctor(void * this) */

void * __fastcall LobbyCommand_StartTournamentMsg_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs LobbyCommand_StartTournamentMsg by running LobbyCommand_ctor,
                       installing its vtable, and clearing a member field. Evidence is
                       LobbyCommand_StartTournamentMsg::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a8df8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LobbyCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = LobbyCommand_StartTournamentMsg::vftable;
  *(undefined4 *)((int)this + 0xc) = 0;
  ExceptionList = local_c;
  return this;
}

