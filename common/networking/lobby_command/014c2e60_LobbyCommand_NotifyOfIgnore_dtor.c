// addr: 0x014c2e60
// name: LobbyCommand_NotifyOfIgnore_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_NotifyOfIgnore_dtor(void * this) */

void __fastcall LobbyCommand_NotifyOfIgnore_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for LobbyCommand_NotifyOfIgnore; it resets the vftable and
                       delegates to the base destructor. Evidence is
                       LobbyCommand_NotifyOfIgnore::vftable and the terminal FUN_013b2820 call. */
  puStack_8 = &LAB_016aa4e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = LobbyCommand_NotifyOfIgnore::vftable;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

