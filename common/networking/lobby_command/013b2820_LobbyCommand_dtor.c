// addr: 0x013b2820
// name: LobbyCommand_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_dtor(void * this) */

void __fastcall LobbyCommand_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys a LobbyCommand by installing LobbyCommand::vftable and invoking the
                       NetworkCommand/base destructor. Evidence is the LobbyCommand::vftable
                       assignment and calls from many derived lobby command destructors. */
  puStack_8 = &LAB_01687968;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = LobbyCommand::vftable;
  local_4 = 0xffffffff;
  NetworkCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

