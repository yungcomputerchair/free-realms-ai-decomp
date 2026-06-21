// addr: 0x014e3f70
// name: DeckCommand_PopulateOnlineDeckData_vectorFillRange
// subsystem: common/networking/deck_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DeckCommand_PopulateOnlineDeckData_vectorFillRange(int * first, int *
   last, int * value) */

void __cdecl DeckCommand_PopulateOnlineDeckData_vectorFillRange(int *first,int *last,int *value)

{
  for (; first != last; first = first + 1) {
    *first = *value;
  }
  return;
}

