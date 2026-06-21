// addr: 0x014b3df0
// name: MatchCommand_SetBulkMatchState_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MatchCommand_SetBulkMatchState_dtor(void * this) */

void __fastcall MatchCommand_SetBulkMatchState_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for MatchCommand_SetBulkMatchState; it frees two owned dynamic
                       buffers at object offsets 8 and 4 before chaining to MatchCommand cleanup.
                       Evidence is the MatchCommand_SetBulkMatchState::vftable assignment and buffer
                       reset/free pattern. */
  puStack_8 = &LAB_016a78ee;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = MatchCommand_SetBulkMatchState::vftable;
  local_4 = 1;
  if (*(void **)((int)this + 0x20) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x20));
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  local_4 = 0;
  if (*(void **)((int)this + 0x10) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x10));
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  local_4 = 0xffffffff;
  MatchCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

