// addr: 0x014ba800
// name: LobbyCommand_UpdateTournament_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_UpdateTournament_dtor(void * this) */

void __fastcall LobbyCommand_UpdateTournament_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for LobbyCommand_UpdateTournament; it frees an owned dynamic
                       buffer at offset 4, resets the buffer fields, then calls LobbyCommand base
                       cleanup. Evidence is the LobbyCommand_UpdateTournament::vftable assignment
                       and buffer cleanup pattern. */
  puStack_8 = &LAB_016a8d03;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = LobbyCommand_UpdateTournament::vftable;
  local_4 = 0;
  if (*(void **)((int)this + 0x10) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x10));
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

