// addr: 0x013ed580
// name: DeckValidation_validateZPDeck
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool DeckValidation_validateZPDeck(void * deck, int ruleId, void * errors,
   bool runSharedChecks, void * context) */

bool __thiscall
DeckValidation_validateZPDeck
          (void *this,void *deck,int ruleId,void *errors,bool runSharedChecks,void *context)

{
  bool bVar1;
  void *deck_00;
  uint uVar2;
  
                    /* Validates a CWDeck/Deck against selected deck validation rule ids,
                       dispatching to constructed, singleton, common-only, no-rare, and blob-compare
                       checks. */
  if (deck != (void *)0x0) {
    deck_00 = (void *)FUN_00d8d382(deck,0,&Deck::RTTI_Type_Descriptor,&CWDeck::RTTI_Type_Descriptor,
                                   0);
    if (deck_00 != (void *)0x0) {
      if (ruleId < 0x1adb2) {
        if (ruleId == 0x1adb1) {
          bVar1 = PropertyBlob_compare40(deck_00,errors);
        }
        else {
          if (ruleId != 1) {
            return false;
          }
          bVar1 = DeckValidation_validateConstructedDeck(deck_00,errors);
        }
      }
      else if (ruleId == 0x1adb2) {
        bVar1 = DeckValidation_validateSingletonDeck(deck_00,errors);
      }
      else if (ruleId == 0x1adb3) {
        bVar1 = DeckValidation_validateCommonOnly(deck_00,errors);
      }
      else {
        if (ruleId != 0x1adb5) {
          return false;
        }
        bVar1 = DeckValidation_validateNoRareCards(deck_00,errors);
      }
      bVar1 = bVar1 == false;
      if ((runSharedChecks) &&
         (uVar2 = CollectionResolver_invokeOrRecordMissing(this,deck,errors,(int)context),
         (char)uVar2 == '\0')) {
        bVar1 = true;
      }
      return !bVar1;
    }
    WAErrorLog_write("Attempted to validate non ZPDeck");
  }
  return false;
}

