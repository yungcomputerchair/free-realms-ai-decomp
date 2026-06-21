// addr: 0x014cdf10
// name: LobbyCommand_AddIgnoreByNameResponse_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_AddIgnoreByNameResponse_dtor(void * param_1) */

void __fastcall LobbyCommand_AddIgnoreByNameResponse_dtor(void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys LobbyCommand_AddIgnoreByNameResponse, releasing two
                       small-string-optimized string members. The class is identified by the
                       LobbyCommand_AddIgnoreByNameResponse vtable symbol. */
  puStack_8 = &LAB_016aba6e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = LobbyCommand_AddIgnoreByNameResponse::vftable;
  local_4 = 1;
  if (0xf < *(uint *)((int)param_1 + 0x44)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0x30));
  }
  *(undefined4 *)((int)param_1 + 0x44) = 0xf;
  *(undefined4 *)((int)param_1 + 0x40) = 0;
  *(undefined1 *)((int)param_1 + 0x30) = 0;
  local_4 = 0;
  if (0xf < *(uint *)((int)param_1 + 0x24)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0x10));
  }
  *(undefined4 *)((int)param_1 + 0x24) = 0xf;
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  *(undefined1 *)((int)param_1 + 0x10) = 0;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(param_1);
  ExceptionList = local_c;
  return;
}

