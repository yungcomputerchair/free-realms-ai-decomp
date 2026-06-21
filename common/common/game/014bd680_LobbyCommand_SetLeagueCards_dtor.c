// addr: 0x014bd680
// name: LobbyCommand_SetLeagueCards_dtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_SetLeagueCards_dtor(void * this) */

void __fastcall LobbyCommand_SetLeagueCards_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys a LobbyCommand_SetLeagueCards object by installing its vtable,
                       destroying an owned red-black tree member, and chaining to LobbyCommand_dtor.
                        */
  puStack_8 = &LAB_016a9513;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = LobbyCommand_SetLeagueCards::vftable;
  local_4 = 0;
  StdRbTree_destroyAndFree((void *)((int)this + 0xc));
  LobbyCommand_dtor(this);
  ExceptionList = puStack_8;
  return;
}

