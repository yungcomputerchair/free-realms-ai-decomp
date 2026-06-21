// addr: 0x013d9140
// name: LobbyCommand_DeleteAdjournedGame_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_DeleteAdjournedGame_dtor(void * this) */

void __fastcall LobbyCommand_DeleteAdjournedGame_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys LobbyCommand_DeleteAdjournedGame by setting its vtable then calling
                       LobbyCommand_dtor. Evidence is LobbyCommand_DeleteAdjournedGame::vftable and
                       base destructor call. */
  puStack_8 = &LAB_0168bfe8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = LobbyCommand_DeleteAdjournedGame::vftable;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

