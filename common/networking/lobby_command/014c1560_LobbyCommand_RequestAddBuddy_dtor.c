// addr: 0x014c1560
// name: LobbyCommand_RequestAddBuddy_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_RequestAddBuddy_dtor(void * this) */

void __fastcall LobbyCommand_RequestAddBuddy_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for LobbyCommand_RequestAddBuddy; it restores the class vftable
                       and calls base cleanup. */
  puStack_8 = &LAB_016aa068;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = LobbyCommand_RequestAddBuddy::vftable;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

