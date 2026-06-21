// addr: 0x014c3e90
// name: LobbyCommand_JoinLeague_deletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyCommand_JoinLeague_deletingDtor(void * this, int flags) */

void * __thiscall LobbyCommand_JoinLeague_deletingDtor(void *this,int flags)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for LobbyCommand_JoinLeague. It runs the
                       JoinLeague destructor chain and frees this when flags&1 is set. */
  puStack_8 = &LAB_016aa8a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = LobbyCommand_JoinLeague::vftable;
  local_4 = 0xffffffff;
  LobbyCommand_Join_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

