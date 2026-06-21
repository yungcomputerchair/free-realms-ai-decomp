// addr: 0x014c19f0
// name: LobbyCommand_RemoveIgnore_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_RemoveIgnore_dtor(void * this) */

void __fastcall LobbyCommand_RemoveIgnore_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for LobbyCommand_RemoveIgnore; it frees an owned buffer/list at
                       offset 0x0c, clears its bookkeeping, and runs base cleanup. */
  puStack_8 = &LAB_016aa163;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = LobbyCommand_RemoveIgnore::vftable;
  local_4 = 0;
  if (*(void **)((int)this + 0xc) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0xc));
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

