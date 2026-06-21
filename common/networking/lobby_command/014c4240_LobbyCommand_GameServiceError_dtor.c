// addr: 0x014c4240
// name: LobbyCommand_GameServiceError_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_GameServiceError_dtor(void * this) */

void __fastcall LobbyCommand_GameServiceError_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for LobbyCommand_GameServiceError; it frees the inline/heap string
                       member when its capacity exceeds the small-string limit, clears it, then
                       calls the base destructor. Evidence is LobbyCommand_GameServiceError::vftable
                       and the string-capacity check at fields 9/10. */
  puStack_8 = &LAB_016aa943;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = LobbyCommand_GameServiceError::vftable;
  local_4 = 0;
  if (0xf < *(uint *)((int)this + 0x28)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x14));
  }
  *(undefined4 *)((int)this + 0x28) = 0xf;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

