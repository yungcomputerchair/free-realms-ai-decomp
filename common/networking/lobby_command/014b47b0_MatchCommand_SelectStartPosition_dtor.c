// addr: 0x014b47b0
// name: MatchCommand_SelectStartPosition_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MatchCommand_SelectStartPosition_dtor(void * this) */

void __fastcall MatchCommand_SelectStartPosition_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for MatchCommand_SelectStartPosition; it frees an owned dynamic
                       buffer at offset 5, resets its vector/string-style fields, then chains to
                       MatchCommand cleanup. Evidence is the
                       MatchCommand_SelectStartPosition::vftable assignment and buffer cleanup
                       pattern. */
  puStack_8 = &LAB_016a7b13;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = MatchCommand_SelectStartPosition::vftable;
  local_4 = 0;
  if (*(void **)((int)this + 0x14) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x14));
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  local_4 = 0xffffffff;
  MatchCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

