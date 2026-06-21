// addr: 0x014cf110
// name: LobbyCommand_AddBooster_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_AddBooster_dtor(void * param_1) */

void __fastcall LobbyCommand_AddBooster_dtor(void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor body for LobbyCommand_AddBooster; it installs the AddBooster
                       vtable and runs the security-cookie epilogue. No owned fields are released in
                       this body. */
  puStack_8 = &LAB_016abd68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = LobbyCommand_AddBooster::vftable;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(param_1);
  ExceptionList = local_c;
  return;
}

