// addr: 0x014c0f70
// name: LobbyCommand_RespondAddBuddy_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_RespondAddBuddy_dtor(void * this) */

void __fastcall LobbyCommand_RespondAddBuddy_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for LobbyCommand_RespondAddBuddy; it restores the vftable and runs
                       base cleanup. */
  puStack_8 = &LAB_016a9f48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = LobbyCommand_RespondAddBuddy::vftable;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

