// addr: 0x013dea10
// name: DeckServiceBase_scalarDeletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * DeckServiceBase_scalarDeletingDtor(void * this, char flags) */

void * __thiscall DeckServiceBase_scalarDeletingDtor(void *this,char flags)

{
                    /* Compiler scalar-deleting destructor for Engine::DeckServiceBase. It invokes
                       the DeckServiceBase destructor and conditionally frees this. */
  Engine_DeckServiceBase_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

