// addr: 0x013d0380
// name: DeckCommand_AddOnlineDeck_scalarDeletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * DeckCommand_AddOnlineDeck_scalarDeletingDtor(void * this, char flags)
    */

void * __thiscall DeckCommand_AddOnlineDeck_scalarDeletingDtor(void *this,char flags)

{
                    /* Compiler scalar-deleting destructor for DeckCommand_AddOnlineDeck. It calls
                       the real destructor and conditionally frees this when flags bit 0 is set. */
  DeckCommand_AddOnlineDeck_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

