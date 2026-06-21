// addr: 0x013d8c80
// name: LobbyCommand_OfferAdjournedGame_doCommand
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint LobbyCommand_OfferAdjournedGame_doCommand(void * this) */

uint __fastcall LobbyCommand_OfferAdjournedGame_doCommand(void *this)

{
  void *this_00;
  undefined4 extraout_EAX;
  
                    /* Executes the offer-adjourned-game command by ensuring lobby service state
                       exists and passing stored fields to LobbyService_offerAdjournedGame. Returns
                       success. */
  this_00 = (void *)FUN_012cfde0();
  LobbyService_offerAdjournedGame
            (this_00,*(uint *)((int)this + 0xc),*(uint *)((int)this + 8),*(void **)((int)this + 4));
  return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
}

