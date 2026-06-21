// addr: 0x013cfd70
// name: DeckCommand_DeleteOnlineDeck_deletingDtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall DeckCommand_DeleteOnlineDeck_deletingDtor(void *param_1,byte param_2)

{
                    /* Deleting destructor wrapper for DeckCommand_DeleteOnlineDeck, calling its
                       destructor and freeing the object when flags bit 0 is set. Evidence is the
                       direct call to the class destructor plus conditional _free. */
  DeckCommand_DeleteOnlineDeck_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

