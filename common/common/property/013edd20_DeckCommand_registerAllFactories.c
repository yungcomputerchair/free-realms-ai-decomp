// addr: 0x013edd20
// name: DeckCommand_registerAllFactories
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void DeckCommand_registerAllFactories(void) */

void DeckCommand_registerAllFactories(void)

{
                    /* Registers all DeckCommand factories: base DeckCommand, AddOnlineDeck,
                       DeleteOnlineDeck, and PopulateOnlineDeckData. Evidence is the four called
                       DeckCommand_*_registerFactory functions. */
  DeckCommand_registerFactory();
  DeckCommand_AddOnlineDeck_registerFactory();
  DeckCommand_DeleteOnlineDeck_registerFactory();
  DeckCommand_PopulateOnlineDeckData_registerFactory();
  return;
}

