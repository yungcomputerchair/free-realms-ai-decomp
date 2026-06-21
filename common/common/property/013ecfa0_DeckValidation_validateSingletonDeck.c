// addr: 0x013ecfa0
// name: DeckValidation_validateSingletonDeck
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool DeckValidation_validateSingletonDeck(void * deck, void * context) */

bool DeckValidation_validateSingletonDeck(void *deck,void *context)

{
  bool bVar1;
  uint uVar2;
  
                    /* Validates a deck against singleton-style rules: at least 0x28 draw-deck cards
                       and at most 1 card of each title. Both checks must pass. */
  uVar2 = DeckValidation_requireMinimumDrawDeckCards(deck,context,0x28);
  bVar1 = DeckValidation_validateMaxCopiesPerTitle(deck,(int)context);
  return bVar1 && (char)uVar2 != '\0';
}

