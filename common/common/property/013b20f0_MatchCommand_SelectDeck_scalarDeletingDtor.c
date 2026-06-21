// addr: 0x013b20f0
// name: MatchCommand_SelectDeck_scalarDeletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MatchCommand_SelectDeck_scalarDeletingDtor(void * this, char flags) */

void * __thiscall MatchCommand_SelectDeck_scalarDeletingDtor(void *this,char flags)

{
                    /* Compiler scalar-deleting destructor for MatchCommand_SelectDeck. It calls the
                       real destructor and frees this when the low flag bit is set. */
  MatchCommand_SelectDeck_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

