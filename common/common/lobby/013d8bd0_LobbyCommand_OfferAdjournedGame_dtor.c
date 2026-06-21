// addr: 0x013d8bd0
// name: LobbyCommand_OfferAdjournedGame_dtor
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_OfferAdjournedGame_dtor(void * this) */

void __fastcall LobbyCommand_OfferAdjournedGame_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructs a LobbyCommand_OfferAdjournedGame by restoring its vtable and
                       calling the LobbyCommand base destructor. */
  puStack_8 = &LAB_0168bef8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = LobbyCommand_OfferAdjournedGame::vftable;
  local_4 = 0xffffffff;
  LobbyCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

