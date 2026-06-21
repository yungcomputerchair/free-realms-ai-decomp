// addr: 0x013ecf60
// name: DeckValidation_validateConstructedDeck
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool DeckValidation_validateConstructedDeck(void * deck, void * context) */

bool DeckValidation_validateConstructedDeck(void *deck,void *context)

{
  bool bVar1;
  uint uVar2;
  
                    /* Validates a deck against constructed-deck rules: at least 0x28 cards in the
                       draw deck and at most 3 cards of each title. Both checks must pass. */
  uVar2 = DeckValidation_requireMinimumDrawDeckCards(deck,context,0x28);
  bVar1 = DeckValidation_validateMaxCopiesPerTitle(deck,(int)context);
  return bVar1 && (char)uVar2 != '\0';
}

