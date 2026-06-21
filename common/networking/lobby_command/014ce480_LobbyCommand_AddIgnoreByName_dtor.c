// addr: 0x014ce480
// name: LobbyCommand_AddIgnoreByName_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_AddIgnoreByName_dtor(void * param_1) */

void __fastcall LobbyCommand_AddIgnoreByName_dtor(void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys LobbyCommand_AddIgnoreByName and releases its string member if it is
                       not using SSO storage. The class is identified by the vtable symbol. */
  puStack_8 = &LAB_016abb33;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = LobbyCommand_AddIgnoreByName::vftable;
  local_4 = 0;
  if (0xf < *(uint *)((int)param_1 + 0x20)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0xc));
  }
  *(undefined4 *)((int)param_1 + 0x20) = 0xf;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  *(undefined1 *)((int)param_1 + 0xc) = 0;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(param_1);
  ExceptionList = local_c;
  return;
}

