// addr: 0x013b3090
// name: LobbyCommand_Join_scalarDeletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyCommand_Join_scalarDeletingDtor(void * this, char flags) */

void * __thiscall LobbyCommand_Join_scalarDeletingDtor(void *this,char flags)

{
                    /* Compiler scalar-deleting destructor for LobbyCommand_Join. It invokes the
                       Join destructor and conditionally frees the object according to the
                       deleting-destructor flag. */
  LobbyCommand_Join_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

