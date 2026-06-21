// addr: 0x014bfbd0
// name: LobbyCommand_SendPing_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_SendPing_dtor(void * this) */

void __fastcall LobbyCommand_SendPing_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for LobbyCommand_SendPing; it sets the class vftable and delegates
                       to base cleanup. */
  puStack_8 = &LAB_016a9bd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = LobbyCommand_SendPing::vftable;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

