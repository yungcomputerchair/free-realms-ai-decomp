// addr: 0x014c89c0
// name: LobbyCommand_BuyLeagueActions_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_BuyLeagueActions_dtor(void * this) */

void __fastcall LobbyCommand_BuyLeagueActions_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for LobbyCommand_BuyLeagueActions; it frees a vector-like dynamic
                       array at fields 5-7, clears the pointers, and calls the base destructor.
                       Evidence is LobbyCommand_BuyLeagueActions::vftable and begin/end/capacity
                       cleanup. */
  puStack_8 = &LAB_016ab283;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = LobbyCommand_BuyLeagueActions::vftable;
  local_4 = 0;
  if (*(void **)((int)this + 0x14) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x14));
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

