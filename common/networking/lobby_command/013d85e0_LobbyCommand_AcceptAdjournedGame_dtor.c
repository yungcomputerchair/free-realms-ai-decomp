// addr: 0x013d85e0
// name: LobbyCommand_AcceptAdjournedGame_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_AcceptAdjournedGame_dtor(void * this) */

void __fastcall LobbyCommand_AcceptAdjournedGame_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys LobbyCommand_AcceptAdjournedGame by restoring its vtable and
                       delegating to LobbyCommand_dtor. Evidence is
                       LobbyCommand_AcceptAdjournedGame::vftable followed by LobbyCommand_dtor. */
  puStack_8 = &LAB_0168be08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = LobbyCommand_AcceptAdjournedGame::vftable;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

