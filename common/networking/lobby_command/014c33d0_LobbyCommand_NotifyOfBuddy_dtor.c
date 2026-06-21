// addr: 0x014c33d0
// name: LobbyCommand_NotifyOfBuddy_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_NotifyOfBuddy_dtor(void * this) */

void __fastcall LobbyCommand_NotifyOfBuddy_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for LobbyCommand_NotifyOfBuddy; it installs the class vftable and
                       calls the common base destructor. Evidence is the
                       LobbyCommand_NotifyOfBuddy::vftable reference. */
  puStack_8 = &LAB_016aa608;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = LobbyCommand_NotifyOfBuddy::vftable;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

