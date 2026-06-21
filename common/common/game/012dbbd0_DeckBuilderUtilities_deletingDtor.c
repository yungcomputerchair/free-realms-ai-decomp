// addr: 0x012dbbd0
// name: DeckBuilderUtilities_deletingDtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * DeckBuilderUtilities_deletingDtor(void * this, char flags) */

void * __thiscall DeckBuilderUtilities_deletingDtor(void *this,char flags)

{
                    /* Scalar deleting destructor wrapper for DeckBuilderUtilities; it invokes the
                       real destructor and frees this when bit 0 of the flags is set. */
  DeckBuilderUtilities_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

