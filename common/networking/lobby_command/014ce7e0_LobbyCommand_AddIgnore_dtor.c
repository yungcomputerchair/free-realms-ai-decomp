// addr: 0x014ce7e0
// name: LobbyCommand_AddIgnore_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_AddIgnore_dtor(void * param_1) */

void __fastcall LobbyCommand_AddIgnore_dtor(void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys LobbyCommand_AddIgnore and releases the owned dynamic array/vector
                       header at +0x0c. The class name comes from the vtable symbol. */
  puStack_8 = &LAB_016abbc3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = LobbyCommand_AddIgnore::vftable;
  local_4 = 0;
  if (*(void **)((int)param_1 + 0xc) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0xc));
  }
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined4 *)((int)param_1 + 0x10) = 0;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(param_1);
  ExceptionList = local_c;
  return;
}

