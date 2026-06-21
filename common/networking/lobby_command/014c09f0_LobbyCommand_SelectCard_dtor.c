// addr: 0x014c09f0
// name: LobbyCommand_SelectCard_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_SelectCard_dtor(void * this) */

void __fastcall LobbyCommand_SelectCard_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for LobbyCommand_SelectCard; it restores the class vftable and
                       delegates to the base destructor. */
  puStack_8 = &LAB_016a9e28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = LobbyCommand_SelectCard::vftable;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

