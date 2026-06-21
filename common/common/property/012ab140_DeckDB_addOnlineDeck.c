// addr: 0x012ab140
// name: DeckDB_addOnlineDeck
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint DeckDB_addOnlineDeck(void * deck) */

uint __thiscall DeckDB_addOnlineDeck(void *this,void *deck)

{
  bool bVar1;
  void *handle;
  void *name;
  undefined4 extraout_EAX;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds a DeckCommand_AddOnlineDeck for a deck, attaches/sends its property
                       list, updates the DeckDB if missing, then destroys the command and returns
                       the add result. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166c6b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  DeckCommand_AddOnlineDeck_ctor(local_18);
  local_4 = 0;
  DeckCommand_AddOnlineDeck_captureSerializedDeck(local_18,deck);
  DisplayActionManager_ensureSingleton();
  CommandHandle_releaseIfPresent(handle);
  name = Deck_getPropertyList(deck);
  FixedRecordVector_removeRecordByString(this,name);
  bVar1 = DeckDB_addDeckIfMissing(this,deck);
  local_4 = 0xffffffff;
  DeckCommand_AddOnlineDeck_dtor(local_18);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)extraout_EAX >> 8),bVar1);
}

