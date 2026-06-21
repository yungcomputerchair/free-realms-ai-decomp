// addr: 0x014ccf00
// name: LobbyCommand_AdjournedGame_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_AdjournedGame_dtor(void * param_1) */

void __fastcall LobbyCommand_AdjournedGame_dtor(void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys a LobbyCommand_AdjournedGame by installing its vtable and freeing
                       the dynamic buffer at fields +0x14..+0x1c. The vtable symbol identifies the
                       class. */
  puStack_8 = &LAB_016ab743;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = LobbyCommand_AdjournedGame::vftable;
  local_4 = 0;
  if (*(void **)((int)param_1 + 0x14) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0x14));
  }
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined4 *)((int)param_1 + 0x18) = 0;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(param_1);
  ExceptionList = local_c;
  return;
}

