// addr: 0x014c71c0
// name: LobbyCommand_ChangeBulkStatus_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_ChangeBulkStatus_dtor(void * this) */

void __fastcall LobbyCommand_ChangeBulkStatus_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for LobbyCommand_ChangeBulkStatus; it frees two vector-like
                       dynamic arrays, clears their begin/end/capacity fields, then calls the base
                       destructor. Evidence is LobbyCommand_ChangeBulkStatus::vftable and cleanup of
                       fields 3-5 and 7-9. */
  puStack_8 = &LAB_016aaf1e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = LobbyCommand_ChangeBulkStatus::vftable;
  local_4 = 1;
  if (*(void **)((int)this + 0x1c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x1c));
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
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

