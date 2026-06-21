// addr: 0x014c5390
// name: LobbyCommand_DisplayStats_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_DisplayStats_dtor(void * param_1) */

void __fastcall LobbyCommand_DisplayStats_dtor(void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys LobbyCommand_DisplayStats, releasing a tree member, an SSO string
                       member, and a dynamic vector/array member. The vtable symbol identifies the
                       class. */
  puStack_8 = &LAB_016aaba9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = LobbyCommand_DisplayStats::vftable;
  local_4 = 2;
  MessageDB_IntTextMap_dtor((void *)((int)param_1 + 0x48));
  if (0xf < *(uint *)((int)param_1 + 0x44)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0x30));
  }
  *(undefined4 *)((int)param_1 + 0x44) = 0xf;
  *(undefined4 *)((int)param_1 + 0x40) = 0;
  *(undefined1 *)((int)param_1 + 0x30) = 0;
  if (*(void **)((int)param_1 + 0x10) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0x10));
  }
  *(undefined4 *)((int)param_1 + 0x10) = 0;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined4 *)((int)param_1 + 0x18) = 0;
  LobbyCommand_dtor(param_1);
  ExceptionList = puStack_8;
  return;
}

