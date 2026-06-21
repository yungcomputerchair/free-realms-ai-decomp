// addr: 0x014bda90
// name: LobbyCommand_SetFlag_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_SetFlag_dtor(void * this) */

void __fastcall LobbyCommand_SetFlag_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for LobbyCommand_SetFlag; it restores the class vftable and then
                       runs the base command destructor. */
  puStack_8 = &LAB_016a95f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = LobbyCommand_SetFlag::vftable;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

